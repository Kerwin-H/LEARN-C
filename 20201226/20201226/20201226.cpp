#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//���׽ṹ��
typedef struct Student{
	//��Ա  ����
	int id;		
	char name[20];
	int age;
	double score;
}student;



int main(){

	Student Student{ 1, "wdbue", 20, 95 };
	
	strcpy(Student.name,"djwij");  //����ֱ�ӵ��ú������и���
	printf("%s\n",Student.name);


	//ָ�����
	/*int* p1 = 0 * 100;
	int* p2 = 0 * 110;
	printf("%d\n",p2-p1);
*/

	//�����ڲ���ָ��,�����ʾ����Ԫ����Ŀ
	//int arr[4] = {1,2,3,4};
	///*int* p1 = &arr[3];
	//int* p2 = &arr[0];
	//printf("%d\n",p2-p1);*/
	//for (int* p = arr; p < arr +2 ; p++){
	//	printf("%d\n",*p);
	//}


	//�ж�ָ���Ƿ�Ϊ��ָ��
	/*int num = 10;
	int* p = &num;
	if (p != NULL){
		printf("�ǿ�\n");
	}
	else{
		printf("Ϊ��\n");
	}*/

	//int num = 10;
	//int* p = &num;
	//int** p1 = &p;
	//printf("%d\n",**p1); //���ö��ν����ÿ��Խ�һ��ָ���е��������

	//ָ������!  ÿ��Ԫ����һ��ָ�����͵ı���
	//int* arr1[4] = { 0 };

	////����ָ��
	////ָ�� ,ָ��һ������(���Գ���!!)
	//int arr[] = {1,2,3,4};
	//int(*p)[4] = &arr;
	//printf("%d\n",*p);

	system("pause");
	return 0;
}