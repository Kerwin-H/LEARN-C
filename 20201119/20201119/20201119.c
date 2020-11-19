#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//====基础调用函数(大小)
int max1(int a, int b){
	int c;
	c = a > b ? a: b;
	return (c);
}

int main(){
	int max1(int x,int y);
	int a, b, c;
	printf("please enter two number :\n");
	scanf("%d %d",&a,&b);
	c = max1(a, b);
	printf("max=%d\n",c);
	system("pause");
	return 0;
}
//====调用函数2(加)
int main(){
	float add(float x, float y);
	float a, b, c;
	printf("please enter two number:\n");
	scanf("%f %f",&a,&b);
	c = add(a, b);
	printf("sum=%f\n",c);
	system("pause");
	return 0;
}
float add(float x, float y){
	float z;
	z = x + y;
	return (z);
}
//====递归求阶乘
int main(){
	int fac(int n);
	int n, y;
	printf("please enter number:\n");
	scanf("%d",&n);
	y = fac(n);
	printf("%d!=%d\n",n,y);
	system("pause");
	return 0;
}
int fac(int n){
	int f;
	if (n < 0)
		printf("n<0,error!");
	else if (n == 0 || n == 1)
		f = 1;
	else f = fac(n - 1)*n;
	return (f);
}
//P210