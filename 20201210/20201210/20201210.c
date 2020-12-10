#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//====结构体的充分利用
struct Student{
	int num;
	float score;
	struct Student*next;
};
int main(){
	struct Student a, b, c, *head, *p;
	a.num = 10101;	a.score = 89.5;
	b.num = 10102;	b.score = 85;
	c.num = 10103;	c.score = 80;
	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	p = head;
	do
	{
		printf("%ld %5.1f\n", p->num,p->score);
		p = p->next;
	} while (p != NULL);
	system("pause");
	return 0;
}
//====对于链表返回节点的基本应用
#define LEN sizeof(struct Student)
struct Student{
	long num;
	float score;
	struct Student *next;
};
int n;
struct Student* creat(void){
	struct Student *head;
	struct Student *p1;
	struct Student *p2;
	n = 0;
	p1 = p2 = (struct Student*) malloc(LEN);
	scanf("%ld,%f",&p1->num,&p1->score);
	head = NULL;
	while(p1->num!=0){
		n = n + 1;
		if (n == 1)head = p1;
			else p2->next = p1;
		p2 = p1;
		p1 = (struct Student*)malloc(LEN);
		scanf("%ld,%f",&p1->num,&p1->score);
	}
	p2->next = NULL;
	return (head);
}
int main(){
	struct Student *pt;
	pt = creat();
	printf("\nnum=%ld\nscore=%f\n",pt->num,pt->score);
	system("pause");
	return 0;
}