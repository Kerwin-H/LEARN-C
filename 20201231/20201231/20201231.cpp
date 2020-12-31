#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

int find(char arr[],char *p){
	int n = strlen(arr);
	int m = strlen(p);
	if (m != n){
		return 0;
	}
	strncat(arr, arr, n);
	if (strstr(arr, p) == NULL){
		return 0;
	}
	else
		return 1;
}
int main(){
	char arr[] = "AABCD";
	char *p = "BCDAA";
	int ret = find(arr, p);
	if (ret == 1){
		printf("1\n");
	}
	else if (ret == 0){
		printf("0\n");
	}
	system("pause");
	return 0;
}