#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//=============1
void test(){

	char *str = (char *)malloc(100);
	strcpy(str, "hello");

	free(str);					//这里的free操作并不会将str中内存变空,
	//不能继续执行下面的代码
	if (str != NULL){

		strcpy(str, "world");
		printf(str);

	}
}

//========2
void getMemory(int **p, int num){
	//1.对输入的这个num值没有进行判定
	*p = (char*)malloc(num);
	//2.对于临时申请的空间没有进行释放,容易出现漏洞
}

void Test(void){

	char *str = NULL;
	getMemory(&str, 100);		//3.函数的参数未进行合法性判定
	strcpy(str, "hello");
	printf(str);
}


//=========3

char *GetMemory(void){

	char p[] = "hello world";
	return p;				//这里的p是一个局部变量,在这个函数
	//执行完后就会被释放,就不能再被定义
}
void Test1(void){

	char *str = NULL;

	str = GetMemory();		//这里的str调用的上面这个函数在运行结束的
	//时候已经被释放了
	printf(str);			//所以下面的这个就是未定义行为
}


//=======4

void GetMemory1(char *p){

	p = (char*)malloc(100);
	//1.未进行free,容易内存泄漏
	//2.malloc返回结果没判空
	//3.GetMemory1函数参数也为进行判空
	//4.由于这个函数只是对于开辟一个动态内存空间
	//  并未对其进行空操作,没办法在修改内容,再次printf容易造成访问越界.
}
void Test1(void){

	char *str = NULL;
	GetMemory1(str);
	strcpy(str, "hello world");
	printf(str);
}




int main(){


	system("pause");
	return 0;
}