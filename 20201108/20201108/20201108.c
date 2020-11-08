#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//2.1====5的阶乘
int main(){
	int sum = 1;
	int i = 0 ;
	for (int i = 1; i <= 5; i++){
		sum = sum*i;
	}
	printf("%d",sum);
	system("pause");
	return 0;
}
//2.3====2000-2500之间闰年
int main(){
	int i;
	for (i = 1; i <= 2500; i++)
	if (i % 4 == 0)
	if (i >= 2000){
		printf("%4d ",i);
	}else{ continue; }
	system("pause");
	return 0;
}
//2.4====1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
int main(){
	int i = 0;
	double j = 0.0;
	int k = 1;
	for (i = 1; i <= 100; i++){
		j += k*1.0 / i;
		k = -k;
	}
	printf("%lf\n",j);
	system("pause");
	return 0;
}
//2.5====输入一个大于三的整数,判断是否是素数
int main(){
	int i = 0;
	printf("请输入一个数\n");
	scanf("%d",&i);
	if (i >= 3){
		if (i % 4 == 0){
			printf("%4d是素数\n",i);
		}
		else{
			printf("这个数不是素数!\n");
		}
	}
	else{
		printf("请输入大于3的一个正整数:\n");
	}
	system("pause");
	return 0;
}
//P35页