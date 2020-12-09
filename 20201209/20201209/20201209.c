#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//====简易结构体,表示出来
struct Student{
	int num;
	char name[20];
	char sex;
	int age;
	};
struct Student stu[3] = { {10101,"LIN LIN",'M',18}, {10102,"ZHANG FANG",'M',19}, 
								{10103,"WANG MIN",'F',20} };
int main(){
	struct Student *p;
	printf("No.   Name                 sex  age\n");
	for (p = stu; p < stu + 3; p++)
		printf("%5d %-20s %2c %4d\n",p->num,p->name,p->sex,p->age);
	system("pause");
	return 0;
}
//====结构体,简易计算
#define N 3
struct Student{
	int num;
	char name[20];
	float score[3];
	float aver;
};

void input(struct Student stu[]){
	int i;
	printf("请输入各个学生的信息:学号.姓名.3门课成绩:\n");
	for (int i = 0; i < N; i++){
		scanf("%d %s %f %f %f", &stu[i].num, stu[i].name,
			&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
		stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3.0;
	}
}
struct Student max1(struct Student stu[]){
	int i;
	int m = 0;
	for (i = 0; i < N; i++)
	if (stu[i].aver>stu[m].aver)m = i;
	return stu[m];
}
void print(struct Student stud){
	printf("\n成绩最高的学生是:\n");
	printf("学号:%d\n姓名:%s\n三门课成绩:%5.1f,%5.1f,%5.1f\n平均成绩:6.2f\n",
			stud.num,stud.name,stud.score[0],stud.score[1],stud.score[2],stud.aver);
}
int main(){
	struct Student stu[N], *p = stu;
	input(p);
	print(max1(p));
	system("pause");
	return 0;
}
//P332