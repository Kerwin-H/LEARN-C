#include<iostream>
using namespace std;
#include<string>

//c++结构体作为函数指针传参

struct Student{
	string name;
	int age;
	int score;
}st3;

void printStudent1(struct Student st3){  //值传递
	cout << "子函数" << endl;
	st3.age = 100;

	cout << "名字:"  << st3.name << "年龄:" << st3.age << "分数:" << st3.score << endl;
}

void printStudent2(struct Student *p){  //地址传递
	p->age = 200;
	cout << "子函数" << endl;
	cout << "名字：" << p->name << "	年龄：" << p->age << "	分数：" << p->score << endl;

}

int main(){
	struct Student st1;
	st1.name = "zhangsan";
	st1.age = 18;
	st1.score = 60;

	struct Student st2 = { "李四", 20, 70 };

	st3.name = "王五";
	st3.age = 19;
	st3.score = 59;

	printStudent1(st3);
	cout << "main函数" << endl;
	cout << "名字：" << st3.name << "	年龄：" << st3.age << "	分数：" << st3.score << endl;

	printStudent2(&st3);
	cout << "main函数" << endl;
	cout << "名字：" << st3.name << "	年龄：" << st3.age << "	分数：" << st3.score << endl;

	system("pause");
	return 0;
}