#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//====简易结构体写法
struct{
	int num;
	char name[10];
	char sex;
	char job;
	union{
		int clas;
		char position[10];
	}category;
}person[2];
int main(){
	int i;
	for (i = 0; i < 2; i++){
		printf("please enter the data of person:\n");
		scanf("%d %s %c %c",&person[i].num,&person[i].name,&person[i].sex,&person[i].job);
		if (person[i].job == 's')
			scanf("%d", &person[i].category.clas);
		else if (person[i].job == 't')
			scanf("%s", person[i].category.position);
		else
			printf("Int Put!");
	}
	printf("\n");
	printf("No:   name       sex job class/position\n");
	for (i = 0; i < 2;i++){
		if (person[i].job == 's')
			printf("%-6d %-10s %-4c %-4c %-10d\n", person[i].num, person[i].name,
			person[i].sex, person[i].job, person[i].category.clas);
		else
			printf("%-6d %-10s %-4c %-4c %-10s\n", person[i].num, person[i].name,
			person[i].sex, person[i].job, person[i].category.position);
	}
	system("pause");
	return 0;
}
//====对于枚举的利用
int main(){
	enum Color {red,yellow,blue,white,black};
	enum Color i, j, k, pri;
	int n, loop;
	n = 0;
	for (i = red; i <= black; i++)
	for (j = red; j <= black;j++)
	if (i != j){
		for (k = red; k <= black;k++)
		if ((k != i) && (k != j)){
			n = n + 1;
			printf("%-4d",n);
			for (loop = 1; loop <= 3; loop++){
				switch (loop){
				case 1:	pri = i; break;
				case 2:	pri = j; break;
				case 3: pri = k; break;
				default:	break;
				}
				switch (pri){
				case red:
					printf("%-10s", "red");	break;
				case yellow:
					printf("%-10s", "yellow"); break;
				case blue:
					printf("%-10s", "blue"); break;
				case white:
					printf("%-10s", "white"); break;
				case black:
					printf("%-10s", "black"); break;
				default:break;
				}
			}
			printf("\n");
		}
	}
	printf("\ntotal:%5d\n",n);
	system("pause");
	return 0; 
}
//P350 