#include<iostream>
using namespace std;
#include<string>

//c++�ṹ����Ϊ����ָ�봫��

struct Student{
	string name;
	int age;
	int score;
}st3;

void printStudent1(struct Student st3){  //ֵ����
	cout << "�Ӻ���" << endl;
	st3.age = 100;

	cout << "����:"  << st3.name << "����:" << st3.age << "����:" << st3.score << endl;
}

void printStudent2(struct Student *p){  //��ַ����
	p->age = 200;
	cout << "�Ӻ���" << endl;
	cout << "���֣�" << p->name << "	���䣺" << p->age << "	������" << p->score << endl;

}

int main(){
	struct Student st1;
	st1.name = "zhangsan";
	st1.age = 18;
	st1.score = 60;

	struct Student st2 = { "����", 20, 70 };

	st3.name = "����";
	st3.age = 19;
	st3.score = 59;

	printStudent1(st3);
	cout << "main����" << endl;
	cout << "���֣�" << st3.name << "	���䣺" << st3.age << "	������" << st3.score << endl;

	printStudent2(&st3);
	cout << "main����" << endl;
	cout << "���֣�" << st3.name << "	���䣺" << st3.age << "	������" << st3.score << endl;

	system("pause");
	return 0;
}