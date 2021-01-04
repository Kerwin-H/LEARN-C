#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//====memcpy函数实现
void* memcpy(void* dest, const void* src, size_t num){   //指针表示目的函数和原函数
	//这个num指的是要复制的字节数,4个字节是一位整型,这里填的是字节数!!
	char* pDest = (char*)dest;		//简单的强制类型转	
	char* pSrc = (char*)src;

	for (int i = 0; i < num; i++){	//先用for循环对要复制的部分进行循环,方便一一赋值
		*(pDest + i) = *(pSrc + i);		//复制
	}
	return dest;	//返回目的函数
}
int main(){
	int arr[4] = { 4, 6, 8, 7 };
	int arr2[4] = { 0 };
	memcpy(arr2, arr, 16);				//调用  16是字节数
	for (int i = 0; i < 4; i++){		//数组循环输出
		printf("%d ", arr2[i]);
	}
	system("pause");
	return 0;
}
