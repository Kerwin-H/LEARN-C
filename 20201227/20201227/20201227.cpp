#include<stdio.h>
#include<stdlib.h>
void* memcpy(void* dest, const void* src, size_t num){
	char* pDest = (char*)dest;
	char* pSrc = (char*)src;
	for (int i = 0; i < num;i++){
		*(pDest + i) = *(pSrc + i);
	}
	return dest;
}
int main(){
	int arr[4] = {1,2,3,4};
	int arr2[4] = { 0 };
	memcpy(arr2, arr, 16);
	for (int i = 0; i < 4; i++){
		printf("%d\t",arr2[i]);
	}
	system("pause");
	return 0;
}