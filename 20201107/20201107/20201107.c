//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
#define _CRT_SECURE_NO_WARNINGS    //�򵥵��߼���Ŀ
#include<stdio.h>
#include<stdlib.h>
int main(){
	int emp = 0;
	int mon = 0;
	int num = 0;
	scanf("%d",&mon);
	if (mon <= 0){
		num = 0;
	}
	else{
		num = mon * 2 - 1;
	}
	printf("num=%d \n",num);
	system("pause");
	return 0;
}