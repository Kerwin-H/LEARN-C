#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//====����һЩ����,����д���ڴ�����
//int main(){
//	FILE * fp;
//	char ch,filename[10];
//	printf("���������ڵ��ļ���:\n");
//	scanf("%s",filename);
//	getchar();
//	if ((fp = fopen(filename, "w")) == NULL){
//		printf("cannot open file\n");
//		exit(0);
//	}
//	printf("������׼�������ڴ����е��ַ���:(��#����)\n");
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
//====�����ļ��ڵ���Ϣ����һ���ļ���
int main(){
	FILE *in, *out;
	char ch, infile[10],outfile[10];
	printf("��������ļ�������:\n");
	scanf("%s",infile);
	printf("��������ļ�������:\n");
	scanf("%s",outfile);
	if ((in = fopen(infile, "r")) == NULL){
		printf("�޷��򿪴��ļ�\n");
		exit(0);
	}
	if ((out = fopen(outfile, "w")) == NULL){
		printf("�޷��򿪴��ļ�\n");
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