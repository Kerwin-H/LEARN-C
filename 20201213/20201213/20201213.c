#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//====按字符串顺序进行输出
int main(){
	FILE *fp;
	char str[3][10], temp[10];
	int i, j, k, n = 3;
	printf("enter a strings:\n");
	for (i = 0; i < n - 1; i++)
		gets(str[i]);
	for (i = 0; i < n - 1; i++){
		k = i;
		for (j = i + 1; j < n;j++)
		if (strcmp(str[k], str[j])>0)k = j;
		if (k != i){
			strcpy(temp, str[i]);
			strcpy(str[i], str[k]);
			strcpy(str[k], temp);
		}
	}
	if ((fp=fopen("D:\\CC\\string.c","w"))=="NULL"){
		printf("can't open file!\n");
		exit(0);
	}
	printf("\nThe new sequence:\n");
	for (i = 0; i < n; i++){
		fputs(str[i], fp);	fputs("\n", fp);
		printf("%s\n",str[i]);
	}
	system("pause");
	return 0;
}
//====输入学生数据,转存到磁盘里面
#define SIZE 10
struct Student_type{
	char name[10];
	int num;
	int age;
	char addr[15];
}stud[SIZE];
void save(){
	FILE *fp;
	int i;
	if ((fp = fopen("stu.c", "wb")) == NULL){
		printf("cannot open file!\n");
		return;
	}
	for (i = 0; i < SIZE;i++)
	if (fwrite(&stud[i], sizeof(struct Student_type), 1, fp) != 1)
		printf("file write error\n");
	fclose(fp);
}
int main(){
	int i;
	printf("please enter data of students:\n");
	for (i = 0; i < SIZE; i++)
		scanf("%s %d %d %s",stud[i].name,&stud[i].num,&stud[i].age,stud[i].addr);
	save();
	system("pause");
	return 0;
}