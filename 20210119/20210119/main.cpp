#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int add(int x, int y);


//!!!对于宏是否要加分号要具体举例,加不加所代表的含义不同


//1.使用宏定义常量
#define SIZE 10

//2.给运算符进行重命名
#define and &&
#define or ||

//3.重新定义类型的别名
//typedef unsigned int uint;
#define uint unsigned int

//4.还可以给关键字命名
#define reg register  //寄存器

//5.定义代码片段
#define CHECK(ret) if(ret==0){ printf("执行失败\n"); return 1;} 


//!!!!!!在定义宏的时候只能写成一行,如果需要多行,需要用'\',添加行数


//6.还可以作为'编译开关'

//例如添加scanf是需要进行宏定义,如果没有则会添加一系列的安全检查的代码
//在这里运用了宏以后,这些相关的代码检查就会被关闭
//这段检查的代码在stdio.h里面,至于要放在相对应的上面即可





int main(){




	//在实际开发中可能遇见多段程序重复出现
	//我们就需要调用宏定义可以简化代码
	//如下:
	//int ret = 0;
	//ret = login();
	//if (ret == 0){
	//	printf("执行失败!\n");  //这里多段重复的代码可以用CHECK代替
	//	return 1;
	//}

	//CHECK(ret);

	//ret = enterRoom();
	//if (ret == 0){
	//	printf("执行失败!\n");
	//	return 1;
	//}
	//ret = startMatch();
	//if (ret == 0){
	//	printf("执行失败!\n");
	//	return 1;
	//}
	//ret = acceptGame();
	//if (ret == 0){
	//	printf("执行失败!\n");
	//	return 1;
	//}



	//int ret = add(10, 20);
	//printf("%d\n",ret);
	//printf("%d\n",_STDC_);



	system("pause");
	return 0;
}