#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//====memmove函数的编写(移动进行覆盖)
void *memmove(void *p1, void *p2, size_t count){   //初始 目的 长度
	assert(p1);
	assert(p2);
	char *dest = (char*)p1;
	char *src = (char*)p2;
	dest = dest + 16;					//要进行覆盖的位数
	src = src + 8;
	if ((src < dest) && (dest < src + count)){	
		while (count--){
			*(dest + count) = *(src + count);
		}
	}
	else{
		while (count--){
			*dest = *src;
			src++;
			dest++;
		}	
	}
	return p2;
}
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	int *ret = memmove(arr, arr, 12);
	for (i = 0; i < len; i++){
		printf("%d ",*(ret+i));
	}
	system("pause");
	return 0;
}
//====memcpy函数实现
void* memcpy(void* dest, const void* src, size_t num){    //类似于将第一个数组里面的值全部赋值于第二个数组

	char* pDest = (char*)dest;		//这两部是进行强制类型转化,将void转成字符型,以便于更好的应用
	char* pSrc = (char*)src;

	for (int i = 0; i < num; i++){
		*(pDest + i) = *(pSrc + i);		//复制
	}
	return dest;
}
int main(){
	int arr[4] = { 4, 6, 8, 7 };
	int arr2[4] = { 0 };
	memcpy(arr2, arr, 16);				//调用
	for (int i = 0; i < 4; i++){		//数组循环输出
		printf("%d ",arr2[i]);
	}
	system("pause");
	return 0;
}