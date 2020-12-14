#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//====将文件内的数据在程序中读出来
#define size 10
struct student_type{
	char name[10];
	int num;
	int age;
	char addr[15];
}stud[size];

int main(){
	int i;
	file *fp;
	if ((fp=fopen("stu.cpp","rb"))==null){
		printf("cannot open file\n");
		exit(0);
	}
	for (i = 0; i < size; i++){
		fread(&stud[i], sizeof(struct student_type), 1, fp);
		printf("%-10s %4d %4d %-15s\n", stud[i].name, stud[i].num,stud[i].age,stud[i].addr);
	}
	fclose(fp);
	system("pause");
	return 0;
}
//====1.表示出文件2.拷贝到另一个文件中
int main(){
	FILE *fp1, *fp2;
	fp1 = fopen("file1.cpp","r");
	fp2 = fopen("file2.cpp", "w");
	ch = getc(fp1);
	while (! feof(fp1)){
		putchar(ch);
		ch = getc(fp1);
	}
	putchar(10);
	rewind(fp1);
	ch = getc(fp1);
	while (! feof(fp1)){
		fputc(ch, fp2);
		ch = fgetc(fp1);
	}
	fclose(fp1);
	fclose(fp2);
	system("pause");
	return 0;
}