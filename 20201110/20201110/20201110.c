#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//====��������������,������
int main(){
	printf("please enter three number:\n");
	int i = 0;
	int j = 0;
	int k = 0;
	scanf("%d %d %d",&i,&j,&k);
	if (i >= j){
		if (i >= k){ printf("���Ϊ%d\n",i); }
		else{ printf("���Ϊ%d\n", k); }
	}
	else{	
		if (j >= k){ printf("���Ϊ%d\n", j); }
		else{ printf("���Ϊ%d\n", k); }
	}
	system("pause");
	return 0;
}
//====����һ����,���ƽ����
int main(){                     //�ǵü�ͷ�ļ�
	printf("please enter a number (0<n<1000):\n");
	int  n = 0.0;
	scanf("%d",&n);
	
		double i = 0.0;
		i = sqrt(n);
		printf("%lf", i);
		
	system("pause");
	return 0;
}
//====дһ������,��x���ڲ�ͬ�ķ�Χ��,�����ͬ��ֵ
int main(){
	printf("please enter a number:\n");
	int i = 0;
	scanf("%d",&i);
	if (i < 1){ printf("y=%d\n",i); }
	else if (i >= 10){ printf("y=%d\n",3*i-11); }
	else{ printf("y=%d\n",2*i-1); }
	system("pause");
	return 0;
}
//====����һ��������5λ��������,1.���Ǽ�λ��2.�ֱ�������3.�������
void print(unsigned int n){
	if (n > 9)
		print(n / 10);
		printf("%d  ", n % 10);
}
int main(){
	printf("������һ����:\n");
	int i = 0;
	scanf("%d", &i);
	int n = i;
	while (1){
		
		print(i);//1

		int m = 0;
		while (i != 0){
			m = m * 10 + i % 10;
			i = i / 10;
		}
		printf("%d\n", m);
		break;
	}
	int count = 0;
	while (n != 0){
		n = n / 10;
		++count;
	}
	printf("�������%dλ��\n", count);

	system("pause");
	return 0;
}
//P134-9