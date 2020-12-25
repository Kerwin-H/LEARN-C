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
	//printf("%p\n",&num);  //简单的将存取的地址打印出来

	//int *p = &num;  //p是一个变量
	//printf("%d\n",*p);


	//int* p = NULL;
	//printf("%d\n",*p);

	//char a = 'a';
	//char* pa = &a;
	//printf("%p\n",*pa);

	//int* p = fun();
	//printf("%d\n",*p);  //野指针

	//char* p = NULL;
	//printf("%p\n",p+1);//关于输出是否+1,和具体的指针类型有关

	//float* c = NULL;
	//printf("%p\n",c+1);//比如像这个就是四个字节,这里指的是跳过一个float的数据

	/*char* d = 0*100;
	printf("%p\n",d-8);
*/
	//递归求字符串长度
	char arr[] = "gvcyue";

	printf("%d\n",myStrlen(arr));

	system("pause");
	return 0;
}