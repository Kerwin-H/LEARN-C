#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Person{
	char name[1024];
	int count;
}leader[3] = {"Li",0,"Zhang",0,"Sun",0};

int main(){
	int i, j;
	char leader_name[1024];
	for (i = 0; i < 10; i++){
		scanf("%s",leader_name);
		for (j = 0; j < 3;j++)
		if (strcmp(leader_name, leader[j].name) == 0)leader[j].count++;
	}
	printf("\nResult\n");
	for (i = 0; i < 3; i++)
		printf("%5s:%d\n",leader[i].name,leader[i].count);



	system("pause");
	return 0;
}