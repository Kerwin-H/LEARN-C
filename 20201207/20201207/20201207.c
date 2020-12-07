#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_ROW 3
#define MAX_COL 3
//====三子棋
//====复以前的代码,加强记忆
void init(char chessBoard[MAX_ROW][MAX_COL]){
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			chessBoard[row][col] = ' ';
		}
	}
}
void printChessBoard(char chessBoard[MAX_ROW][MAX_COL]){
	for (int row = 0; row < MAX_ROW;row++){
		for (int col = 0; col < MAX_COL;col++){
			printf("%c",chessBoard[row][col]);
		}
		printf("\n");
	}
	printf("----------\n");
	for (int row = 0; row < MAX_ROW; row++){
		printf("|%c|%c|%c|\n",chessBoard[row][0],
				chessBoard[row][1],chessBoard[row][2]);
		printf("----------\n");
	}
}
void playerMove(char chessBoard[MAX_ROW][MAX_COL]){
	while (1){
		printf("请玩家输入一个坐标(row col):");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL){
			printf("您输入的坐标不在合法范围内[0,2]内");
			continue;
		}
		if (chessBoard[row][col] != ' '){
			printf("您输入的坐标已经有棋子了!\n");
			continue;
		}
		chessBoard[row][col] = 'x';
		break;
	}
}
void computerMove(char chessBoard[MAX_ROW][MAX_COL]){
	while (1){
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' '){
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
				return 0;
			}
		}
	}
	return 1;
}
char isWin(char chessBoard[MAX_ROW][MAX_COL]){
	for (int row = 0; row < MAX_ROW; row++){
		for (int row = 0; row < MAX_ROW; row++) {
			if (chessBoard[row][0] != ' '
				&& chessBoard[row][0] == chessBoard[row][1]
				&& chessBoard[row][0] == chessBoard[row][2]) {
				return chessBoard[row][0];
			}
		}
		for (int col = 0; col < MAX_COL; col++) {
			if (chessBoard[0][col] != ' '
				&& chessBoard[0][col] == chessBoard[1][col]
				&& chessBoard[0][col] == chessBoard[2][col]) {
				return chessBoard[0][col];
			}
		}
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
		if (isFull(chessBoard)) {
			return 'q';
		}
		return ' ';
	}
}
void game(){
	char chessBoard[MAX_ROW][MAX_COL] = { 0 };
	init(chessBoard);
	char winner = ' ';
	while (1){
		printChessBoard(chessBoard);
		playerMove(chessBoard);
		winner = isWin(chessBoard);
		if (winner != ' '){
			break;
		}
		computerMove(chessBoard);
		winner = isWin(chessBoard);
		if (winner != ' '){
			break;
		}
	}
	printChessBoard(chessBoard);
	if (winner == 'x'){
		printf("you win!\n");
	}
	else if (winner == 'o'){
		printf("you lose\n");
	}
	else {
		printf("equal\n");
	}
}
int menu(){
	printf("==========================\n");
	printf("1.开始游戏\n");
	printf("0.结束游戏\n");
	printf("==========================\n");
	printf("请输入你的选择:\n");
	int choice = 0;
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
		else if (choice == 0){
			printf("see you\n");
			break;
		}
	}
	system("pause");
	return 0;
}