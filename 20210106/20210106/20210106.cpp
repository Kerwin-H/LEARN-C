#include<stdio.h>
#include<stdlib.h>


int DigitSum(int n){                         //�Զ��庯��
	if (n > 9)
		return DigitSum(n / 10) + n % 10;	 //���еݹ鲢��ԭ������10ʹ����������С����һλ
	else return n;							 //���������λ�����
}


int main(){
	int i = 0;
	printf("please enter a number:\n");
	scanf("%d", &i);
	int ret = DigitSum(i);					 //���ú���
	printf("This number is %d\n", ret);
	system("pause");
	return 0;
}
