#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <assert.h>
//====strcpy����ʵ��(����)
char* strcpy(char * dest, const char *source){
	char * ret = dest;
	assert(dest != NULL);         //�Ϸ���У��,��Ϊ��,ֱ�ӽ�������
	assert(source != NULL);
	while ((*dest++ = *source++)){		//һһ����
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
	printf("%s\n", strcpy(temp2, temp1));	//��ʾ�������ֵ
	system("pause");
	return 0;
}
