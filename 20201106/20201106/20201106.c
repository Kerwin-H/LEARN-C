#define _CRT_SECURE_NO_WARNINGS
//=======================1һ������
#include <stdio.h>
int main()
{
	int a = 0x11223344;			//����һ����������洢{11,22,33,44}
	char *pc = (char*)&a;		//����������ռ�Ĵ�С����pc����
	*pc = 0;					//��pc�����Ĵ�СҲ�������һ��ֵ��Ϊ0
	printf("%x\n", a);			//���������������ӡ����
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
//======================================2��ӡ����
int main(){
	int arr[] = {1,2,3,4,5,6};
	int* p= arr;											//����һ��ָ�벢�����׵�ַ�������p
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);++i){  //����forѭ���������ڴ��ڵ�ÿ����
		printf("%d ", *p);									//����������������ָ����д�ӡ����
		++p;												//ÿ�μ�1
	}
	system("pause");
	return 0;
}
//==================================3д���������ַ������򽻻�
#include<stdio.h>
#include<stdlib.h>
void reverse_string(char* arr){
	int len = strlen(arr);
	char p = *arr;                //��
	*arr = (*arr + len - 1);	  //��
	*(arr + len - 1) = '\0';
	if (strlen(arr + 1) >= 2)
		reverse_string(arr+1);
	*(arr + len - 1) = p;
}


int main(){
	char arr[] = "abcdefgh";
	reverse_string(arr);
	printf("%s\n",arr);
	system("pause");
	return 0;
}
//=====================================��һ�������ı��ʽ������
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i = 0;						//�������ͱ���
	int n = 0;
	int j = 0;
	int sum = 0;
	int temp = 0;
	 scanf("%d %d", &i, &n);		//���������ַ
	for (j = 0; j< n;j++){			//��j��n�Ŀɿط�Χ�ڽ���ѭ��
		temp =  temp*10 + i;		//��һ������һ���ؼ��Ľ�Sn�����ʽ�����������
		sum += temp;				//++
	}
	printf("%d",sum);				//������ֵ


	system("pause");
	return 0;
}