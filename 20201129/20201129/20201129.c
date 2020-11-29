#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//====利用函数实现三个数排列
void swap(int *pt1, int *pt2){
	int temp;
	temp = *pt1;
	*pt1 = *pt2;
	*pt2 = temp;
}
void exchange(int *q1, int *q2, int *q3){
	if (*q1 < *q2)swap(q1, q2);
	if (*q1 < *q3)swap(q1, q3);
	if (*q2 < *q3)swap(q2, q3);
}
int main(){
	printf("please enter three number:\n");
	int a, b, c;
	scanf("%d %d %d",&a,&b,&c);
	int *p1, *p2, *p3;
	p1 = &a;
	p2 = &b;
	p3 = &c;
	exchange(p1, p2, p3);
	printf("%d %d %d",a,b,c);

	system("pause");
	return 0;
}
//====指针指向数组(理解)
int main(){
	int a[5];
	int *p;
	int i;
	printf("please enter 5 number:\n");
	for (i = 0; i < 5;i++)
	scanf("%d",&a[i]);
	for (p = a; p < (a + 5); p++)
		printf("%d",*p);
	system("pause");
	return 0;
}
//====指针方式进行排序
void sort(int x[], int n){
	int i, j, k, t;
	for (i = 0; i < n - 1; i++){
		k = i;
		for (j = i + 1; j < n;j++)
		if (x[j]>x[k])k = j;
		if (k != i){
			t = x[i]; x[i] = x[k]; x[k] = t;
		}
	}
}
int main(){
	int i = 0;
	int *p;
	int a[10];
	p = a;
	printf("please enter 10 number:\n");
	for (i = 0; i < 10;i++)
	scanf("%d",p++);
	p = a;
	sort(p, 10);
	for (p = a, i = 0; i < 10; i++){
		printf("%d ",*p);
		p++;
	}
	printf("\n");
	system("pause");
	return 0;
}
//P268