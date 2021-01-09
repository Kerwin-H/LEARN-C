#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
////====输入一句话,看存在几个单词
//int main(){
//	char string[81];
//	int i;
//	int num = 0;
//	int word = 0;
//	char c;
//	gets(string);
//	for (i = 0; (c = string[i] != '\0'); i++)
//	if (c == ' ')word = 0;
//	else if (word == 0){
//		word = 1;
//		num++;
//	}
//	printf("there are %d words in this line.\n", num);
//	system("pause");
//	return 0;
//}
//////====输入3*3矩阵,求对角线元素和
//int main(){
//	int arr[][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	int i = 0;
//	int k = 0;
//	int sum = 0;
//	for (i = 0; i < 3; i++)
//		sum = sum + arr[i][i];
//	printf("%d \n", sum);
//	system("pause");
//	return 0;
//}
////====排序
//int main(){
//	int i, j, t, a[10];
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	for (j = 0; j < 9; j++)
//	for (i = 0; i < 9 - j; i++)
//	if (a[i]>a[i + 1])
//	{
//		t = a[i]; a[i] = a[i + 1]; a[i + 1] = t;  //交换
//	}
//	for (i = 0; i < 10; i++)
//		printf("%d ", a[i]);
//	system("pause");
//	return 0;
//}
