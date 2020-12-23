#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Reverse(char* left, char* right){
	while (left<right){
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main(){
	char arr[] = "ACDGG";
	int k = 0;
	scanf("%d",&k);
	int len = strlen(arr);
	Reverse(arr,arr+k-1);
	Reverse(arr+k,arr+len-1);
	Reverse(arr,arr+len-1);
	printf("%s",arr);
	system("pause");
	return 0;
}