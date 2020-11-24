#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//====输入十个数,查询出最大数,并将其最大数所在位置输出
int main(){
	int max1(int x, int y);
	int a[10], m, n, i;
	printf("please enter ten number:\n");
	for (int i = 0; i < 10; i++)
		scanf("%d",&a[i]);
	printf("\n");
	for (i = 1, m = a[0], n = 0; i < 10; i++){
		if (max1(m, a[i])>m){
			m = max1(m, a[i]);
			n = i;
		}
	}
	printf("the largest is %d\nit is the %dth number.\n",m,n+1);
	system("pause");
	return 0;
}
int max1(int x, int y){
	return(x > y ? x : y);
}
//====输入成绩,求平均数
float average(float array[10]){
	int i;
	float aver, sum = array[0];
	for (i = 1; i < 10; i++)
		sum = sum + array[i];
	aver = sum / 10;
	return(aver);
}
int main(){
	float score[10], aver;
	int i;
	printf("please enter ten score:\n");
	for (i = 0; i < 10; i++)
		scanf("%f", &score[i]);
	printf("\n");
	aver = average(score);
	printf("averge score is %5.2f\n",aver);
	system("pause");
	return 0;
}
//P216