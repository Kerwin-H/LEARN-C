#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//====键盘输入三个数,输出最大
int main(){
	printf("please enter three number:\n");
	int i = 0;
	int j = 0;
	int k = 0;
	scanf("%d %d %d",&i,&j,&k);
	if (i >= j){
		if (i >= k){ printf("最大为%d\n",i); }
		else{ printf("最大为%d\n", k); }
	}
	else{	
		if (j >= k){ printf("最大为%d\n", j); }
		else{ printf("最大为%d\n", k); }
	}
	system("pause");
	return 0;
}
//====输入一个数,求出平方根
int main(){                     //记得加头文件
	printf("please enter a number (0<n<1000):\n");
	int  n = 0.0;
	scanf("%d",&n);
	
		double i = 0.0;
		i = sqrt(n);
		printf("%lf", i);
		
	system("pause");
	return 0;
}
//====写一个函数,在x等于不同的范围内,输出不同的值
int main(){
	printf("please enter a number:\n");
	int i = 0;
	scanf("%d",&i);
	if (i < 1){ printf("y=%d\n",i); }
	else if (i >= 10){ printf("y=%d\n",3*i-11); }
	else{ printf("y=%d\n",2*i-1); }
	system("pause");
	return 0;
}
//====给出一个不多于5位的正整数,1.求是几位数2.分别进行输出3.求出逆序
void print(unsigned int n){
	if (n > 9)
		print(n / 10);
		printf("%d  ", n % 10);
}
int main(){
	printf("请输入一个数:\n");
	int i = 0;
	scanf("%d", &i);
	int n = i;
	while (1){
		
		print(i);//1

		int m = 0;
		while (i != 0){
			m = m * 10 + i % 10;
			i = i / 10;
		}
		printf("%d\n", m);
		break;
	}
	int count = 0;
	while (n != 0){
		n = n / 10;
		++count;
	}
	printf("这个数是%d位数\n", count);

	system("pause");
	return 0;
}
//P134-9