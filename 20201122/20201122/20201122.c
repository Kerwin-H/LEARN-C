#include <stdio.h>
#include <stdlib.h>

//====冒泡排序
void bubbleSort(int arr[], int size, int asc) {  //一个基础的冒泡排序
	for (int bound = 0; bound < size; bound++) {	//这个bound为边界点,让整个在这一范围内实现
		for (int cur = size - 1; cur > bound; cur--) {
			if (asc == 1) {
				if (arr[cur - 1] > arr[cur]) {	//如果不符合,则交换这两个数
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


typedef int(*Cmp)(int a, int b);    //结构体
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