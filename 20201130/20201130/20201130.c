#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
int main(){
	int i = 0;
	int n = 5;
	int num=1;       //再定义一个要输出的结果是要进行具体讨论,不要将num值变为0!!!!
	int j = 1;
	
		for (i = 1; i <= n; i++)
			num = num*i;
	
	printf("%d",num);

	system("pause");
	return 0;
}
int main(){
	/*int n = 10;
	int sum = 0;
	for (int cur = 1; cur <= n;cur++){
		int factor = 1;
		for (int i = 1; i <= cur;i++){
			factor = factor*i;
		}
		sum = sum + factor;
	
	}
	printf("%d",sum);

*/
	system("pause");
	return 0;
}
int factor(int n){
	int result = 1;
	for (int i = 1; i <= n; i++)
		result = result*i;
	return result;
}
int main(){
	int sum = 0;
	for (int j = 1; j <= 10; j++){
		sum=sum+factor(j);
	}
	printf("%d",sum);
	system("pause");
	return 0;
}
int main(){
	char str1[] = "abcdef";
	char str2[] = "######";
	int left = 0;
	int right = strlen(str1) - 1;
	printf("%s\n",str2);
	while (left<=right){
		Sleep(500);		//休眠函数
		system("cls");  //清空
		str2[left] = str1[left];
		str2[right] = str1[right];
		printf("%s\n",str2);
		left++;
		right--;
	}
	system("pause");
	return 0;
}
int main(){
	for (int i = 1; i <= 3; i++){
		char input[20] = { 0 };
		char key[20] = "888888";
		printf("a number:\n");
		scanf("%s",&input);
		if (strcmp(input, key) == 0){
		
			printf("nb");
			break;
		}
		else{ printf("lj"); }
	}
	system("pause");
	return 0; 
}
int main(){
	int arr[] = { 8, 5, 6, 4, 7, 5, 2 };
	int find = 7;
	for (int i = 0; i < 7; i++){
		if (arr[i] == find){
			printf("ok ,%d",i);
			break;
		}
	}
	//二分查找
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int left = 0;
	int find = 0;
	scanf("%d",&find);
	int right = sizeof(arr) / sizeof(arr[0]);
	while (left <= right){
		int mid = (left + right) / 2;
		if (find < arr[mid]){
			right = mid - 1;
		
		}
		else if(find>arr[mid]){
			left = mid + 1;
		
		}
		else{
			printf("okokok%d",mid);
			break;
		}
		if (left > right){
			printf("nonono");
		}
	}
	system("pause");
	return 0;
}