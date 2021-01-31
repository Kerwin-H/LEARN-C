#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct A{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};

//创建了一个新的枚举的数据类型
enum Sex{
	MALE=100,     //不能当成浮点数
	FEMALE,
	UNKNOWN,
};

typedef enum Sex Sex;

//创建一个联合体
union Test{
	char a;
	short b;
	int c;
};


//大小端字节序判断
int isBigEnd(){
	int a = 0x11223344;
	int* p = &a;
	char* p2 = (char*)p;
	if (*p2 == 0x11){
		return 1;
	}
	return 0;
}
//联合体实现!!!!!
int isBigEnd2(){
	union Un{
		char a;
		int b;
	}u;
	u.b = 0x11223344;
	if (u.a == 0x11){
		return 1;
	}
	return 0;
}


int main(){

	int arr[4];
	memset(arr, 0, 16);  //相当于初始化
	
	printf("%d\n",sizeof(struct A));
//==============================================
	//创建一个枚举类型的变量
	enum Sex s = MALE;  //或者进行别名的的定义
	printf("%d\n",s);
	printf("%d\n",FEMALE);
	printf("%d\n",UNKNOWN);


	//联合体使用场景少,牵制太多
	//union Test t;
	t.c = 0x11223344;
	printf("%x\n",t.c);
	t.a = 0x66;
	printf("%x\n",t.c);
	
	
	
	//printf("%d\n",sizeof(t));


	system("pause");
	return 0;
}