#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_ROW 3
#define MAX_COL 3

void init(char chessBoard[MAX_ROW][MAX_COL]){
	//�Ƚ�������forѭ����ʾ�����е�����,��������Ϊ��
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			chessBoard[row][col] = ' ';
		}
	}

}
void printChessBoard(char chessBoard[MAX_ROW][MAX_COL]){
	//��������for��佫��ʼ���õ����̱�ʾ����ʾ����
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			//�ַ��͵�������Ҫ��%c�����д�ӡ
			printf("%c", chessBoard[row][col]);
		}
		printf("\n");
	}
	//��Ϊȫ�ǿո�����ʾ���޷���ʾ,����Ҫ�߿�����������,����:
	printf("--------------\n");
	for (int row = 0; row < MAX_ROW; row++){
		printf("| %c | %c | %c |\n ", chessBoard[row][0],
			chessBoard[row][1], chessBoard[row][2]);
		printf("--------------\n");
	}
}

//���������Ҫ�����������������Ϸ
void playerMove(char chessBoard[MAX_ROW][MAX_COL]){
	while (1){
		printf("���������һ������(row col):");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		//������֤һ���������Ĵ����Ƿ�Խ��
		if (row < 0 || row >= MAX_ROW
			|| col < 0 || col >= MAX_COL){
			//�����ַǷ�ʱ,Ӧ������ҽ�����������
			printf("����������겻�ٺϷ���Χ[0,2]��");
			continue;
		}
		//������λ���Ƿ�����
		if (chessBoard[row][col] != ' '){
			printf("�������λ���Ѿ�������!\n");
			continue;
		}
		//��������
		chessBoard[row][col] = 'x';
		break;
	}
}
void computerMove(char chessBoard[MAX_ROW][MAX_COL]){
	while (1){
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' '){
			//��ȷ���Ƿ�����
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
				//����ҵ�Ū��˵��û��
				return 0;
			}
		}
	}
	return 1;
}
char isWin(char chessBoard[MAX_ROW][MAX_COL]) {
	// �ж����е���
	for (int row = 0; row < MAX_ROW; row++) {
		if (chessBoard[row][0] != ' '
			&& chessBoard[row][0] == chessBoard[row][1]
			&& chessBoard[row][0] == chessBoard[row][2]) {
			return chessBoard[row][0];
		}
	}
	// �ж����е���
	for (int col = 0; col < MAX_COL; col++) {
		if (chessBoard[0][col] != ' '
			&& chessBoard[0][col] == chessBoard[1][col]
			&& chessBoard[0][col] == chessBoard[2][col]) {
			return chessBoard[0][col];
		}
	}
	// �ж������Խ���
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
	// �ж��Ƿ����
	// ���������Ƿ���ʣ��ռ�
	if (isFull(chessBoard)) {
		return 'q';
	}
	return ' ';
}

	// һ����Ϸ�Ļ�������
	// 1. �������̲���ʼ��
	// 2. ��ӡ����
	// 3. �������(���������������ķ�ʽ������)
	// 4. �ж�ʤ����ϵ
	// 5. ��������(���λ������) 
	// 6. �ж�ʤ����ϵ
	void game(){
		//1.����һ������,������������̳�ʼ��
		char chessBoard[MAX_ROW][MAX_COL] = { 0 };
		init(chessBoard);
		char winner = ' ';
		while (1){
			//2.��ӡ���������
			printChessBoard(chessBoard);
			//3.��ҽ�������
			playerMove(chessBoard);
			//4.�ж�ʤ��
			winner = isWin(chessBoard);
			if (winner != ' '){
				break;
			}
			//5.��������,�����������
			computerMove(chessBoard);
			//6.�ж�ʤ��
			winner = isWin(chessBoard);
			if (winner != ' '){
				break;
			}
		}
		printChessBoard(chessBoard);
		if (winner == 'x'){
			printf("��ϲ��Ӯ��!\n");
		}
		else if (winner == 'o'){
			printf("���ź�,���������˶��²���!\n");
		}
		else{
			printf("���ź�,ƽ��!\n");
		}
	}


	int menu(){
		printf("=========================\n");
		printf("1.��ʼ��Ϸ\n");
		printf("0.������Ϸ\n");
		printf("=========================\n");
		printf("���������ѡ��:");
		int choice = 0;
		scanf("%d", &choice);
		return choice;
	}
	int main(){
		//����ʹ��һ�������Ĳ˵�������Ϸ�Ŀ�ʼ
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