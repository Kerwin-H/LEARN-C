#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include <string.h>
#include<stdlib.h>
//====�ַ�������
void Reverse(char* left, char* right){		//�򵥵Ķ��庯��,���������û�
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

	Reverse(arr, arr + k - 1);			//�������,����Ҫ��Ľ������εĽ���
	Reverse(arr + k, arr + len - 1);
	Reverse(arr, arr + len - 1);

	printf("%s", arr);

	system("pause");
	return 0;
}
//====�ж���ת����ַ����Ƿ�������һ���ַ������
int find(char arr[], char*p)
{
	int n = strlen(arr);
	int m = strlen(p);
	if (m != n)
	{
		return 0;
	}
	strncat(arr, arr, n);         //��arr�ַ����ĺ���׷��һ�����ַ�,�γ�һ������
	if (strstr(arr, p) == NULL)  //����arr�ַ���������ַ����Ƿ��������һ���ַ�����,������Ϊ��
	{
		return 0;					//���ض�Ӧ��ֵ
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