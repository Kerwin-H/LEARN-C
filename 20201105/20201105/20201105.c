#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//=======================================1�ǵݹ��󳤶�
int strLen(char arr[]){
	int count = 0;
	for (int i = 0; arr[i] != '\0'; i++){
		count++;
	}
	return count;
}
//====================================2�ݹ��󳤶�
int strLen(char arr[]){
	if (arr[0] == '\0'){
		return 0;
	}
	return 1 + strLen(arr + 1);
}
int main(){
	char arr[] = "abcde";
	int ret = strLen(arr);
	printf("%d \n",ret);
	system("pause");
	return 0;
}
//====================쳲�������3
int fib(int n){
	if (n == 1){
		return 1;
	}
	if (n == 2){
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}
int main(){
	printf("please enter a number \n");
	int m = 0;
	scanf("%d",&m);
	int ret = fib(m);
	printf("%d\n",ret);
	system("pause");
	return 0;
}
//======================================4����һ������,����������ÿ��λ�ϵ����ּ������õ�����ֵ
int DigitSum(int n){
	if (n > 9)
		return DigitSum(n / 10) + n % 10;
	else return n;
}


int main(){
	int i = 0;
	printf("please enter a number:\n");
	scanf("%d",&i);
	int ret=DigitSum(i);
	printf("This number is %d\n",ret);
	system("pause");
	return 0;
}
//=======================================5 ��n��k�η�=======================================================
int power(int n,int k){
	if (k == 0){
		return 1;
	}
	else if (k >= 1){
		return n*power(n, k - 1);
	}
}
int main(){
	printf("please enter n \n");
	int n = 0;
	scanf("%d", &n);
	printf("please enter k \n");
	int k = 0;
	scanf("%d",&k);
	int ret = power(n, k);
	printf("%d",ret);
	system("pause");
	return 0;
}





//========================================�ǵݹ鷽ʽ����
void reverse_string(char* arr)
{
	char *left = arr;
	char *right = arr + strlen(arr) - 1;


	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;


		left++;
		right--;
	}
}


//================================�ݹ鷽ʽ��������
void  reverse_string(char* arr)
{
	int len = strlen(arr);            //��
	char tmp = *arr;				  //left
	*arr = *(arr + len - 1);		  //right

	 *(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2)         //ת��������
		reverse_string(arr + 1);

	*(arr + len - 1) = tmp;
}
int main(){
	char arr[] = "abcdefg";

	reverse_string(arr);
	printf("%s\n",arr);

	system("pause");
	return 0;
}