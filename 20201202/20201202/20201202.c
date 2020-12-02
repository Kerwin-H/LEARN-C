#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//====调用一个组内的所有成绩
float *search(float(*pointer)[4], int n){
	float *pt;
	pt = *(pointer + n);
	return (pt);
}
int main(){
	float arr[][4] = { { 46, 56, 85, 98 }, { 78, 52, 41, 63 }, {68,99,88,77} };
	float *p;
	int i = 0;
	int k = 0;
	printf("please enter a number :\n");
	scanf("%d",&k);
	printf("the score of No.%d are:",k);
	p = search(arr, k);
	for (i = 0; i < 4; i++)
		printf("%5.2f\t",*(p+i));
	printf("\n");

	system("pause");
	return 0;
}
//====字母小大排序
void sort(char *name[], int n){
	char *temp;
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i < n - 1; i++){
		k = i;
		for (j = i + 1; j < n;j++)
		if (strcmp(name[k], name[j])>0) k = j;
		if (k != i){
			temp = name[i]; name[i] = name[k]; name[k] = temp;
		}
	}
}
void print(char *name[], int n){
	int i;
	for (i = 0; i < n; i++)
		printf("%s ",name[i]);
}
int main(){
	char *name[] = {"Follow me","BASIC","Great Wall","FORTRAN","Computer design"};
	int n = 5;
	sort(name, n);
	print(name,n);
	system("pause");
	return 0;
}
//P302