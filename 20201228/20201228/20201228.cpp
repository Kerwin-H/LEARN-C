#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//====¿¼ÊÔ¸Õ»ØÀ´,´úÂë¸´ ²ÂÊý×Ö
void game(){
	int ret = rand() % 100 + 1;
	int num = 0;
	while (1){
		printf("please enter a number:\n");
		scanf("%d",&num);
		if (num > ret){
			printf("too high!");
		}
		else if(num<ret){
			printf("too low!");
		}
		else{
			printf("good job!");
			break;
		}
	}
}
int menu(){
	printf("===============\n");
	printf("1.play the game\n");
	printf("0.exit\n");
	printf("===============\n");
	int choice = 0;
	printf("please enter :\n");
	scanf("%d",&choice);
	return choice;
}
int main(){
	srand((unsigned int)time(0));
	while (1){
		int choice = menu();
		if (choice == 1){
			game();
		}
		else if(choice==0){
			printf("see you!\n");
			break;
		}
	}
	system("pause");
	return 0;
}