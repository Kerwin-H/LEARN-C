#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//====ָ��������α���
int main(){
	int a = 100;
	int b = 10;
	int *p1, *p2;
	p1 = &a;
	p2 = &b;
	printf("%d %d",*p1,*p2);

	system("pause");
	return 0;
}
//====����������,Ȼ���С����
int main(){
	int *p1, *p2, *p, a, b;
	printf("please enter two number:\n");
	scanf("%d %d",&a,&b);
	p1 = &a;
	p2 = &b;
	if (a < b){
		p = p1; p1 = p2; p2 = p;
	}
	printf("%d %d \n",a,b);
	printf("%d %d\n",*p1,*p2);


	system("pause");
	return 0;
}
//====����ָ�뺯�����н���,�������ⲿ����
void swap(int *p1, int *p2){
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
int main(){
	int a, b;
	int *pointer1, *pointer2;
	printf("enter two number:\n");
	scanf("%d %d",&a,&b);
	pointer1 = &a;
	pointer2 = &b;
	if (a < b)	swap(pointer1, pointer2);
	printf("%d %d",a,b);
	system("pause");
	return 0;
}