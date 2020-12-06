#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//====汉诺塔的应用
int i = 1;		//记录步数+输出
void move(int n, char a, char c){
	printf("第%d步:将第%d个盘子%c-->%c\n",i++,n,a,c);
}
void Hanoi(int n,char a,char b,char c){		//充分的利用递归的方式化简代码
	if (n == 1)move(n, a, c);
	else{	
		Hanoi(n - 1, a, c, b);		//主要理解其中的思维方式
		move(n, a, c);
		Hanoi(n - 1, b, a, c);
	}
}
int main(){
	printf("please enter a num to use hanoi:\n");
	int num = 0;
	scanf("%d",&num);		//赋值
	Hanoi(num, 'A', 'B', 'C');	//函数调用
	system("pause");
	return 0;
}
//====青蛙跳台阶问题
int Frog(int num){
	if (num < 3){		//当小于3的时候,直接输出.不会发生变化
		return num;
	}
	else{
		return Frog(num - 1) + Frog(num - 2);	//当大于3的时候就需要进行递归的调用
	}
}
int main(){
	printf("please enter a number :\n");
	int n = 0;
	scanf("%d",&n);
	int ret = Frog(n);		//函数调用
	printf("青蛙台阶有%d种方法",ret);
	system("pause");
	return 0;
}