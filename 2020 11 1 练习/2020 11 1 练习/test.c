//��10�����������ֵ
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int arr[] = { 5, 6, 4, 2, 3, 1, 7, 9, 8, 10 };
//	int i = 0;
//	int j = 0;
//	j = arr[0];
//	for (i = 1; i < 10; i++){
//		if (arr[i]>j)
//			j = arr[i];
//	}
//	printf("���ֵΪ:%d\n",j);
//	system("pause");
//	return 0;
//}

//�˷��ھ���
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int i = 0;
//	for (i = 1; i < 10; i++){
//		int j = 0;
//		for (j = 1; j <= i; j++){
//			printf("%d*%d=%2d\t",i,j,i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//��������Ϸ
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void game(){
//	int ret = rand() % 100 + 1;
//	int num = 0;
//	while (1){
//		printf("������һ����:");
//		scanf("%d",&num);
//		if (num > ret){
//			printf("�������������\n");		
//		}
//		else if (num < ret){
//			printf("�������������\n");
//		}
//		else{
//			printf("���¶���!");
//			break;
//		}
//	}
//}
//int menu(){
//	printf("==================\n");
//	printf("1.��ʼ��Ϸ\n");
//	printf("2.������Ϸ\n");
//	printf("==================\n");
//	printf("��������:\n");
//	int choice = 0;
//	scanf("%d",&choice);
//	return choice;
//}
//int main(){
//	srand((unsigned int)time(0));
//	while (1){
//		int choice = menu();
//		if (choice == 1){
//			game();
//		}
//		else if (choice == 2){
//			printf("Good bye!");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
