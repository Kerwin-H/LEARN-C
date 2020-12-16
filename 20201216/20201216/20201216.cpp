#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//====文件相关内容
int main(){
	FILE *fp1, *fp2;
	fp1 = fopen("file1.cpp","r");
	fp2 = fopen("file2.cpp","w");
	ch = getc(fp1);
	while (!feof(fp1)){
		putchar(ch);
		ch = getc(fp1);
	}
	putchar(10);
	rewind(fp1);
	ch = getc(fp1);
	while (!feof(fp1)){
		fputc(ch,fp2);
		ch = fgetc(fp1);
	}
	fclose(fp1);
	fclose(fp2);
	system("pause");
	return 0;
}
//2.file 
struct Student_type{
	char name[10];
	int num;
	int age;
	char addr[15];
}stud[10];
int main(){
	int i;
	FILE *fp;
	if ((fp = fopen("stu.cpp", "rb")) == NULL){
		printf("cannot open file!");
		exit(0);
	}
	for (i = 0; i < 10; i += 2){
		fseek(fp, i*sizeof(struct Student_type), 0);
		fread(&stud[i], sizeof(struct Student_type), 1, fp);
		printf("%-10s %4d %4d %-15s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].addr);
	}
	fclose(fp);
	system("pause");
	return 0;
}
//C  end