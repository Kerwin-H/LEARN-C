#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX_COL	9
#define MAX_ROW 9
#define DEFAULT_MINE_COUNT 10
 
//int menu(){
//	printf("======================\n");
//	printf("1.play the game\n");
//	printf("0.exit\n");
//	printf("======================\n");
//	printf("please enter number:\n");
//	int choice = 0;
//	scanf("%d",&choice);
//	return choice;
//}
//void init(char showMap[MAX_ROW][MAX_COL], char mineMap[MAX_ROW][MAX_COL]){
//	for (int row = 0; row < MAX_ROW; row++){
//		for (int col = 0; col < MAX_COL; col++){
//			showMap[row][col] = '*';
//		}
//	}
//	for (int row = 0; row < MAX_ROW; row++){
//		for (int col = 0; col < MAX_COL; col++){
//			mineMap[row][col] = 'o';
//		}
//	}
//	int n = DEFAULT_MINE_COUNT;
//	while (n>0){
//		int row = rand() % MAX_ROW;
//		int col = rand() % MAX_COL;
//		if (mineMap[row][col] == '1'){
//			continue;
//		}
//		mineMap[row][col] = '1';
//		n--;
//	}
//}
//void printMap(char theMap[MAX_ROW][MAX_COL]){
//	printf("1 2 3 4 5 6 7 8 9\n");
//	printf("-----------------\n");
//	for (int row = 0; row < MAX_ROW; row++){
//		for (int col = 0; col < MAX_COL; col++){
//			printf("%c",theMap[row][col]);
//		}
//		printf("\n");
//	
//	}
//	printf("-----------------\n");
//}
//void updateShowMap(char showMap[MAX_ROW][MAX_COL],
//			char mineMap[MAX_ROW][MAX_COL],int row,int col){
//	int count = 0;
//	for (int r = row - 1; r <= row + 1; r++){
//		for (int c = col - 1; c < col + 1; c++){
//			if (r < 0 || r >= MAX_ROW || c < 0 || c >= MAX_COL){
//				continue;
//			}
//			if (mineMap[r][c] == '1'){
//				count++;
//			}
//		}
//	}
//	showMap[row][col] = count + '0';
//}
//void game(){
//	char showMap[MAX_ROW][MAX_COL] = { 0 };
//	char mineMap[MAX_ROW][MAX_COL] = { 0 };
//	init(showMap, mineMap);
//	int openedBlockCount = 0;
//	printMap(mineMap);
//	while (1){
//		printMap(showMap);
//		int row = 0;
//		int col = 0;
//		printf("please enter your locate(row,col):\n");
//		scanf("%d %d", &row, &col);
//		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL){
//			printf("default!\n");
//			continue;
//		}
//		if (showMap[row][col] != '*'){
//			printf("opened!\n");
//			continue;
//		}
//		if (mineMap[row][col] == '1'){
//			printf("game over!\n");
//			printMap(mineMap);
//			break;
//		}
//		updateShowMap(showMap, mineMap, row, col);
//		openedBlockCount++;
//		if (openedBlockCount == MAX_ROW*MAX_COL - DEFAULT_MINE_COUNT){
//			printf("you Win!!");
//			printMap(mineMap);
//			break;
//		}
//	}
//}
//int main(){
//	while (1){
//		int choice = menu();
//		if (choice == 1){
//			game();
//		}
//		else if (choice==0){
//			printf("Good Bye!");
//			break;
//		}
//		else{
//			printf("�����������,����������\n");
//		}
//	}
//	system("pause");
//	return 0;
//}

void func1(int a[10]){}//�βξ�������û������
void func2(int a[]){}//���ֿ���ʡ��
void func3(int* arr){}//������ʶת��ָ��
void func4(int* arr[]){}

void func5(int arr[3][4] ){}
//void func6(int arr[][]){}  //�ڶ�ά������,ֻ�е�һ������ʡ��,�ڶ�������

//int test(int num){
//	printf("num=%d\n", num);
//	return 0;
//}
//
//int mul(int a, int b){
//	return a*b;
//}
//int div(int a,int b){
//	return a / b;
//}

void bubblesort(int arr[],int size,int asc){
	for (int bound = 0; bound < size; bound++){
		for (int cur = size - 1; cur>bound; cur--){
			if (arr[cur - 1] < arr[cur]){
				int temp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = temp;
			}
		}
	}
}




int main(){

	//printf("%p\n",test);
	/*int arr[10] = { 0 };
	int* arr2[10] = { 0 };
	*/
	/*func1(arr);
	func2(arr);
	func3(arr);*/
	//func4(arr);  ��Ӽ���ͬ:���Ͳ�ƥ��

	//int* arr[]==int ** arr//������һ������ָ��

	//func1(arr2);
	//func4(arr2);  //ֻҪ��������ͬ,������г���
	/*int arr[3][4] = { 0 };

	func5(arr);
	func6(arr);*/
	int arr[4] = { 9, 5, 7, 1 };
	bubblesort(arr, 4,1);			//�������������,����ֻ��Ҫ�ı䲿��,��������һ��ѡ���Ե����,
	for (int i = 0; i < 4; i++){	//�Ϳ�ֱ�Ӷ������н���������������������ѡ��,�����ٸı����
		printf("%d\n",arr[i]);		//�ڲ��ķ��ŵı仯,����
	}


	system("pause");
	return 0;
}