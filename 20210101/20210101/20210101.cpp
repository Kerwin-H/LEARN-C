#include<stdio.h>
#include<stdlib.h>
//====Æ½¾ù¼ÆËã
void average(float *p, int n){
	float *p_end;
	float sum = 0, aver;
	p_end = p + n - 1;
	for (; p <= p_end; p++)
		sum = sum + (*p);
	aver = sum / n;
	printf("average=%5.2f\n",aver);
}

void search(float (*p)[4],int n){
	int i;
	printf("the score of No.%d are:\n",n);
	for (i = 0; i < 4; i++)
		printf("%5.2f",*(*(p+n)+i));
	printf("\n");
}

int main(){
	float score[3][4] = { {64,85,97,85}, {71,57,94,86}, {82,83,75,54} };
	average(*score, 12);
	search(score,2);
	system("pause");
	return 0;
}