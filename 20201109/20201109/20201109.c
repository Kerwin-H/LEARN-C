#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//====��1-100���
int main(){
	int i = 0;
	int sum = 0;
	for (i = 1; i < 11; i++){
		sum = sum + i;
	}
	printf("%d\n",sum);
	system("pause");
	return 0;
}
//====�ж�һ������3��5����
int main(){
	printf("please enter a number:\n");
	int i = 0;
	scanf("%d",&i);
	if (i % 5 == 0){
		if (i % 3 == 0){
			printf("%d��������Ա�3��5����!\n",i);
		}
		else { printf("�����������!\n"); }
	}
	else { printf("�����������!\n"); }
	system("pause");
	return 0;
}
//====�����������߳�,�����
int main(){
	double a, b, c, s, area;
	a = 3;
	b = 5;
	c = 7;
	s = (a + b + c) / 2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));          //sqrtΪ����
	printf("a=%f\t b=%f\t c=%f\t",a,b,c);
	printf("area=%f\n",area);
	system("pause");
	return 0;
}
//====�ֲ���д���������
int main(){							//ע��,��д�ֲ�����,�����������ֵ����Ӱ��		
	int  c1, c2;					//�ڵ��������еĶ��������ɶ����ƽ��б�ʾ������,����һ�����ֵı仯,�Ż�
	c1 = 97;						//�������ֵ�ı仯,����������Զ࿴ASCII���
	c2 = 98;
	printf("%c %c\n",c1,c2);
	printf("%d %d\n",c1,c2);


	system("pause");
	return 0;
}
//====��Բ�뾶,Բ����,���һЩ����;
#define p 3.1415926
int main(){
	double r = 1.5;
	int h = 3;
	int i = 0;
	double l;
	double s;
	double s1;
	double  v;
	double v1;
	printf("1.�ܳ�\n");
	printf("2.Բ��� \n");
	printf("3.Բ������ \n");
	printf("4.Բ����� \n");
	printf("5.Բ����� \n");
	printf("please enter a number: \n");
	scanf("%d",&i);
	switch (i){
	case 1:
		l = 2 * p*r;
		printf("%lf",l);
		break;
	case 2:
		s = p*r*r;
		printf("%lf", s);
		break;
	case 3:
		s1 = 4 * p*r*r;
		printf("%lf",s1);
		break;
	case 4:
		v = (4 * p*r*r) / 3;
		printf("%lf",v);
		break;
	case 5:
		v1 = p*r*r*h;
		printf("%lf",v1);
		break;
		printf("please enter another number:");
	}
	system("pause");
	return 0;
}
//====P107