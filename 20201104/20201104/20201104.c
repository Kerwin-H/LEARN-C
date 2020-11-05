////======================================1
//#define _CRT_SECURE_NO_WARNINGS      //输入两个数,判断他们的二进制数位有几个不一样
//#include <stdio.h>
//#include <stdlib.h>
//int countOneBit(int num) {
//	
//	int count = 0;
//	for (int i = 0; i < 32; i++) {
//		if (num & (1 << i)) {
//			count++;
//		}
//	}
//	return count;
//}
//int main(){
//	int m = 0;
//	int n = 0;
//	int num = 0;
//	printf("请输入两个数:\n");
//	scanf("%d %d",&m,&n);
//	num = m^n;
//	countOneBit(num);
//	printf("%d",countOneBit(num));
//	system("pause");
//	return 0;
//}
//
//
//
////=========================================2
//#define _CRT_SECURE_NO_WARNINGS   //输入一个数,分奇偶打印出二进制数位
//#include <stdio.h>
//#include <stdlib.h>
//
//void Printbit(int num){
//	printf("偶数位:");
//	for (int i = 31; i >= 1; i -= 2)    //偶数依次递减
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	printf("奇数位:");
//	for (int i = 30; i >= 0; i -= 2)     //奇数
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//}
//int main(){
//	int num = 0;
//	printf("please enter a number:\n");
//	scanf("%d", &num);
//	Printbit(num);
//	system("pause");
//	return 0;
//}


//===============================================3
#define _CRT_SECURE_NO_WARNINGS    //输入一个数,打印出它的二进制表示,并计算有多少个1
#include <stdio.h>
#include <stdlib.h>

int stat(int num){
	int count = 0;
		for (int i = 0; i < 32; i++) {
			if (num & (1 << i)) {
				count++;
			}
		}
		printf("一共有%d个\n",count);
		for (int i = 31; i >= 0; i -= 1)    
				{
					printf("%d  ", (num >> i) & 1);
				}
		return count;
	}
int main(){
	int count = 0;
	int m = 0;
	printf("please enter number:\n");
	scanf("%d",&m);
	stat(m);
	system("pause");
	return 0;
}







//

//// 写一个函数, 求出两个数字较大的值再+100 的结果. 
//int maxNum(int x, int y) {
//	//if (x > y) {
//	//	return x;
//	//}
//	//return y;
//	return x > y ? x : y + 100;
//}
//
//int main() {
//	//int num = 11;
//	//
//	//int ret = countOneBit(num);
//	//printf("%d\n", ret);
//
//	//const int a = 10;
//	//a = 20;
//
//
//
//	/
//
//
//	
//	//int arr[10] = { 0 };
//	// A. 4
//	// B. 40
//	// C. 未定义行为
//	// 注意, 此处的结果 4 , 并不是未定义行为. 
//	// sizeof 是一个特殊的运算符, 一个重要的特性是: 编译期求值. 
//	//printf("%d\n", sizeof(arr[10]));
//
//	//int num = 0;
//	// ! 逻辑取反, 是把操作数, 当成 "真, 假" 来看待. =====================!!
//	// C 语言中, 非0 都表示真, 0 表示假. 
//	// 此时  ! 就是在真假值的基础上进行取反. 
//	//printf("%x\n", !num);
//	//printf("%x\n", ~num);                          //按位取反
//
//	//printf("%d\n", 1 > 2);
//
//	//int a = 1;	// 01
//	//int b = 2;	// 10
//	//printf("%d\n", a & b);
//	//printf("%d\n", a and b);
//
//	//整型 i = 10;
//	//如果(i < 10) {
//	//	printf("wocao\n");
//	//} 否则{
//	//	printf("hehe\n");
//	//}
//
//	//int i = 0, a = 0, b = 2, c = 3, d = 4;
//	// a++ 返回值是 0, 按照短路求值的规则, 此时, b, c, d 的表达式都不进行求值了. 
//	//i = a++ && ++b && c++ && d++;
//	//i = a++||++b||c++ || d++;
//	//printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//
//	//int arr[3][4] = {
//	//	(1, 2), 
//	//	(3, 4)
//	//};
//
//	// 这是函数调用
//	//print(); 
//
//	// 这个操作其实是取到了函数指针
//	//print;
//
//	//int a = 10;
//	//float b = 1.5;
//	////b = a;
//	//a = b;
//	//printf("%d\n", a);
//
//	// 2 个字节, -32768 -> +32767 (要记住)    无符号 0->65535
//	//short a = 10;
//	// 4 个字节, -21亿 -> +21亿  无符号 0-> 42亿9千万
//	//int b = 100000;
//
//	//a = b;
//	//printf("%d\n", a);
//
//	int i = 1;
//	int ret = ++i + ++i + ++i;
//	printf("ret = %d\n", ret);
//
//	system("pause");
//	return 0;
//}