#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//====���׽ṹ��,��ʾ����
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
//====�ṹ��,���׼���
#define N 3
struct Student{
	int num;
	char name[20];
	float score[3];
	float aver;
};

void input(struct Student stu[]){
	int i;
	printf("���������ѧ������Ϣ:ѧ��.����.3�ſγɼ�:\n");
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
	printf("\n�ɼ���ߵ�ѧ����:\n");
	printf("ѧ��:%d\n����:%s\n���ſγɼ�:%5.1f,%5.1f,%5.1f\nƽ���ɼ�:6.2f\n",
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