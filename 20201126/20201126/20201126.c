#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//====������е����ֵ
int max1(int arr[][4]){
	int i = 0;
	int j = 0;
	int max;
	max = arr[0][0];
	for (i = 0; i < 3;i++)
		for (j = 0; j < 4;j++)
		if (arr[i][j]>max)max = arr[i][j];
		return(max);
}
int main(){
	int a[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, {11,23,45,23} };
	printf("max=%d\n",max1(a));
	system("pause");
	return 0;
}
//====���һ�ν׳�
int fac(int n){
	static int f = 1;		//����ע��,ֻ�õ���һ�κ������,�׳�������ܼܺ򵥵�ʵ��
	f = f*n;				//����
	return (f);
}
int main(){
	int i = 0;
	for (i = 1; i < 10; i++)
		printf("%d!=%d\n",i,fac(i));
	system("pause");
	return 0;
}
//====�����ļ�������չ
int A;
int main(){
	int power(int);
	int b = 3;
	int c, d, m;
	printf("please enter two number:");
	scanf("%d %d",&A,&m);
	c = A*b;
	printf("%d*%d=%d\n",A,b,c);
	d = power(m);
	printf("%d**%d=%d\n",A,m,d);
	system("pause");
	return 0;
}
extern A;
int power(int n){
	int i;
	int y = 1;
	for (i = 0; i <= n; i++)
		y *= A;
	return (y);
}		
//P232