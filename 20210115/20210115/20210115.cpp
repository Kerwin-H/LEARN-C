#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//====一个和结构体相关的通讯录代码的实现

//结构体写通讯录address book
typedef struct Person{
	char name[1024];
	char tel[1024];
}Person;
#define MAX_PERSON 1024
typedef struct AddressBook{
	Person persons[MAX_PERSON];  //上限
	//有1024空间,初始情况为空
	//size 用来控制通讯录里有多少个人
	//[0,size)  有效区间
	int size;
}AddressBook;

int menu(){
	printf("=========================\n");
	printf("1.新增联系人\n");
	printf("2.查找联系人\n");
	printf("3.删除联系人\n");
	printf("4.修改联系人\n");
	printf("5.查看所有联系人\n");
	printf("6.清空所有联系人\n");
	printf("0.退出\n");
	printf("=========================\n");
	int choice = 0;
	printf("请输入您的选择:");
	scanf("%d",&choice);
	return choice;
}

void init(AddressBook* addressBook){
	//将通讯录弄成0就可以实现初始化
	addressBook->size = 0;
	//memset(addressBook,0,sizeof(AddressBook));
}

void addPerson(AddressBook* addressBook){
	printf("新增联系人\n");
	//判断通讯录是否满了
	int currentSize = addressBook->size;
	if (currentSize >= MAX_PERSON){
		printf("已满,新增失败!\n");
		return;
	}

	//直接输入
	Person* p = &addressBook->persons[addressBook->size];
	//   同上   scanf("%s",addressBook->persons[addressBook->size].name);
	//这里使用结构体指针,直接修改全局变量
	//如果使用结构体变量,随着结束会被释放,没有用
	printf("请输入新的联系人的姓名:");
	scanf("%s",p->name);
	printf("请输入新的联系人的电话:");
	scanf("%s",p->tel);
	printf("新增联系人成功!\n");
	addressBook->size++;
}

void findPerson(AddressBook* addressBook){
	//查找联系人
	//按姓名查找电话
	printf("按姓名查找联系人\n");
	printf("请输入要查找的姓名:");
	char name[1024] = { 0 };
	scanf("%s",name);

	for (int i = 0; i < addressBook->size; i++){
		Person* p = &addressBook->persons[i];
		if (strcmp(name, p->name) == 0){
			printf("[%d]\t\t%s\t\t%s\n", i, p->name, p->tel);
		}
	}
	printf("查找联系人完成!\n");
}

void delPerson(AddressBook* addressBook){
	//删除联系人
	//输入联系人的编号来进行删除(其他删除方式类似)
	printf("删除联系人\n");
	printf("请输入要删除的联系人编号:");
	int id = 0;
	scanf("%d",&id);
	if (id < 0 || id >= addressBook->size){
		printf("您输入的编号有误!\n");
		return;
	}
	//删除下标为id的元素,直接size--
	if (id == addressBook->size - 1){
		addressBook->size--;
		printf("删除成功!\n");
		return;
	}
	//这里的删除方式,就是将最后一个编号的数置换到前面
	//然后直接size-1将数组缩小就可以达到删除的目的
	addressBook->persons[id]
		= addressBook->persons[addressBook->size - 1];
	//再删除最后一个元素,也就是缩小数组
	addressBook->size--;
	printf("删除成功!\n");
}

void updatePerson(AddressBook* addressBook){
	//修改联系人`
	printf("修改联系人\n");
	printf("请输入要修改的联系人编号:");
	int id = 0;
	scanf("%d",&id);
	if (id < 0 || id >= addressBook->size){
		printf("您输入的编号有误!\n");
		return;
	}
	Person* p = &addressBook->persons[id];
	printf("请输入新的联系人的姓名:");
	scanf("%s", p->name);
	printf("请输入新的联系人的电话:");
	scanf("%s", p->tel);
	printf("修改联系人成功!\n");
}

void printPerson(AddressBook* addressBook){
	printf("打印所有联系人\n");
	for (int i = 0; i < addressBook->size; i++){
		Person* p = &addressBook->persons[i];
		printf("[%d]\t\t%s\t\t%s\n",i,p->name,p->tel);
	}
	printf("共计 [%d] 条记录\n",addressBook->size);
}

void clearPerson(AddressBook* addressBook){
	//通讯录清空
	printf("1.确认清空\n");
	printf("0.返回\n");
	printf("请输入您的选择:");
	int a;
	scanf("%d",&a);
	while (1){
		if (a == 1){
			addressBook->size = 0;
			for (int i = 0; i < addressBook->size; i++){
				Person* p = &addressBook->persons[i];
				printf("[%d]\t\t%s\t\t%s\n", i, p->name, p->tel);
			}
			printf("共计 [%d] 条记录\n", addressBook->size);
			printf("已清空通讯录!\n");
			break;
		}
		else if (a == 0){
			printf("已取消\n");
			break;
		}
		else{
			printf("您的输入有误,请重新输入!\n");
			continue;
		}
	}
}

typedef void(*Func)(AddressBook*);  //这里是创建了一个转移表,然后自定义函数就可以将内容引出来,方便利用

AddressBook addressBook;

int main(){
	//转移表
	Func funcs[] = {
		NULL,   //加入NULL后面就是直接对应的,方便操作
		addPerson,
		findPerson,
		delPerson,
		updatePerson,
		printPerson,
		clearPerson
	};
	//初始化通讯录
	init(&addressBook);

	//主循环
	while (1){
		int choice = menu();
		if (choice < 0 || choice >= sizeof(funcs) / sizeof(funcs[0])){
			printf("您的输入无效,请重新输入!\n");
			continue;
		}
		if (choice == 0){
			printf("Goodbye!\n");
			break;
		}
		funcs[choice](&addressBook);
	}
	system("pause");
	return 0;
}