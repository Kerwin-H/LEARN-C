#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <assert.h>
//====ע����ÿһ����ʱ��,���Ⱦ���У����Ϸ���!

//====strlen����ʵ��(����)
int strlen(const char * str){
	if (*str == '\0')
		return 0;
	else
		return 1 + strlen(str + 1);
}
int main(){
	char arr[] = { "bhkasbf" };
	char* temp = &arr;				//ע��˴������ַӦ��������ַ����������Ԫ��
	printf("%d\n", strlen(temp));	//strlen(temp)�����ǽ�������������ķ���ֱֵ�Ӵ�ӡ����
	system("pause");
	return 0;
}
//====strcpy����ʵ��(����)
char* strcpy(char * dest, const char *source){
	char * ret = dest;
	assert(dest != NULL);         //��Ϊ����ֱ����ֹ
	assert(source != NULL);
	while ((*dest++ = *source++)){
		;
	}
	return ret;
}
int main(){
	char arr1[] = "abcd";			//ע���ڸ�ֵ�ַ�����ʱ����""��{}��ѡһ!!!
	char arr2[5] = { '\0' };			//ע��,���н��ַ���������ʱ��,����Ҫ���豻�������ַ����㹻��Ŀռ�
	char* temp1 = arr1;				//�����ַ��޷�����ȥ,������ն�����
	char* temp2 = arr2;
	printf("%s\n", temp1);
	printf("%s\n", strcpy(temp2, temp1));
	system("pause");
	return 0;
}