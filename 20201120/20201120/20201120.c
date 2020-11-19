#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <assert.h>
//====ע����ÿһ����ʱ��,���Ⱦ���У����Ϸ���!


//====strcat����ʵ��(����)
char* strcat(char* dest, const char* source){
	if (dest == NULL || source == NULL){
		return dest;
	}
	char* p = dest;
	while (*p != '\0'){
		p++;
	}
	while (*source != '\0'){			//ע��ָ����÷�
		*p = *source;
		p++;
		source++;
	}
	*p = '\0';
	return dest;
}
int main(){
	char arr1[1024] = "asd";
	strcat(arr1, "ugu");				//����ֱ�ӵ��ú���,����λֱ��д�ַ�������
	printf("%s\n", arr1);
	system("pause");
	return 0;
}
//====strcmp����ʵ��(�Ƚϴ�С)
int strcmp(const char* str1, const char* str2){		//���ַ���ͬ,��������Ƚ�,ֱ������Ϊֹ
	assert(str1 != NULL || str2 != NULL);
	while (*str1 != '\0'&&*str2 != '\0'){
		if (*str1 < *str2){
			return -1;
		}
		else if (*str1>*str2){ return 1; }

		else {
			str1++;
			str2++;
		}
	}
	if (*str1 < *str2){
		return -1;
	}
	else if (*str1>*str2){ return 1; }

	else { return 0; }
}
int main(){
	char arr1[] = "abcd";
	char arr2[] = "abc";
	char* temp1 = arr1;
	char* temp2 = arr2;
	printf("%d\n", strcmp(temp1, temp2));
	system("pause");
	return 0;
}
//====strstr����ʵ��(����)
char* my_strstr(const char* dest, const char* src)
{
	char* start = (char*)dest;			//ǿ������ת��
	char* substart = (char*)src;
	char* cp = (char*)dest;
	assert(dest != NULL);		//Ԥ��
	assert(src != NULL);
	while (*cp)
	{
		start = cp;
		while (*start != '\0' && *substart != '\0' && *start == *substart)
		{
			start++;
			substart++;
		}
		if (*substart == '\0')
		{
			return cp;
		}
		substart = (char*)src;
		cp++;
	}
	return NULL;
}
int main(){			//��˼���ǲ��ҵ��󽫲��ҵ���������н������
	char arr[20] = "aabbccede";
	char arr1[10] = "bcce";
	printf("%s\n", my_strstr(arr, arr1));

	system("pause");
	return 0;
}