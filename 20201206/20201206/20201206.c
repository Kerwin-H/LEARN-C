#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//====��ŵ����Ӧ��
int i = 1;		//��¼����+���
void move(int n, char a, char c){
	printf("��%d��:����%d������%c-->%c\n",i++,n,a,c);
}
void Hanoi(int n,char a,char b,char c){		//��ֵ����õݹ�ķ�ʽ�������
	if (n == 1)move(n, a, c);
	else{	
		Hanoi(n - 1, a, c, b);		//��Ҫ������е�˼ά��ʽ
		move(n, a, c);
		Hanoi(n - 1, b, a, c);
	}
}
int main(){
	printf("please enter a num to use hanoi:\n");
	int num = 0;
	scanf("%d",&num);		//��ֵ
	Hanoi(num, 'A', 'B', 'C');	//��������
	system("pause");
	return 0;
}
//====������̨������
int Frog(int num){
	if (num < 3){		//��С��3��ʱ��,ֱ�����.���ᷢ���仯
		return num;
	}
	else{
		return Frog(num - 1) + Frog(num - 2);	//������3��ʱ�����Ҫ���еݹ�ĵ���
	}
}
int main(){
	printf("please enter a number :\n");
	int n = 0;
	scanf("%d",&n);
	int ret = Frog(n);		//��������
	printf("����̨����%d�ַ���",ret);
	system("pause");
	return 0;
}