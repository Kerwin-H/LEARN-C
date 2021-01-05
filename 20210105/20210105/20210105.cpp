#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <assert.h>
//====strcpy函数实例(复制)
char* strcpy(char * dest, const char *source){
	char * ret = dest;
	assert(dest != NULL);         //合法性校验,若为空,直接结束程序
	assert(source != NULL);
	while ((*dest++ = *source++)){		//一一赋给
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
	printf("%s\n", strcpy(temp2, temp1));	//显示拷贝完的值
	system("pause");
	return 0;
}
