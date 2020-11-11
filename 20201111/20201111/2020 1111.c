#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//====输入四个整数,从小到大输出
int main(){  //主要利用数组进行运算,利用两层for语句嵌套,重在理解
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
//====100阶乘
int main(){
	int i = 1;
	int sum = 0;
	while (i < 101){
		sum = sum + i;
		i++;
	}
	i = i - 1;
	printf("%d的阶乘是%d\n",i,sum);
	system("pause");
	return 0;
}
//====输出一个简单的4*5的矩阵
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
//输入两个正整数,求最大公约和最小公倍
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
	printf("最大公约数:%d\n",n);
	int d = 0;
	d = (m*n) / n;
	printf("最小公倍数:%d\n",d);



	system("pause");
	return 0;
}
//P162-3