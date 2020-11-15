#include <stdio.h>
#include <stdlib.h>
//====定义一个最基本的结构体
typedef struct Student {
	int id;
	char name[1024];
} Student;
//====这里是一个基本的判断电脑是不是小端字节序,如果是小端,
//====输入的数组输出的就是44,因为小端字节序的,存储方式是相反的
int isBigEnd() {
	int num = 0x11223344;
	int* p = &num;
	char* p2 = (char*)p;
	if (*p2 == 0x11) {
		return 1;
	}
	return 0;
}


int main() {

	Student s = { 10, "zhangsan" };
	printf("%d\n", s.id);     //这里的s.相当于结构体赋值

	Student* p = &s;		//将s的值赋予一个结构体指针

	printf("%d\n", p->id);		//指针输出
	printf("%d\n", (*p).id);	//用指针形成结构体的方式进行赋值



	float a = 19.0;				//就我的理解看来,电脑内部的储存系统无法将	
	float b = a / 7.0;			//一个近似的值存储下来,只能存储部分数位,当值一旦发生转换
	if (b * 7.0 == a) {			//就我们理解的两个相等的值就会变得不相等,所以我们需要定义一个函数使其相等
		printf("相等!\n");
	} else {
		printf("不相等\n");
	}

	 1e-4 => 1 * 10 ^ -4 => 0.0001		//这里是运用科学计数法写出的数进行大小判断
	   #define N 1e-4
	if (b * 7.0 - a < N && b * 7.0 - a > -N) {
		printf("相等, 此处不是严格相等, 而是允许误差\n");
	} else {
		printf("不相等\n");
	}



	float a = 1.0;				//浮点型进行判断,都是用来证实电脑的存储及空间没有想象的哪么大
	float b = 2.0;
	float c = a + b;
	if (a + b == 3.0) {
		printf("相等\n");
	} else {
		printf("不相等\n");
	}

	
	//================================对于字符型数组这个东西,我们不能用==直接比较,需要借助函数
	char str1[] = "hehe";
	char str2[] = "hehe";
	char* str3 = "hehe";
	char* str4 = "hehe";

	// 此处数组本来是不能直接比较的. 
	// 但是指针可以. 此处数组名又隐式转成指针了. 
	if (str1 == str2) {
		printf("相等\n");
	} else {
		printf("不相等\n");
	}

	if (str3 == str4) {
		printf("相等\n");
	} else {
		printf("不相等\n");
	}

	int* arr[4] = { 0 };

	int arr2[4] = { 0 };
	int(*p)[4] = &arr2;

	printf("%p\n", arr2);
	// arr2 单独拎出来是 int* (首元素的指针)
	printf("%p\n", arr2 + 1);
	// &arr2 单独拎出来 是 int(*)[4] (指向数组的指针)
	printf("%p\n", &arr2 + 1);

	// 长度为 3 的一维数组, 里面的每个元素又是长度为 5 的一维数组. 
	int arr[3][5] = { 0 };
	print(arr);

	system("pause");
	return 0;
}
//简单的结构体以及对字符型数组的一些理解
//对于定义一个二维数组这个地方[4][5],假如是对这个赋予指针,其里面就有4个指针,且每个指针的储存空间有5个数