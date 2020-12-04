#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p, i, arr[10];
	p = arr;
	printf("please enter 10 number:\n");
	for (i = 0; i < 10; i++)
		scanf("%d",&arr[i]);
	for (i = 0; i < 10; i++, p++)
		printf("%d",*p);
	printf("\n");
	system("pause");
	return 0;
}
//====
void inv(int x[], int n){
	int temp, i, j, m = (n - 1) / 2;
	for (i = 0; i < m; i++){
		j = n - 1 - i;
		temp = x[i]; x[i] = x[j]; x[j] = temp;
	}
	return;
}
int main(){
	int i, a[10] = {5,4,8,7,9,6,2,15,6,5};
	printf("the original array:\n");
	for (i = 0; i < 10; i++)
		printf("%d ",a[i]);
	printf("\n");
	inv(a, 10);
	printf("the array has been inverted:\n");
	for (i = 0; i < 10; i++)
		printf("%d ",a[i]);
	printf("\n");
	system("pause");
	return 0;
}