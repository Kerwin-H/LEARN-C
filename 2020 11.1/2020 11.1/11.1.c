#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX_COL 9
#define MAX_ROW 9
#define DEFAULT_MINE_COUNT 10

//扫雷游戏
//1.创建两个二维数组并进行初始化
//2.打印一张地图
//3.玩家输入要读取的坐标,并对玩家输入的坐标进行校验
//4.判断输入的坐标是否有地雷,如果存在,则直接游戏结束
//5.如果没有,则统计周围雷的数目并将其显示在屏幕上
//6.判断输赢,并检查翻开格子的数量,9*9-10=71;
//7.如果将71个格子全部翻开,则游戏结束,玩家胜利


int menu(){
	printf("\n\n=======================\n");
	printf("1.开始游戏\n");
	printf("2.结束游戏\n");
	printf("=======================\n");
	printf("请输入序号:");
	int choice = 0;
	scanf("%d",&choice);
	return choice;
}
void init(char showMap[MAX_ROW][MAX_COL], char mineMap[MAX_ROW][MAX_COL]){
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			showMap[row][col] = '*';
		}
	}
	for (int row = 0; row <MAX_ROW; row++){
		for (int col = 0; col <MAX_COL; col++){
			mineMap[row][col] = '0';
		}
	}
	int n = DEFAULT_MINE_COUNT;
	while(n > 0){
		int row = rand() % MAX_ROW;
			int col = rand() % MAX_COL;
		if (mineMap[row][col] == '1'){
			continue;
		}
		mineMap[row][col] = '1';
			n--;
	}
}
void printMap(char theMap[MAX_ROW][MAX_COL]){
	printf("1 2 3 4 5 6 7 8 9\n");
	printf("-----------------\n");
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			printf("%c ",theMap[row][col]);
		}
		printf("\n");
	}
	printf("-----------------\n");

}
void updateShowMap(char showMap[MAX_ROW][MAX_COL],
	char mineMap[MAX_ROW][MAX_COL],int row, int col){
	int count = 0;
	for (int r = row - 1; r<= row + 1; r++){
		for (int c = col - 1; c <= col + 1; c++){
			if (r < 0 || r >= MAX_ROW || c < 0 || c >= MAX_COL){
				continue;
			}
			if (mineMap[r][c] == '1'){
				count++;
			}
		}
	}
	showMap[row][col] = count + '0';
}

void game(){

	char showMap[MAX_ROW][MAX_COL] = { 0 };
	char mineMap[MAX_ROW][MAX_COL] = { 0 };
	init(showMap, mineMap);
	int openedBlockCount = 0;
	while (1){
		
		printMap(showMap);
		int row = 0;
		int col = 0;
		printf("请输入你要翻开的坐标(row,col):");
		scanf("%d %d",&row, &col);
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL){
			printf("您输入的坐标有误!\n");
			continue;
		}
		if (showMap[row][col] != '*'){
			printf("当前位置已经被翻开!\n");
			continue;
		}
		if (mineMap[row][col] == '1'){
			printf("Game over!\n");
			printMap(mineMap);
			break;
		}
            updateShowMap( showMap, mineMap, row,  col);
			openedBlockCount++;
			if (openedBlockCount == MAX_ROW*MAX_COL - DEFAULT_MINE_COUNT){
				printf("游戏胜利了!;");
				printMap(mineMap);
				break;
			}
		}
}

int main(){
	while (1){
		int choice = menu();
		if (choice == 1){
			game();
		}else if (choice == 0){
			printf("Goodbye!");
			break;
		}else{
			printf("您的输入有误");
		}
	}
	system("pause");
	return 0;
}


