#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//====һ���ͽṹ����ص�ͨѶ¼�����ʵ��

//�ṹ��дͨѶ¼address book
typedef struct Person{
	char name[1024];
	char tel[1024];
}Person;
#define MAX_PERSON 1024
typedef struct AddressBook{
	Person persons[MAX_PERSON];  //����
	//��1024�ռ�,��ʼ���Ϊ��
	//size ��������ͨѶ¼���ж��ٸ���
	//[0,size)  ��Ч����
	int size;
}AddressBook;

int menu(){
	printf("=========================\n");
	printf("1.������ϵ��\n");
	printf("2.������ϵ��\n");
	printf("3.ɾ����ϵ��\n");
	printf("4.�޸���ϵ��\n");
	printf("5.�鿴������ϵ��\n");
	printf("6.���������ϵ��\n");
	printf("0.�˳�\n");
	printf("=========================\n");
	int choice = 0;
	printf("����������ѡ��:");
	scanf("%d",&choice);
	return choice;
}

void init(AddressBook* addressBook){
	//��ͨѶ¼Ū��0�Ϳ���ʵ�ֳ�ʼ��
	addressBook->size = 0;
	//memset(addressBook,0,sizeof(AddressBook));
}

void addPerson(AddressBook* addressBook){
	printf("������ϵ��\n");
	//�ж�ͨѶ¼�Ƿ�����
	int currentSize = addressBook->size;
	if (currentSize >= MAX_PERSON){
		printf("����,����ʧ��!\n");
		return;
	}

	//ֱ������
	Person* p = &addressBook->persons[addressBook->size];
	//   ͬ��   scanf("%s",addressBook->persons[addressBook->size].name);
	//����ʹ�ýṹ��ָ��,ֱ���޸�ȫ�ֱ���
	//���ʹ�ýṹ�����,���Ž����ᱻ�ͷ�,û����
	printf("�������µ���ϵ�˵�����:");
	scanf("%s",p->name);
	printf("�������µ���ϵ�˵ĵ绰:");
	scanf("%s",p->tel);
	printf("������ϵ�˳ɹ�!\n");
	addressBook->size++;
}

void findPerson(AddressBook* addressBook){
	//������ϵ��
	//���������ҵ绰
	printf("������������ϵ��\n");
	printf("������Ҫ���ҵ�����:");
	char name[1024] = { 0 };
	scanf("%s",name);

	for (int i = 0; i < addressBook->size; i++){
		Person* p = &addressBook->persons[i];
		if (strcmp(name, p->name) == 0){
			printf("[%d]\t\t%s\t\t%s\n", i, p->name, p->tel);
		}
	}
	printf("������ϵ�����!\n");
}

void delPerson(AddressBook* addressBook){
	//ɾ����ϵ��
	//������ϵ�˵ı��������ɾ��(����ɾ����ʽ����)
	printf("ɾ����ϵ��\n");
	printf("������Ҫɾ������ϵ�˱��:");
	int id = 0;
	scanf("%d",&id);
	if (id < 0 || id >= addressBook->size){
		printf("������ı������!\n");
		return;
	}
	//ɾ���±�Ϊid��Ԫ��,ֱ��size--
	if (id == addressBook->size - 1){
		addressBook->size--;
		printf("ɾ���ɹ�!\n");
		return;
	}
	//�����ɾ����ʽ,���ǽ����һ����ŵ����û���ǰ��
	//Ȼ��ֱ��size-1��������С�Ϳ��Դﵽɾ����Ŀ��
	addressBook->persons[id]
		= addressBook->persons[addressBook->size - 1];
	//��ɾ�����һ��Ԫ��,Ҳ������С����
	addressBook->size--;
	printf("ɾ���ɹ�!\n");
}

void updatePerson(AddressBook* addressBook){
	//�޸���ϵ��`
	printf("�޸���ϵ��\n");
	printf("������Ҫ�޸ĵ���ϵ�˱��:");
	int id = 0;
	scanf("%d",&id);
	if (id < 0 || id >= addressBook->size){
		printf("������ı������!\n");
		return;
	}
	Person* p = &addressBook->persons[id];
	printf("�������µ���ϵ�˵�����:");
	scanf("%s", p->name);
	printf("�������µ���ϵ�˵ĵ绰:");
	scanf("%s", p->tel);
	printf("�޸���ϵ�˳ɹ�!\n");
}

void printPerson(AddressBook* addressBook){
	printf("��ӡ������ϵ��\n");
	for (int i = 0; i < addressBook->size; i++){
		Person* p = &addressBook->persons[i];
		printf("[%d]\t\t%s\t\t%s\n",i,p->name,p->tel);
	}
	printf("���� [%d] ����¼\n",addressBook->size);
}

void clearPerson(AddressBook* addressBook){
	//ͨѶ¼���
	printf("1.ȷ�����\n");
	printf("0.����\n");
	printf("����������ѡ��:");
	int a;
	scanf("%d",&a);
	while (1){
		if (a == 1){
			addressBook->size = 0;
			for (int i = 0; i < addressBook->size; i++){
				Person* p = &addressBook->persons[i];
				printf("[%d]\t\t%s\t\t%s\n", i, p->name, p->tel);
			}
			printf("���� [%d] ����¼\n", addressBook->size);
			printf("�����ͨѶ¼!\n");
			break;
		}
		else if (a == 0){
			printf("��ȡ��\n");
			break;
		}
		else{
			printf("������������,����������!\n");
			continue;
		}
	}
}

typedef void(*Func)(AddressBook*);  //�����Ǵ�����һ��ת�Ʊ�,Ȼ���Զ��庯���Ϳ��Խ�����������,��������

AddressBook addressBook;

int main(){
	//ת�Ʊ�
	Func funcs[] = {
		NULL,   //����NULL�������ֱ�Ӷ�Ӧ��,�������
		addPerson,
		findPerson,
		delPerson,
		updatePerson,
		printPerson,
		clearPerson
	};
	//��ʼ��ͨѶ¼
	init(&addressBook);

	//��ѭ��
	while (1){
		int choice = menu();
		if (choice < 0 || choice >= sizeof(funcs) / sizeof(funcs[0])){
			printf("����������Ч,����������!\n");
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