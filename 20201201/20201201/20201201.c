#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//====������
void game(){
	int ret = rand() % 100+1;
	int num = 0;
	printf("%d\n",ret);		//����ר��
	while (1){
		printf("please enter a number:\n");
		scanf("%d",&num);
		if (num > ret){
			printf("too high!");
		}
		else if (num < ret){
			printf("too low!");
		}
		else{
			printf("good job!");
			break;
		}
	}
}
int menu(){
	printf("=====================\n");
	printf("1.��ʼ��Ϸ\n");
	printf("2.������Ϸ\n");
	printf("������:\n");
	printf("=====================\n");
	int choice = 0;
	scanf("%d",&choice);
	return choice;
}
int main(){
	srand((unsigned int)time(0));		//��ʼ������Ϊ���ֵ
	while (1){
		int choice = menu();
		if (choice == 1){
			game();
		}
		else if (choice == 2){
			printf("good bye!");
			break;
		}
	}
	system("pause");
	return 0;
}