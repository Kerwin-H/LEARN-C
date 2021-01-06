#include<stdio.h>
#include<stdlib.h>


int DigitSum(int n){                         //自定义函数
	if (n > 9)
		return DigitSum(n / 10) + n % 10;	 //进行递归并将原来数除10使它的余数缩小到下一位
	else return n;							 //当到达最高位则输出
}


int main(){
	int i = 0;
	printf("please enter a number:\n");
	scanf("%d", &i);
	int ret = DigitSum(i);					 //调用函数
	printf("This number is %d\n", ret);
	system("pause");
	return 0;
}
