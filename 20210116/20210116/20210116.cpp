#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void func1(){
	//����Ƚϴ���ڴ��������ʧ��,����ʧ�ܾͻ᷵��NULL,�޷�������
	//500��
	int* p = (int*)malloc(INT_MAX / 4);
	*p = 100;
	printf("%p  %d\n",p,*p);
	free(p);
}

void func2(){
	//p�൱��һ����̬������,ֻ������ͨ��malloc�����
	int* p = (int*)malloc(10 * sizeof(int));
	for (int i = 0; i <= 10; i++){
		printf("%d\n",p[i]);
	}
	free(p);
}


int main(){
	func1();
	func2();



	int num = 10;     //free�����ǶԶ�̬�������ͷ�,�����int �Ǿ�̬����
	free(&num);

	void* p = malloc(10);  //0x100   �ڴ�й©
	p = malloc(10);   //0x200   �ڶ�������malloc�����˵�һ�������,Ȼ�������������Ѿ�����ԭ����0x100
	free(p);  //�ͷ�0x200   �޷��ͷ�0x100

	void* p = malloc(10);
	free(p);		//����Ķ����ͷŴ���,��һ���˷����Ѻ��,�ڶ��β���
	free(p);		//����ĵڶ����ͷ��൱�ڶ�һ���Ƕ�̬���ڴ�����ͷ�,���Ա���

	void* p = malloc(10);
	free(p);
	p = NULL;		//NULL
	free(p);

	char* p = (char*)malloc(10);  //������ڴ�ǿת��char
	p++;    //0x101  �������
	free(p);

	//��һ��Ҫ��ʼ����ȫ0
	void* p = calloc(10, 4);  //Ҳ��free�ͷ�
	//����Ҳ����,��ʵ���������
	void* p2 = malloc(10 * 4);
	memset(p2, 0, 10 * 4);  //��ֵ���г�ʼ��

	void* p = malloc(10);
	p = realloc(p, 20);   //����

	//!!!!!!!����Ҫfree!!!!!!!

	system("pause");
	return 0;
}