////======================================1
//#define _CRT_SECURE_NO_WARNINGS      //����������,�ж����ǵĶ�������λ�м�����һ��
//#include <stdio.h>
//#include <stdlib.h>
//int countOneBit(int num) {
//	
//	int count = 0;
//	for (int i = 0; i < 32; i++) {
//		if (num & (1 << i)) {
//			count++;
//		}
//	}
//	return count;
//}
//int main(){
//	int m = 0;
//	int n = 0;
//	int num = 0;
//	printf("������������:\n");
//	scanf("%d %d",&m,&n);
//	num = m^n;
//	countOneBit(num);
//	printf("%d",countOneBit(num));
//	system("pause");
//	return 0;
//}
//
//
//
////=========================================2
//#define _CRT_SECURE_NO_WARNINGS   //����һ����,����ż��ӡ����������λ
//#include <stdio.h>
//#include <stdlib.h>
//
//void Printbit(int num){
//	printf("ż��λ:");
//	for (int i = 31; i >= 1; i -= 2)    //ż�����εݼ�
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	printf("����λ:");
//	for (int i = 30; i >= 0; i -= 2)     //����
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//}
//int main(){
//	int num = 0;
//	printf("please enter a number:\n");
//	scanf("%d", &num);
//	Printbit(num);
//	system("pause");
//	return 0;
//}


//===============================================3
#define _CRT_SECURE_NO_WARNINGS    //����һ����,��ӡ�����Ķ����Ʊ�ʾ,�������ж��ٸ�1
#include <stdio.h>
#include <stdlib.h>

int stat(int num){
	int count = 0;
		for (int i = 0; i < 32; i++) {
			if (num & (1 << i)) {
				count++;
			}
		}
		printf("һ����%d��\n",count);
		for (int i = 31; i >= 0; i -= 1)    
				{
					printf("%d  ", (num >> i) & 1);
				}
		return count;
	}
int main(){
	int count = 0;
	int m = 0;
	printf("please enter number:\n");
	scanf("%d",&m);
	stat(m);
	system("pause");
	return 0;
}







//

//// дһ������, ����������ֽϴ��ֵ��+100 �Ľ��. 
//int maxNum(int x, int y) {
//	//if (x > y) {
//	//	return x;
//	//}
//	//return y;
//	return x > y ? x : y + 100;
//}
//
//int main() {
//	//int num = 11;
//	//
//	//int ret = countOneBit(num);
//	//printf("%d\n", ret);
//
//	//const int a = 10;
//	//a = 20;
//
//
//
//	/
//
//
//	
//	//int arr[10] = { 0 };
//	// A. 4
//	// B. 40
//	// C. δ������Ϊ
//	// ע��, �˴��Ľ�� 4 , ������δ������Ϊ. 
//	// sizeof ��һ������������, һ����Ҫ��������: ��������ֵ. 
//	//printf("%d\n", sizeof(arr[10]));
//
//	//int num = 0;
//	// ! �߼�ȡ��, �ǰѲ�����, ���� "��, ��" ������. =====================!!
//	// C ������, ��0 ����ʾ��, 0 ��ʾ��. 
//	// ��ʱ  ! ���������ֵ�Ļ����Ͻ���ȡ��. 
//	//printf("%x\n", !num);
//	//printf("%x\n", ~num);                          //��λȡ��
//
//	//printf("%d\n", 1 > 2);
//
//	//int a = 1;	// 01
//	//int b = 2;	// 10
//	//printf("%d\n", a & b);
//	//printf("%d\n", a and b);
//
//	//���� i = 10;
//	//���(i < 10) {
//	//	printf("wocao\n");
//	//} ����{
//	//	printf("hehe\n");
//	//}
//
//	//int i = 0, a = 0, b = 2, c = 3, d = 4;
//	// a++ ����ֵ�� 0, ���ն�·��ֵ�Ĺ���, ��ʱ, b, c, d �ı��ʽ����������ֵ��. 
//	//i = a++ && ++b && c++ && d++;
//	//i = a++||++b||c++ || d++;
//	//printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//
//	//int arr[3][4] = {
//	//	(1, 2), 
//	//	(3, 4)
//	//};
//
//	// ���Ǻ�������
//	//print(); 
//
//	// ���������ʵ��ȡ���˺���ָ��
//	//print;
//
//	//int a = 10;
//	//float b = 1.5;
//	////b = a;
//	//a = b;
//	//printf("%d\n", a);
//
//	// 2 ���ֽ�, -32768 -> +32767 (Ҫ��ס)    �޷��� 0->65535
//	//short a = 10;
//	// 4 ���ֽ�, -21�� -> +21��  �޷��� 0-> 42��9ǧ��
//	//int b = 100000;
//
//	//a = b;
//	//printf("%d\n", a);
//
//	int i = 1;
//	int ret = ++i + ++i + ++i;
//	printf("ret = %d\n", ret);
//
//	system("pause");
//	return 0;
//}