#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int add(int x, int y);


//!!!���ں��Ƿ�Ҫ�ӷֺ�Ҫ�������,�Ӳ���������ĺ��岻ͬ


//1.ʹ�ú궨�峣��
#define SIZE 10

//2.�����������������
#define and &&
#define or ||

//3.���¶������͵ı���
//typedef unsigned int uint;
#define uint unsigned int

//4.�����Ը��ؼ�������
#define reg register  //�Ĵ���

//5.�������Ƭ��
#define CHECK(ret) if(ret==0){ printf("ִ��ʧ��\n"); return 1;} 


//!!!!!!�ڶ�����ʱ��ֻ��д��һ��,�����Ҫ����,��Ҫ��'\',�������


//6.��������Ϊ'���뿪��'

//�������scanf����Ҫ���к궨��,���û��������һϵ�еİ�ȫ���Ĵ���
//�����������˺��Ժ�,��Щ��صĴ�����ͻᱻ�ر�
//��μ��Ĵ�����stdio.h����,����Ҫ�������Ӧ�����漴��





int main(){




	//��ʵ�ʿ����п���������γ����ظ�����
	//���Ǿ���Ҫ���ú궨����Լ򻯴���
	//����:
	//int ret = 0;
	//ret = login();
	//if (ret == 0){
	//	printf("ִ��ʧ��!\n");  //�������ظ��Ĵ��������CHECK����
	//	return 1;
	//}

	//CHECK(ret);

	//ret = enterRoom();
	//if (ret == 0){
	//	printf("ִ��ʧ��!\n");
	//	return 1;
	//}
	//ret = startMatch();
	//if (ret == 0){
	//	printf("ִ��ʧ��!\n");
	//	return 1;
	//}
	//ret = acceptGame();
	//if (ret == 0){
	//	printf("ִ��ʧ��!\n");
	//	return 1;
	//}



	//int ret = add(10, 20);
	//printf("%d\n",ret);
	//printf("%d\n",_STDC_);



	system("pause");
	return 0;
}