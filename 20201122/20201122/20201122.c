#include <stdio.h>
#include <stdlib.h>

//====ð������
void bubbleSort(int arr[], int size, int asc) {  //һ��������ð������
	for (int bound = 0; bound < size; bound++) {	//���boundΪ�߽��,����������һ��Χ��ʵ��
		for (int cur = size - 1; cur > bound; cur--) {
			if (asc == 1) {
				if (arr[cur - 1] > arr[cur]) {	//���������,�򽻻���������
					int tmp = arr[cur - 1];
					arr[cur - 1] = arr[cur];
					arr[cur] = tmp;
				}
			}
			else if (asc == 0) {
				if (arr[cur - 1] < arr[cur]) {
					int tmp = arr[cur - 1];
					arr[cur - 1] = arr[cur];
					arr[cur] = tmp;
				}
			}
		}
	}
}


typedef int(*Cmp)(int a, int b);    //�ṹ��
void bubbleSort2(int arr[], int size, Cmp cmp) {
	for (int bound = 0; bound < size; bound++) {
		for (int cur = size - 1; cur > bound; cur--) {

			if (cmp(arr[cur - 1], arr[cur]) == 1) {
				int tmp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = tmp;
			}
		}
	}
}


int less(int a, int b) {
	if (a == b) {
		return 0;
	}
	if (a < b) {
		return -1;
	}
	return 1;
}

int main() {

	int arr[] = { 9, 5, 2, 7 };
	bubbleSort2(arr, 4, less);
	for (int i = 0; i < 4; i++) {
		printf("%d\n", arr[i]);
	}


	system("pause");
	return 0;
}