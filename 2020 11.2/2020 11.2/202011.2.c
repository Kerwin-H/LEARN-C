//
//
//
//
//
//
////������������λ��
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//void Swap(int *pa, int *pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main(){
//	int i = 6;
//	int j = 9;     //����������
//	int *p1 = &i;
//	int *p2 = &j;
//	printf("����ǰ:%d %d\n", *p1, *p2);
//	Swap(p1, p2);
//	printf("������:%d %d\n", *p1, *p2);
//
//	system("pause");
//	return 0;
//}
//
//
//
////��ӡ��ָ���ļ��˼��ĳ˷��ھ���
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//
//#define Max_N k
//#define Max_M k
//
//int main()
//{
//	int k = 0;
//	printf("����֪�����˼��ĳ˷��ھ���:\n");
//	printf("������:");
//	scanf("%d", &k);
//	k = k + 1;
//	for (int i = 1; i < Max_N; i++) {
//		for (int j = 1; j < Max_M; j++) {
//			printf(" %d * %d = %d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//
////�ֱ��ӡһ������ÿһ����
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//void print(unsigned int n)
//{
//	if (n>9)
//		print(n / 10);
//	printf("%d ", n % 10);
//}
//int main(){
//	int i = 0;
//	printf("������һ����:\n");
//	scanf("%d", &i);
//	print(i);
//	system("pause");
//	return 0;
//}
//
//
////===================================================================================
//
////ѭ���׳�
//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>
//#include<stdlib.h>
//
//
//int main()
//{
//	int sum = 1;
//	int n;
//	printf("please enter number:\n");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		sum = sum*i;
//	}
//	printf("SUM=%d", sum);
//	system("pause");
//	return 0;
//}
//
//
//
//


//�ݹ�׳�
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int fun(int n)
{
	if (n == 1 || n == 0) 
		return 1;
	return n*fun(n - 1);
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", fun(n));
	system("pause");
	return 0;
}