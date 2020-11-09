#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//====从1-100相加
int main(){
	int i = 0;
	int sum = 0;
	for (i = 1; i < 11; i++){
		sum = sum + i;
	}
	printf("%d\n",sum);
	system("pause");
	return 0;
}
//====判断一个数被3和5整除
int main(){
	printf("please enter a number:\n");
	int i = 0;
	scanf("%d",&i);
	if (i % 5 == 0){
		if (i % 3 == 0){
			printf("%d这个数可以被3和5整除!\n",i);
		}
		else { printf("这个数不可以!\n"); }
	}
	else { printf("这个数不可以!\n"); }
	system("pause");
	return 0;
}
//====给三角形三边长,求面积
int main(){
	double a, b, c, s, area;
	a = 3;
	b = 5;
	c = 7;
	s = (a + b + c) / 2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));          //sqrt为根号
	printf("a=%f\t b=%f\t c=%f\t",a,b,c);
	printf("area=%f\n",area);
	system("pause");
	return 0;
}
//====局部改写代码的区别
int main(){							//注意,改写局部代码,对最终输出的值都有影响		
	int  c1, c2;					//在电脑上所有的东西都是由二进制进行表示出来的,所以一定数字的变化,才会
	c1 = 97;						//引起输出值的变化,遇到问题可以多看ASCII码表
	c2 = 98;
	printf("%c %c\n",c1,c2);
	printf("%d %d\n",c1,c2);


	system("pause");
	return 0;
}
//====给圆半径,圆柱高,求出一些数据;
#define p 3.1415926
int main(){
	double r = 1.5;
	int h = 3;
	int i = 0;
	double l;
	double s;
	double s1;
	double  v;
	double v1;
	printf("1.周长\n");
	printf("2.圆面积 \n");
	printf("3.圆球表面积 \n");
	printf("4.圆球体积 \n");
	printf("5.圆柱体积 \n");
	printf("please enter a number: \n");
	scanf("%d",&i);
	switch (i){
	case 1:
		l = 2 * p*r;
		printf("%lf",l);
		break;
	case 2:
		s = p*r*r;
		printf("%lf", s);
		break;
	case 3:
		s1 = 4 * p*r*r;
		printf("%lf",s1);
		break;
	case 4:
		v = (4 * p*r*r) / 3;
		printf("%lf",v);
		break;
	case 5:
		v1 = p*r*r*h;
		printf("%lf",v1);
		break;
		printf("please enter another number:");
	}
	system("pause");
	return 0;
}
//====P107