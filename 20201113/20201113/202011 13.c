#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//====�������齫�����������
int main(){
	int i,  a[10];
	for (i = 0; i <= 9; i++)
		a[i] = i;
	for (i = 9; i >= 0; i--)
		printf("%d ",a[i]);
	printf("\n");
	system("pause");
	return 0;
}
//====쳲���������(ǰ������һ�����)
int main(){
	int i;
	int f[20] = { 1, 1 };
	for (i = 2; i < 20; i++)
		f[i] = f[i - 1] + f[i - 2];
	for (i = 0; i < 20; i++){
		if (i % 5 == 0)printf("\n");
		printf("%12d",f[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
//====����10����,����ɸѡ��С�������
int main(){
	int a[10];
	int i, j, k;
	printf("please enter ten number:\n");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	printf("\n");
	for (j = 0; j < 9;j++)
	for (i = 0; i<9 - j; i++)
	if (a[i]>a[i + 1]){
		k = a[i];
		a[i] = a[i + 1];
		a[i + 1] = k;
	}
	printf("�����:\n");
	for (i = 0; i < 10; i++)
		printf("%d ",a[i]);
	printf("\n");

	system("pause");
	return 0;
}
//P171