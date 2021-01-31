#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct A{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};

//������һ���µ�ö�ٵ���������
enum Sex{
	MALE=100,     //���ܵ��ɸ�����
	FEMALE,
	UNKNOWN,
};

typedef enum Sex Sex;

//����һ��������
union Test{
	char a;
	short b;
	int c;
};


//��С���ֽ����ж�
int isBigEnd(){
	int a = 0x11223344;
	int* p = &a;
	char* p2 = (char*)p;
	if (*p2 == 0x11){
		return 1;
	}
	return 0;
}
//������ʵ��!!!!!
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
	memset(arr, 0, 16);  //�൱�ڳ�ʼ��
	
	printf("%d\n",sizeof(struct A));
//==============================================
	//����һ��ö�����͵ı���
	enum Sex s = MALE;  //���߽��б����ĵĶ���
	printf("%d\n",s);
	printf("%d\n",FEMALE);
	printf("%d\n",UNKNOWN);


	//������ʹ�ó�����,ǣ��̫��
	//union Test t;
	t.c = 0x11223344;
	printf("%x\n",t.c);
	t.a = 0x66;
	printf("%x\n",t.c);
	
	
	
	//printf("%d\n",sizeof(t));


	system("pause");
	return 0;
}