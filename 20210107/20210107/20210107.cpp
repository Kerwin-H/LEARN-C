#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

void *memmove(void *p1, void *p2, size_t count){ 
	assert(p1);									 
	assert(p2);		
	char *dest = (char*)p1;		
	char *src = (char*)p2;	
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
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);		
	int *ret = memmove(arr, arr, 12);	
	for (i = 0; i < len; i++){
		printf("%d ", *(ret + i));	
	}
	system("pause");
	return 0;
}
