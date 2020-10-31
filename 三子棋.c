#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_ROW 3
#define MAX_COL 3

void init(char chessBoard[MAX_ROW][MAX_COL]){
	//先进行两个for循环表示出所有的数组,并将其设为空
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			chessBoard[row][col] = ' ';
		}
	}

}
void printChessBoard(char chessBoard[MAX_ROW][MAX_COL]){
	//运用两个for语句将初始化好的棋盘表示在显示屏上
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			//字符型的数组需要用%c来进行打印
			printf("%c", chessBoard[row][col]);
		}
		printf("\n");
	}
	//因为全是空格在显示上无法显示,故需要边框来进行修饰,如下:
	printf("--------------\n");
	for (int row = 0; row < MAX_ROW; row++){
		printf("| %c | %c | %c |\n ", chessBoard[row][0],
			chessBoard[row][1], chessBoard[row][2]);
		printf("--------------\n");
	}
}

//玩家落子需要进行坐标输入进行游戏
void playerMove(char chessBoard[MAX_ROW][MAX_COL]){
	while (1){
		printf("请玩家输入一个坐标(row col):");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		//必须验证一下玩家输入的代码是否越界
		if (row < 0 || row >= MAX_ROW
			|| col < 0 || col >= MAX_COL){
			//当出现非法时,应该让玩家进行重新输入
			printf("您输入的坐标不再合法范围[0,2]内");
			continue;
		}
		//看落子位置是否有子
		if (chessBoard[row][col] != ' '){
			printf("您输入的位置已经有子了!\n");
			continue;
		}
		//真正落子
		chessBoard[row][col] = 'x';
		break;
	}
}
void computerMove(char chessBoard[MAX_ROW][MAX_COL]){
	while (1){
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' '){
			//先确定是否有子
			continue;
		}
		chessBoard[row][col] = 'o';
		break;
	}
}
int isFull(char chessBoard[MAX_ROW][MAX_COL]){
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			if (chessBoard[row][col] == ' '){
				//如果找到弄个说明没满
				return 0;
			}
		}
	}
	return 1;
}
char isWin(char chessBoard[MAX_ROW][MAX_COL]) {
	// 判定所有的行
	for (int row = 0; row < MAX_ROW; row++) {
		if (chessBoard[row][0] != ' '
			&& chessBoard[row][0] == chessBoard[row][1]
			&& chessBoard[row][0] == chessBoard[row][2]) {
			return chessBoard[row][0];
		}
	}
	// 判定所有的列
	for (int col = 0; col < MAX_COL; col++) {
		if (chessBoard[0][col] != ' '
			&& chessBoard[0][col] == chessBoard[1][col]
			&& chessBoard[0][col] == chessBoard[2][col]) {
			return chessBoard[0][col];
		}
	}
	// 判定两个对角线
	if (chessBoard[0][0] != ' '
		&& chessBoard[0][0] == chessBoard[1][1]
		&& chessBoard[0][0] == chessBoard[2][2]) {
		return chessBoard[0][0];
	}
	if (chessBoard[2][0] != ' '
		&& chessBoard[2][0] == chessBoard[1][1]
		&& chessBoard[2][0] == chessBoard[0][2]) {
		return chessBoard[2][0];
	}
	// 判定是否和棋
	// 看棋盘中是否有剩余空间
	if (isFull(chessBoard)) {
		return 'q';
	}
	return ' ';
}

	// 一局游戏的基本流程
	// 1. 创建棋盘并初始化
	// 2. 打印棋盘
	// 3. 玩家落子(玩家输入行列坐标的方式来落子)
	// 4. 判定胜负关系
	// 5. 电脑落子(随机位置落子) 
	// 6. 判定胜负关系
	void game(){
		//1.创建一个棋盘,并对其进行棋盘初始化
		char chessBoard[MAX_ROW][MAX_COL] = { 0 };
		init(chessBoard);
		char winner = ' ';
		while (1){
			//2.打印出这个棋盘
			printChessBoard(chessBoard);
			//3.玩家进行落子
			playerMove(chessBoard);
			//4.判断胜负
			winner = isWin(chessBoard);
			if (winner != ' '){
				break;
			}
			//5.电脑落子,运用随机落子
			computerMove(chessBoard);
			//6.判断胜负
			winner = isWin(chessBoard);
			if (winner != ' '){
				break;
			}
		}
		printChessBoard(chessBoard);
		if (winner == 'x'){
			printf("恭喜您赢了!\n");
		}
		else if (winner == 'o'){
			printf("很遗憾,您连机器人都下不过!\n");
		}
		else{
			printf("很遗憾,平局!\n");
		}
	}


	int menu(){
		printf("=========================\n");
		printf("1.开始游戏\n");
		printf("0.结束游戏\n");
		printf("=========================\n");
		printf("请输入你的选择:");
		int choice = 0;
		scanf("%d", &choice);
		return choice;
	}
	int main(){
		//首先使用一个交流的菜单进行游戏的开始
		srand((unsigned int)time(0));
		while (1){
			int choice = menu();
			if (choice == 1){
				game();
			}
			else if (choice == 0){
				printf("see you !\n");
				break;
			}
		}
		system("pause");
		return 0;
	}