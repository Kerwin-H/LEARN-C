#include<stdio.h>
#include<stdlib.h>
int* fun(){
	int a = 10;
	return &a;
}

int myStrlen(char* str){
	if (str == '\0'){
		return 0;
	}
	return 1 + myStrlen(str + 1);
}

int main(){
	//int num = 10;
	//printf("%p\n",&num);  //�򵥵Ľ���ȡ�ĵ�ַ��ӡ����

	//int *p = &num;  //p��һ������
	//printf("%d\n",*p);


	//int* p = NULL;
	//printf("%d\n",*p);

	//char a = 'a';
	//char* pa = &a;
	//printf("%p\n",*pa);

	//int* p = fun();
	//printf("%d\n",*p);  //Ұָ��

	//char* p = NULL;
	//printf("%p\n",p+1);//��������Ƿ�+1,�;����ָ�������й�

	//float* c = NULL;
	//printf("%p\n",c+1);//��������������ĸ��ֽ�,����ָ��������һ��float������

	/*char* d = 0*100;
	printf("%p\n",d-8);
*/
	//�ݹ����ַ�������
	char arr[] = "gvcyue";

	printf("%d\n",myStrlen(arr));

	system("pause");
	return 0;
}