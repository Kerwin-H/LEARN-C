#include<stdio.h>
#include<stdlib.h>
int main(){
	int num1 = 1;
	int num2 = 2;
	printf("%d\n", num1&num2);
	printf("%d\n", num1 | num2);
	printf("%d\n", num1^num2);
	system("pause");
	return 0;
}

int main(){
	int a = 10;
	int b = 20;

	a = a^b;//��������ϵ����Ƕ�׿��Բ����ⴴ��������ʵ�ֱ����Ľ���
	b = a^b;
	a = a^b;

	printf("%d %d ",a,b);
	system("pause");
	return 0;
}

int main(){
	int num = 10;
	int count = 0;
	//====1
	/*while (num){
		if (num % 2 == 1)
		count++;
		num = num / 2;
		}*/
	//====2
	/*for (int i = 0; i < 32; i++){
		if (((num >> i) & 1) == 1)
		count++;
		}*/
	//====3
	while (num){
		count++;
		num = num&(num - 1);
	}

	printf("�ڶ�������1�ĸ���:%d\n",count);
	system("pause");
	return 0;
}

int main(){
	printf("%d\n",!0);
	printf("%d\n",!2);
	printf("%d\n",sizeof(int));

	system("pause");
	return 0;
}

int main(){
	int arr[1] = { 0 };
	char ch[1] = { 0 };
	printf("%d\n",sizeof(arr));
	printf("%d\n",sizeof(ch));
	system("pause");
	return 0;
}

int main()
{
	int a = 10;
	int x = ++a;  //��������
	//�ȶ�a����������Ȼ���ʹ��a��Ҳ���Ǳ��ʽ��ֵ��a����֮���ֵ��xΪ11��
	int y = --a;
	//�ȶ�a�����Լ���Ȼ���ʹ��a��Ҳ���Ǳ��ʽ��ֵ��a�Լ�֮���ֵ��yΪ10;
	printf("%d %d\n",x,y);
	system("pause");
	return 0;
}
int main()//360
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;
	//i = a++||++b||d++;
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	system("pause");
	return 0;
}int main(){	int a = 1;	int b = 2;	int c = (a > b, a = b + 10, a, b = a + 1);	printf("%d",c);	system("pause");	return 0;}