#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//====memmove�����ı�д(�ƶ����и���)
void *memmove(void *p1, void *p2, size_t count){   //��ʼ Ŀ�� ����
	assert(p1);
	assert(p2);
	char *dest = (char*)p1;
	char *src = (char*)p2;
	dest = dest + 16;					//Ҫ���и��ǵ�λ��
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
//====memcpy����ʵ��
void* memcpy(void* dest, const void* src, size_t num){    //�����ڽ���һ�����������ֵȫ����ֵ�ڵڶ�������

	char* pDest = (char*)dest;		//�������ǽ���ǿ������ת��,��voidת���ַ���,�Ա��ڸ��õ�Ӧ��
	char* pSrc = (char*)src;

	for (int i = 0; i < num; i++){
		*(pDest + i) = *(pSrc + i);		//����
	}
	return dest;
}
int main(){
	int arr[4] = { 4, 6, 8, 7 };
	int arr2[4] = { 0 };
	memcpy(arr2, arr, 16);				//����
	for (int i = 0; i < 4; i++){		//����ѭ�����
		printf("%d ",arr2[i]);
	}
	system("pause");
	return 0;
}