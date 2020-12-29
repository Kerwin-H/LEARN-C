#include<stdio.h>
#include<stdlib.h>

typedef struct Student{
	int id;
	char name[1024];

}Student;

//====面试题!判断是大端字节序,还是小端
int isBigEnd(){
	int num = 0 * 11223344;
	int* p = &num;
	char* p2 = (char*)p;    //(char*) 强制类型转换,不改变其中的值,这里将整型转换成了字符型,故读取的字节数少了
	if (*p2 == 0 * 11){
		return 1;		//大端
	}
	return 0; 
}


int main(){
	//Student s = { 10, "zhangsan" };
	//Student* p = &s;  //结构体

	//printf("%d\n",p->id);	//这里的p是指针,所以要箭头指向		//结构体指针
	//printf("%d\n",s.id);			//结构体变量
	//printf("%d\n",(*p).id);  //(*p)解引用  .id引用

	//int a = 0*11223344;
	//char name[] = "hello";

	//printf("%d\n",isBigEnd());


	//int a = -10;  //注意在调试器中看所在的存储方式
	//==对于浮点数非要进行大小比较的时候,假设17/9是一个无限的小数,在电脑中,它没有足够的空间来
	//表示出来两个相同的数相等,故非要进行比较就需要做差,比较看它的误差到底大不大,如果误差小,近似于相等
	float a = 19.0;
	float b = a / 7.0;

	if (b*7.0== a){
		printf("equal\n");
	}
	else{
		printf("NO\n");
	}
	//误差进行比较
	#define N 1e-4
	if (b*7.0 - a < N&&b*7.0-a>-N){
		printf("equal the same\n");
	}
	else{
		printf("NO\n");
	}
	system("pause");
	return 0;
}



