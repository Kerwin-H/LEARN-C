#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//====输入一些数据,将其写入在磁盘中
//int main(){
//	FILE * fp;
//	char ch,filename[10];
//	printf("请输入所在的文件名:\n");
//	scanf("%s",filename);
//	getchar();
//	if ((fp = fopen(filename, "w")) == NULL){
//		printf("cannot open file\n");
//		exit(0);
//	}
//	printf("请输入准备储存在磁盘中的字符串:(以#结束)\n");
//	ch = getchar();
//	while (ch != '#'){
//		fputc(ch, fp);
//		putchar(ch);
//		ch = getchar();
//	}
//	fclose(fp);
//	putchar(10);
//	system("pause");
//	return 0;
//}
//====复制文件内的信息到另一个文件内
int main(){
	FILE *in, *out;
	char ch, infile[10],outfile[10];
	printf("输入读入文件的名字:\n");
	scanf("%s",infile);
	printf("输入读出文件的名字:\n");
	scanf("%s",outfile);
	if ((in = fopen(infile, "r")) == NULL){
		printf("无法打开此文件\n");
		exit(0);
	}
	if ((out = fopen(outfile, "w")) == NULL){
		printf("无法打开此文件\n");
		exit(0);
	}
	ch = fgetc(in);
	while (!feof(in)){
		fputc(ch, out);
		putchar(ch);
		ch = fgetc(in);
	}
	putchar(10);
	fclose(in);
	fclose(out);
	system("pause");
	return 0;
}
//P365