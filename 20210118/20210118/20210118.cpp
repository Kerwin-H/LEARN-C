#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

int main(){

	//��ת���ַ�����˼,����/
	/*char name[] = "D:\program2\qq\Bin";
	char name[] = "D:/program2/qq/Bin";
	printf("%s\n",name);
*/

	//FILE���Ѿ�����Ľṹ��
	//"�ļ�ָ��","���"(handler)
	//�ļ��򿪿��ܻ�ʧ��
	 
	FILE* f=fopen("C:/Users/64801/Documents/temp/123.txt","w");
	if (f == NULL){
		//printf("�ļ���ʧ��! errno=%d,%s\n",errno,strerror(errno));
		perror("�ļ���ʧ��!");
		system("pause");
		return 1;
	}
	printf("�ļ��򿪳ɹ�\n");

	//�����е����ݶ�ȡ���ڴ���
	//char buf[1024] = { 0 };
	////�ڶ���������������ܵĶ�ȡ�����ֽ���
	////����ֵ��ʾ��ȡ��Ԫ�ظ���
	////���ʵ�ʶ�ȡ��Ԫ�ظ�����һ��,���ļ�������
	//int n = fread(buf, 1, 1024, f);
	//printf("%s\n",buf);

	////fwriteд���ļ�
	//char buf[1024] = "6416546haha";
	//int n=fwrite(buf,1,strlen(buf),f);
	//if (n < strlen(buf)){
	//	perror("fwrite");
	//}


	//��fprintf���и�ʽ��д��
	int num = 10;
	//fprintf(f, "num=%d", num);

	//��printf�ȼ�'
	//ʹ��fscanf(stdin,"")��scanf�ȼ�.
	//fprintf(stdout,"num=%d",num);

	//sprintf  ��ʽ�����д�뵽�ַ�����
	//sscanf	�Ӹ�ʽ���ַ����н������

	/*char buf[1024] = { 0 };
	sprintf(buf,"num =%d",num);
	printf("%s\n",buf);*/


	//�ַ�����������ת��
	/*char buf[1024] = { 0 };
	sprintf(buf,"%d",num);
	printf("%c\n", buf[0]);
	printf("%c\n", buf[1]);
	printf("%c\n", buf[2]);*/

	//atoi
	//itoa


	//�ر��ļ�
	//����ʹ�����һ��Ҫ�ر��ļ�!!!!
	//�ļ���Դй¶/���й¶
	fclose(f);


	system("pause");
	return 0;
}