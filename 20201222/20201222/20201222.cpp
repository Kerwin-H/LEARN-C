#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int i = 1;
void move(int n,char a,char c){
	printf("第%d步:将第%d个盘子%c-->%c\n",i++,n,a,c);
}
void Hanoi(int n,char a,char b,char c){
	if (n == 1)move(n, a, c);
	else{
		Hanoi(n - 1, a, c, b);
		move(n, a, c);
		Hanoi(n - 1, b, a, c);
	}
}
int main(){
	printf("please enter a number to use Hanoi\n");
	int num = 0;
	scanf("%d",&num);
	Hanoi(num, 'A', 'B', 'C');
	system("pause");
	return 0;
}