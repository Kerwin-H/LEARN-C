#define _CRT_SECURE_NO_WARNINGS
//=======================1一个例题
#include <stdio.h>
int main()
{
	int a = 0x11223344;			//定义一个数组里面存储{11,22,33,44}
	char *pc = (char*)&a;		//将整个储存空间的大小赋给pc变量
	*pc = 0;					//将pc变量的大小也就是最后一个值变为0
	printf("%x\n", a);			//将这个数组整个打印出来
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
//======================================2打印数组
int main(){
	int arr[] = {1,2,3,4,5,6};
	int* p= arr;											//定义一个指针并将其首地址赋予这个p
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);++i){  //运用for循环对数组内存在的每个数
		printf("%d ", *p);									//将这个数组运用这个指针进行打印出来
		++p;												//每次加1
	}
	system("pause");
	return 0;
}
//==================================3写函数进行字符串逆序交换
#include<stdio.h>
#include<stdlib.h>
void reverse_string(char* arr){
	int len = strlen(arr);
	char p = *arr;                //左
	*arr = (*arr + len - 1);	  //右
	*(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2)
		reverse_string(arr+1);
	*(arr + len - 1) = p;
}


int main(){
	char arr[] = "abcdefgh";
	reverse_string(arr);
	printf("%s\n",arr);
	system("pause");
	return 0;
}
//=====================================将一个函数的表达式表达出来
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i = 0;						//定义整型变量
	int n = 0;
	int j = 0;
	int sum = 0;
	int temp = 0;
	 scanf("%d %d", &i, &n);		//两个赋予地址
	for (j = 0; j< n;j++){			//用j在n的可控范围内进行循环
		temp =  temp*10 + i;		//这一步就是一个关键的将Sn这个格式表达出来的语句
		sum += temp;				//++
	}
	printf("%d",sum);				//输出这个值


	system("pause");
	return 0;
}