//
//������   ��9    �������
//
//
//
//��������     ���ֲ��ҷ�
//
//
#include<stdio.h>
#include<stdlib.h>
//int main(){
//	int i=0;
//	int count=0;
//	for (i = 101; i <= 200; i++){
//		int j = 0;
//		for (j = 2; j < i; j++)
//		if (i%j == 0){
//			break;
//		}
//		if (i == j){
//			count++;
//			printf("%d\t",i);
//		
//		}
//	}
//	printf("\tcount=%d\n",count);
//	system("pause");
//	return 0;
//}
//
//
//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//int main(){
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 101; i++){
//		if (i % 10 == 9)
//			count++;
//
//		if (i / 10 == 9)
//			count++;
//	}
//		printf("%d\n", count);
//		system("pause");
//		return 0;
//	}

//
//
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//
//int main(){
//	int i = 0;
//	double j = 0.0;
//	int k = 1;
//	for (i = 1; i <= 100; i++){
//	
//		j += k*1.0 / i;
//		k = -k;
//	
//	}
//		printf("%lf\n", j);
//
//	system("pause");
//	return 0;
//}
//
//
//
//	 ��д���룬��ʾ����ַ��������ƶ������м���
//	 ���籾����һ���ַ��� "Welcome to bit!" 
//	 ��ӡ��ʱ����������: 
//	 �ȴ�ӡ "W############!"
//	 �ٴ�ӡ "We##########t!"
//	 �ٴ�ӡ "Wel########it!"
//	 �ȴ����ַ���
//	char str1[] = "Welcome to bit!";
//	char str2[] = "###############";
//	// �˴�ʹ����������, ����������������Դ�ӡ���ٸ��ַ�
//	int left = 0;
//	int right = strlen(str1) - 1;
//	printf("%s\n", str2);
//	// �������м���, ��ʵ���ͻ��� left �� right �غ�. 
//	while (left <= right) {
//		// ��ӡ֮ǰ, ����һ�� Sleep ����, �ó������е���һ��
//		// Sleep ���������ʾ "����" 
//		// ��������� Windows �϶��е�. 
//		Sleep(500); 
//		// cls Ҳ��һ�� windows ������
//		// cl clear
//		// s screen
//		system("cls");
//		// ��ӡ֮ǰ, ���޸� str2 ������
//		str2[left] = str1[left];
//		str2[right] = str1[right];
//		printf("%s\n", str2);
//		left++;
//		right--;
//	}
//
//
#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int toFind = 9;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	while (left <= right){

		int mid = (left + right) / 2;
		if (toFind < arr[mid]){

			right = mid - 1;
		}
		else if (toFind>arr[mid]){

			left = mid + 1;
		}
		else{

			printf("�ҵ���ӦԪ��,�±�Ϊ:%d\n", mid);
			break;
		}
	}
	if (left > right){

		printf("��Ԫ�ز�����!\n");
		system("pause");
		return 0;
	}
}



