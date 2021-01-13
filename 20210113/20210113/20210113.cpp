#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>


//内存拷贝
//!!!!!!!!!!注意参数的合法性校验!!!!!! 
void* myMemcpy(void* dest ,const void* src,size_t num){
	assert(dest != NULL&&src != NULL);
	char* pDest = (char*)dest;
	char* pSrc = (char*)src;
	for (int i = 0; i < num; i++){
		*(pDest + i) = *(pSrc + i);
	}
	return dest;
}

//当内存发生重叠的时候,memove是正确的,memcpy不确定
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
	
	//查找切分,找寻所要找的东西,将其切换为空格(有缺陷)
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
	//printf("%d ",arr2[i]);  //在这里要注意到数组需要用循环才能输出

	system("pause");
	return 0;
}


//====第四节
struct Student{
	char name[1024];
	int age;

};

//不可包含自己的结构体成员
struct School{
	
	struct Student students[1024];
	
	struct School* school;//加* 可以,指针
};

//====!!!内存对齐规则!!!(在这里就是把不同字节数储存在里面,看对内存的应用)

#pragma pack(1)
//代码跨平台
typedef struct A{
	char one;
	short two;
	int three;
}A;
//还原代码
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
