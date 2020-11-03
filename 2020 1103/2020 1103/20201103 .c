#include<stdlib.h>
#include<stdio.h>
void bub(int *a, int len){
	int j;
	int i = 0;
	int t;
	for (i = 0; i < len - 1;i++){
		for (j = 0; j < len-i - 1;j++){
			if (a[j]>a[j + 1]){
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
}
int main(int arg, char *argv[]){
	int a[] = { 0, 1, 5, 2, 4, 99, 75, -8, 12, 33 };
	int i = 0;
	bub(a, 10);
	for (i = 0; i < 10; i++){
		printf("%d ",a[i]);
	}
	system("pause");
	return 0;
}



#include<stdio.h>                       //这个代码稍微有点问题
#include<stdlib.h>
void Init(int arr[], int len){
	int i = 0;
	for (i = 0; i < 5; i++){
		arr[ 5] = '0';
	}
}

void Print(int arr[], int len){
	int i = 0;
	for (i = 0; i < len; i++){
		printf(" %d  ", arr[i]);
	}
	printf("\n");
}

void Reverse(int arr[], int len)
{
	int left = 0;	
	int right = len - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;	
		right--;	
	}
}

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int len = sizeof(arr) / sizeof(arr[0]);	
	Print(arr, len);
	Init(arr,len);
	Print(arr,len );
	Reverse(arr,len );
	Print(arr,len );
	system("pause");
	return 0;
}


#include<stdlib.h>
#include <stdio.h>
int main()
{
	int arr1[] = { 1, 3, 5, 7, 9 };
	int arr2[] = { 3, 4, 5, 6, 7 };

	int tmp;
	int i = 0;
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	printf("交换后:\n");
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d ", arr2[i]);
	}
	
	printf("\n");
	system("pause");
	return 0;
}