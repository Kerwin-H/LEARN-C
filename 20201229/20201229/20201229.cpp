#include<stdio.h>
#include<stdlib.h>

typedef struct Student{
	int id;
	char name[1024];

}Student;

//====������!�ж��Ǵ���ֽ���,����С��
int isBigEnd(){
	int num = 0 * 11223344;
	int* p = &num;
	char* p2 = (char*)p;    //(char*) ǿ������ת��,���ı����е�ֵ,���ｫ����ת�������ַ���,�ʶ�ȡ���ֽ�������
	if (*p2 == 0 * 11){
		return 1;		//���
	}
	return 0; 
}


int main(){
	//Student s = { 10, "zhangsan" };
	//Student* p = &s;  //�ṹ��

	//printf("%d\n",p->id);	//�����p��ָ��,����Ҫ��ͷָ��		//�ṹ��ָ��
	//printf("%d\n",s.id);			//�ṹ�����
	//printf("%d\n",(*p).id);  //(*p)������  .id����

	//int a = 0*11223344;
	//char name[] = "hello";

	//printf("%d\n",isBigEnd());


	//int a = -10;  //ע���ڵ������п����ڵĴ洢��ʽ
	//==���ڸ�������Ҫ���д�С�Ƚϵ�ʱ��,����17/9��һ�����޵�С��,�ڵ�����,��û���㹻�Ŀռ���
	//��ʾ����������ͬ�������,�ʷ�Ҫ���бȽϾ���Ҫ����,�ȽϿ��������״󲻴�,������С,���������
	float a = 19.0;
	float b = a / 7.0;

	if (b*7.0== a){
		printf("equal\n");
	}
	else{
		printf("NO\n");
	}
	//�����бȽ�
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



