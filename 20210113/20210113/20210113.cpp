#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>


//�ڴ濽��
//!!!!!!!!!!ע������ĺϷ���У��!!!!!! 
void* myMemcpy(void* dest ,const void* src,size_t num){
	assert(dest != NULL&&src != NULL);
	char* pDest = (char*)dest;
	char* pSrc = (char*)src;
	for (int i = 0; i < num; i++){
		*(pDest + i) = *(pSrc + i);
	}
	return dest;
}

//���ڴ淢���ص���ʱ��,memove����ȷ��,memcpy��ȷ��
void* myMemove(void* dest, const void* src, size_t num){
	assert(dest != NULL&&src != NULL);
	char* pDest = (char*)dest; 
	char* pSrc = (char*)src;
	if (pSrc <= pDest && pDest <= pSrc + num){
		for (int i = num - 1; i >= 0; i--){
			*(pDest + i) = *(pSrc + i);
		}
	}
	else{
		return myMemcpy(dest, src, num);
	}
}



int main(){
	
	//�����з�,��Ѱ��Ҫ�ҵĶ���,�����л�Ϊ�ո�(��ȱ��)
	/*char str[] = "I am a student";
	char* p = strtok(str," ");
	while (p!=NULL){
		printf("%s\n",p);
		p = strtok(NULL, " ");
	}*/

	//memcpy
	//int arr[4] = { 1, 2, 3, 4 };
	//int arr2[4] = { 0 };
	//memcpy(arr2, arr, 16);//==sizeof(arr2);
	//for (int i = 0; i < 4; i++)
	//printf("%d ",arr2[i]);  //������Ҫע�⵽������Ҫ��ѭ���������

	system("pause");
	return 0;
}


//====���Ľ�
struct Student{
	char name[1024];
	int age;

};

//���ɰ����Լ��Ľṹ���Ա
struct School{
	
	struct Student students[1024];
	
	struct School* school;//��* ����,ָ��
};

//====!!!�ڴ�������!!!(��������ǰѲ�ͬ�ֽ�������������,�����ڴ��Ӧ��)

#pragma pack(1)
//�����ƽ̨
typedef struct A{
	char one;
	short two;
	int three;
}A;
//��ԭ����
#pragma pack()

int main(){
	A a;
	printf("%d\n",sizeof(A));
	printf("%p\n",&a);
	printf("%p\n",&a.one);
	printf("%p\n",&a.two);
	printf("%p\n",&a.three);



	system("pause");
	return 0;
}
