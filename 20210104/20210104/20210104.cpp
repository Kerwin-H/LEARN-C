#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//====memcpy����ʵ��
void* memcpy(void* dest, const void* src, size_t num){   //ָ���ʾĿ�ĺ�����ԭ����
	//���numָ����Ҫ���Ƶ��ֽ���,4���ֽ���һλ����,����������ֽ���!!
	char* pDest = (char*)dest;		//�򵥵�ǿ������ת	
	char* pSrc = (char*)src;

	for (int i = 0; i < num; i++){	//����forѭ����Ҫ���ƵĲ��ֽ���ѭ��,����һһ��ֵ
		*(pDest + i) = *(pSrc + i);		//����
	}
	return dest;	//����Ŀ�ĺ���
}
int main(){
	int arr[4] = { 4, 6, 8, 7 };
	int arr2[4] = { 0 };
	memcpy(arr2, arr, 16);				//����  16���ֽ���
	for (int i = 0; i < 4; i++){		//����ѭ�����
		printf("%d ", arr2[i]);
	}
	system("pause");
	return 0;
}
