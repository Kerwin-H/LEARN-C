#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//====�����ĸ�����,��С�������
int main(){  //��Ҫ���������������,��������for���Ƕ��,�������
	printf("please enter four number :\n");
	int a[4];
	int i, j;
	int temp;
	for (i = 0; i < 4; i++){
		scanf("%d",&a[i]);
	}
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3 - i; j++){
			if (a[j]>a[j + 1]){
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 4; i++){
		printf("%d ",a[i]);
	}
	system("pause");
	return 0;
}
//====100�׳�
int main(){
	int i = 1;
	int sum = 0;
	while (i < 101){
		sum = sum + i;
		i++;
	}
	i = i - 1;
	printf("%d�Ľ׳���%d\n",i,sum);
	system("pause");
	return 0;
}
//====���һ���򵥵�4*5�ľ���
int main(){
	int i, j, n = 0;
	for (i = 1; i < 5;i++)
	for (j = 1; j < 6; j++, n++){
		if (n % 5 == 0)	printf("\n");
		printf("%d\t",i*j);
	}
	printf("\n");
	system("pause");
	return 0;
}
//��������������,�����Լ����С����
int main(){
	printf("please enter two number:\n");
	int m = 0;
	int n = 0;
	scanf("%d %d",&m,&n);
	int c = 0;
	while (c = m%n){
		m = n;
		n = c;
	}
	printf("���Լ��:%d\n",n);
	int d = 0;
	d = (m*n) / n;
	printf("��С������:%d\n",d);



	system("pause");
	return 0;
}
//P162-3