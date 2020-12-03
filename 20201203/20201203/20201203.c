#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//====二级指针使用
int main(){
	char *arr[] = {"Flowwer me","BASIC","Great wall","FORTRAN","Computer design",};
	char **p;
	int i;
	for (i = 0; i < 5; i++){
		p = arr+ i;
		printf("%s\n",*p);
	}
	system("pause");
	return 0;
}
//====
int main(){
	int a[] = { 1, 3, 5, 7, 9 };
	int *num[] = {&a[0],&a[1],&a[2],&a[3],&a[4]};
	int **p;
	int i = 0;
	p = num;
	for (i = 0; i < 5; i++){
		printf("%d",**p);
		p++;
	}
	printf("\n");
	system("pause");
	return 0;
}
//====查找
void check(int *p){
	int i;
	printf("the fair is:\n");
	for (i = 0; i < 5; i++)
	if (p[i] < 60) printf("%d", p[i]);
	printf("\n");
}
int main(){
	int *p1, i;
	p1 = (int *)malloc(5 * sizeof(int));
	for (i = 0; i < 5; i++)
		scanf("%d",p1+i);
	check(p1);
	system("pause");
	return 0;
}