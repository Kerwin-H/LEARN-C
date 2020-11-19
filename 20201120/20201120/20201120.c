#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <assert.h>
//====注意在每一步的时候,首先就是校验其合法性!


//====strcat函数实例(连接)
char* strcat(char* dest, const char* source){
	if (dest == NULL || source == NULL){
		return dest;
	}
	char* p = dest;
	while (*p != '\0'){
		p++;
	}
	while (*source != '\0'){			//注意指针的用法
		*p = *source;
		p++;
		source++;
	}
	*p = '\0';
	return dest;
}
int main(){
	char arr1[1024] = "asd";
	strcat(arr1, "ugu");				//这里直接调用函数,后置位直接写字符串即可
	printf("%s\n", arr1);
	system("pause");
	return 0;
}
//====strcmp函数实例(比较大小)
int strcmp(const char* str1, const char* str2){		//当字符相同,则继续向后比较,直到不用为止
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
//====strstr函数实例(查找)
char* my_strstr(const char* dest, const char* src)
{
	char* start = (char*)dest;			//强制类型转换
	char* substart = (char*)src;
	char* cp = (char*)dest;
	assert(dest != NULL);		//预警
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
int main(){			//意思就是查找到后将查找到后面的所有进行输出
	char arr[20] = "aabbccede";
	char arr1[10] = "bcce";
	printf("%s\n", my_strstr(arr, arr1));

	system("pause");
	return 0;
}