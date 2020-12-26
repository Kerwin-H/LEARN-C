#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//简易结构体
typedef struct Student{
	//成员  属性
	int id;		
	char name[20];
	int age;
	double score;
}student;



int main(){

	Student Student{ 1, "wdbue", 20, 95 };
	
	strcpy(Student.name,"djwij");  //可以直接调用函数进行更改
	printf("%s\n",Student.name);


	//指针相减
	/*int* p1 = 0 * 100;
	int* p2 = 0 * 110;
	printf("%d\n",p2-p1);
*/

	//数组内部做指针,相减表示所隔元素数目
	//int arr[4] = {1,2,3,4};
	///*int* p1 = &arr[3];
	//int* p2 = &arr[0];
	//printf("%d\n",p2-p1);*/
	//for (int* p = arr; p < arr +2 ; p++){
	//	printf("%d\n",*p);
	//}


	//判断指针是否为空指针
	/*int num = 10;
	int* p = &num;
	if (p != NULL){
		printf("非空\n");
	}
	else{
		printf("为空\n");
	}*/

	//int num = 10;
	//int* p = &num;
	//int** p1 = &p;
	//printf("%d\n",**p1); //运用二次解引用可以将一级指针中的数据输出

	//指针数组!  每个元素是一个指针类型的变量
	//int* arr1[4] = { 0 };

	////数组指针
	////指针 ,指向一个数组(面试常见!!)
	//int arr[] = {1,2,3,4};
	//int(*p)[4] = &arr;
	//printf("%d\n",*p);

	system("pause");
	return 0;
}