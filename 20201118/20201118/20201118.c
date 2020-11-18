#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <assert.h>
//====注意在每一步的时候,首先就是校验其合法性!

//====strlen函数实例(长度)
int strlen(const char * str){
	if (*str == '\0')
		return 0;
	else
		return 1 + strlen(str + 1);
}
int main(){
	char arr[] = { "bhkasbf" };
	char* temp = &arr;				//注意此处赋予地址应该是这个字符串里面的首元素
	printf("%d\n", strlen(temp));	//strlen(temp)这里是将上面这个函数的返回值直接打印出来
	system("pause");
	return 0;
}
//====strcpy函数实例(复制)
char* strcpy(char * dest, const char *source){
	char * ret = dest;
	assert(dest != NULL);         //若为空则直接终止
	assert(source != NULL);
	while ((*dest++ = *source++)){
		;
	}
	return ret;
}
int main(){
	char arr1[] = "abcd";			//注意在赋值字符串的时候在""和{}二选一!!!
	char arr2[5] = { '\0' };			//注意,进行将字符串拷贝的时候,首先要赋予被拷贝的字符串足够大的空间
	char* temp1 = arr1;				//否则字符无法赋进去,会出现终断问题
	char* temp2 = arr2;
	printf("%s\n", temp1);
	printf("%s\n", strcpy(temp2, temp1));
	system("pause");
	return 0;
}