#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int strLen(char arr[]){
	int count = 0;
	for (int i = 0; arr[i] != '\0'; i++){
		count++;
	}
	return count;
	//====递归
	if (arr[0] == '\0'){
		return 0;
	}
	return 1 + strLen(arr + 1);		//总结,递归的代码总在return中调用,且要理解题目中的题意进行分析
}
int main(){
	char str[] = "jbfjs";
	int ret = strLen(str);
	printf("%d\n",ret);
	system("pause");
	return 0;
}
//====斐波那契数列
int Fib(int n){
	if (n < 3){
		return n;
	}
	return Fib(n - 1) + Fib(n - 2);		//因为这个数列是指数增长的,在40往后的运算效率会减缓
}										//进行了大量的重复计算
//====非递归
int Fib(int n){
	if (n < 3){
		return 1;
	}
	int last1 = 1;
	int last2 = 1;
	int cur = 0;
	for (int i = 3; i <=n; i++){
		cur = last1 + last2;
		last2 = last1;
		last1 = cur;
	}
	return cur;
}
int main(){
	printf("please enter a number:\n");
	int a = 0;
	scanf("%d",&a);
	int ret = Fib(a);
	printf("%d",ret);
	system("pause");
	return 0;
}
//=============================================第三章函数遗留问题
//====下标方式使用二维数组
int main(){
	int arr[3][4] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++){
		int j = 0;
		for (j = 0; j < 4; j++){
			arr[i][j] = i * 4 + j;
		}
	}
	for (i = 0; i < 3; i++){
		int j = 0;
		printf("\n");
		for (j = 0; j < 4; j++){
			printf("%d  ",arr[i][j]);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
int main()
{
	int arr[3][4];
	int i = 0;
	for (i = 0; i<3; i++)
	{
		int j = 0;
		for (j = 0; j<4; j++)
		{
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
		}
	}
	system("pause");
	return 0;
}