//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
#define _CRT_SECURE_NO_WARNINGS    //简单的逻辑题目
#include<stdio.h>
#include<stdlib.h>
int main(){
	int emp = 0;
	int mon = 0;
	int num = 0;
	scanf("%d",&mon);
	if (mon <= 0){
		num = 0;
	}
	else{
		num = mon * 2 - 1;
	}
	printf("num=%d \n",num);
	system("pause");
	return 0;
}