#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include <string.h>
#include<stdlib.h>
//====字符串逆旋
void Reverse(char* left, char* right){		//简单的定义函数,将其依次置换
	while (left < right){			
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main(){
	char arr[] = "ABCD";
	int k = 0;
	scanf("%d", &k);
	int len = strlen(arr);

	Reverse(arr, arr + k - 1);			//核心语句,对所要求的进行依次的交换
	Reverse(arr + k, arr + len - 1);
	Reverse(arr, arr + len - 1);

	printf("%s", arr);

	system("pause");
	return 0;
}
//====判断旋转后的字符串是否与另外一个字符串相等
int find(char arr[], char*p)
{
	int n = strlen(arr);
	int m = strlen(p);
	if (m != n)
	{
		return 0;
	}
	strncat(arr, arr, n);         //将arr字符串的后面追加一样的字符,形成一个长串
	if (strstr(arr, p) == NULL)  //搜索arr字符串看这个字符串是否出现在另一个字符串内,出现则为空
	{
		return 0;					//返回对应的值
	}
	else
		return 1;
}
int main()
{
	char arr[20] = "abcd";
	char*p = "ABCD";
	//char arr[20]="AABCD";
	//char*p="BCDAA";
	int ret = find(arr, p);
	if (ret == 1)
	{
		printf("1\n");
	}
	else if (ret == 0)
	{
		printf("0\n");
	}
	system("pause");
}