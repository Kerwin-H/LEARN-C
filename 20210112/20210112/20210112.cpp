#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

size_t myStrlen(const char* str){
	
	if (str == NULL){    //�Ϸ���У��,���ִ����������,�������©��
		return 0;
	}

	assert(str == NULL);  //���,�Ƚ�������ʹ��

	size_t len = 0;
	while (str[len]!='\0'){
		len++;
	}
	return len;
}


char* myStrcpy(char* dest, const char* src){
	if (dest == NULL || src == NULL){
		return NULL;
	}
	char *ret = dest;  //����ԭʼֵ 
	while (*src != '\0'){
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return dest; 
}


char* myStrcat(char* dest,const char* src){
	if (dest == NULL || src == NULL){
		return dest;
	}

	char* p = dest;
	while (*p != '\0'){
		p++;
	}
	//����,����ÿ���ַ����ƹ�ȥ
	while (*src != '\0'){
		*p = *src;
		p++;
		src++;
	}

	*p = '\0';
	return dest;
}
//========================================================================
int myStrcmp(const char* str1, const char* str2) {
	// һ��Ҫ�ǵ�, ��У������ĺϷ���. 
	// �˴����ֲ����Ƿ���ʱ��, ���������ҵ�һ������ֵ��Ϊ�Ƿ����. 
	// �� C ��ûɶ̫�õİ취. δ�� C++ �� Java ����һ�ֲ��� �׳��쳣
	assert(str1 != NULL && str2 != NULL);

	while (*str1 != '\0' && *str2 != '\0') {
		if (*str1 < *str2) {
			return -1;
		}
		else if (*str1 > *str2) {
			return 1;
		}
		else {
			// ��ʱ���ƽ����, ��Ҫ�Ƚ���һ���ַ�
			str1++;
			str2++;
		}
	}
	// ��������ѭ���Ѿ�������, ��û�д��� return , ���ܾ����������:
	// hehe  ��  hehehe �ıȽ�
	// ����������Ҫ��˭��˭��С. ֱ�ӿ���ǰλ�õ� str1 �� str2 ָ������ݴ�С������. 
	// ����ָ��������һ���� \0 , ��һ���͸���. 
	// ����������� \0, �������
	if (*str1 < *str2) {
		return -1;
	}
	else if (*str1 > *str2) {
		return 1;
	}
	else {
		return 0;
	}
	//return *str1 - *str2;
}

const char* myStrstr(const char* str1, const char* str2) {
	if (str1 == NULL || str2 == NULL) {
		return NULL;
	}

	// blackPtr ȷ���˵�ǰ���˱Ƚϵ���ʼλ��. 
	const char* blackPtr = str1;

	while (*blackPtr != '\0') {
		// ��Ҫ���ݵ�ǰ����ʼλ��, ��һ���ıȽ� str1 �����ݺ� str2 ������
		// ���������Ҫ����������ָ��, һ���� redPtr, һ���� subPtr
		const char* redPtr = blackPtr;
		const char* subPtr = str2;

		// ���ѭ�������Ե�ǰ�� blackPtr Ϊ���, ����һ�˱Ƚ�
		while (*redPtr != '\0' && *subPtr != '\0'
			&& *redPtr == *subPtr) {
			redPtr++;
			subPtr++;
		}
		// ��ѭ������֮��, �������ֿ���: 
		// 1) ����� *redPtr != '\0' ����������, ��ʱ, ���ǲ�ƥ��
		//    ���ʱ���Ӧ�� blackPtr++ �����¸���ʼλ��. 
		// 2) ����� *subPtr != '\0' ����������, ��ʱ���ҵ�ƥ��Ľ����
		//    ��Ӧ�÷��� blackPtr
		// 3) ����� *redPtr == *subPtr ������, ��ʱҲӦ���� blackPtr++
		if (*subPtr == '\0') {
			return blackPtr;
		}
		blackPtr++;
	}
	return NULL;
}
//===========================================================================
int main(){
	//size_t =unsigned long 

	unsigned int a = 10;
	unsigned int b = 20;
	unsigned int c = a-b;  //�����޷��������������
	printf("%u\n",c);  //%u

	char arr[] = "lisi";
	printf("%d\n", myStrlen(arr));

	char arr1[] = "hehe";
	strcpy(arr1, "sidd");
	printf("%s\n",arr1);

	char name1[1024] = "";
	char name2[1024] = "";
	strcpy(name1, "zhangsan");
	strcpy(name2, "zhangsan");
	//    ���µȼ�,������ʹ��
	strcpy(name1, strcpy(name2, "zhangsan"));

	char name[1024] = "zhang ";
	strcat(name, "san");
	printf("%s\n",name);



	system("pause");
	return 0;
}