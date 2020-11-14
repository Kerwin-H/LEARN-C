#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//====横向二维数组变为竖向二维数组
int main(){
	int a[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
	int b[3][2];
	int i, j;
	printf("please enter a:\n");
	for (i = 0; i <= 1; i++){
		for (j = 0; j <= 2; j++){
			printf("%5d",a[i][j]);
			b[j][i] = a[i][j];         //核心代码将数组的位置进行调换!
		}
		printf("\n");
	}
	printf("this b is :\n");        //感觉最近老将输出和输入搞混,后面多注意!
	for (i = 0; i <= 2; i++){
		for (j = 0; j <= 1; j++){
			printf("%5d",b[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
//====编写一个简单矩阵,寻找最大数,并输出其行列号
int main(){
	int i, j;
	int col = 0;
	int row = 0;
	int max;
	int a[3][4] = { { 1, 2, 3, 4 },{ 5, 8, 66, 21 },{4, 55, 71, 22} };
	max = a[0][0];
	for (i = 0; i <= 2; i++){
		for (j = 0; j <= 3; j++){
			if (a[i][j] > max){
				max = a[i][j];
				row = i;
				col = j;
			}
			
		}
	}
	printf("this number is %d\nrow=%d  col=%d\n", max, i, j);  //注意不要写如循环内部,否则输出结果过多
	system("pause");
	return 0;
}
//====利用数组打印一个菱形
int main(){
	char diamond[][5] = { { ' ', ' ', '*' }, { ' ', '*', ' ', '*' },
	{ '*', ' ', ' ', ' ', '*' }, { ' ', '*', ' ', '*' }, { ' ', ' ', '*' } };
	int i, j;
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++)
			printf("%c",diamond[i][j]);
		printf("\n");
	}
	system("pause");
	return 0;
}
//P188