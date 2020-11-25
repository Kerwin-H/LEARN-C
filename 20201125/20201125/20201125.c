#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//====求班级平均值
float average(float arr[],int n){
	int i;
	float aver, sum = arr[0];
	for (i = 1; i < n; i++)
		sum = sum + arr[i];
	aver = sum / n;
	return (aver);
}
int main(){
	float score[5] = { 98, 99, 94, 92, 95 };
	float score1[10] = { 99, 94, 55, 66, 85, 25, 85, 45, 95, 96 };
	printf("the average of class A is %6.2f:\n",average(score,5));
	printf("the average of class A is %6.2f:\n",average(score1,10));
	system("pause");
	return 0;
}
//====将一个数组里面的值进行从小到大排列
void sort(int array[], int n){
	int i, j, k, t;
	for (i = 0; i < n - 1; i++){
		k = i;
		for (j = i + 1; j < n;j++)
		if (array[j] < array[k])
			k = j;
		t = array[k];
		array[k] = array[i];
		array[i] = t;
	}
}
int main(){
	int arr[10];
	int i = 0;
	printf("please enter ten number:\n");
	for (i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	sort(arr, 10);
	printf("the end:\n");
	for (i = 0; i < 10; i++)
		printf("%d ",arr[i]);
	printf("\n");
	system("pause");
	return 0;
}
//P219