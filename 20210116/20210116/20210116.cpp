#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void func1(){
	//申请比较大的内存可能申请失败,申请失败就会返回NULL,无法解引用
	//500兆
	int* p = (int*)malloc(INT_MAX / 4);
	*p = 100;
	printf("%p  %d\n",p,*p);
	free(p);
}

void func2(){
	//p相当于一个动态的数组,只不过是通过malloc申请的
	int* p = (int*)malloc(10 * sizeof(int));
	for (int i = 0; i <= 10; i++){
		printf("%d\n",p[i]);
	}
	free(p);
}


int main(){
	func1();
	func2();



	int num = 10;     //free这里是对动态变量的释放,这里的int 是静态变量
	free(&num);

	void* p = malloc(10);  //0x100   内存泄漏
	p = malloc(10);   //0x200   第二次申请malloc覆盖了第一次申请的,然而下面的申请就已经不是原来的0x100
	free(p);  //释放0x200   无法释放0x100

	void* p = malloc(10);
	free(p);		//这里的二次释放错误,第一次退房会给押金,第二次不会
	free(p);		//这里的第二次释放相当于对一个非动态的内存进行释放,所以报错

	void* p = malloc(10);
	free(p);
	p = NULL;		//NULL
	free(p);

	char* p = (char*)malloc(10);  //申请的内存强转成char
	p++;    //0x101  程序崩溃
	free(p);

	//不一定要初始化成全0
	void* p = calloc(10, 4);  //也用free释放
	//这样也可以,按实际情况出发
	void* p2 = malloc(10 * 4);
	memset(p2, 0, 10 * 4);  //对值进行初始化

	void* p = malloc(10);
	p = realloc(p, 20);   //调整

	//!!!!!!!都需要free!!!!!!!

	system("pause");
	return 0;
}