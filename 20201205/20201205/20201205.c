#include<stdio.h>
#include<stdlib.h>
//====交换
void swap1(int x,int y){
	int temp=0;
	temp = x;
	x = y;
	y = temp;
}
void swap2(int *p1,int *p2){
	int tmp=0;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
int main(){
	int n = 1;
	int m = 2;
	swap1(m, n);
	printf("%d %d\n",m,n);
	swap2(&m,&n);
	printf("%d %d\n",m,n);
	system("pause");
	return 0;
}
//====二分查找
int binarySearch(int arr[],int len,int toFind){
	int left = 0;
	int right = len - 1;
	while (left <= right){		//注意这里是小于等于号,容易出错误
		int mid = (left + right) / 2;
		if (arr[mid] < toFind){
			left = mid + 1;
		}
		else if (arr[mid]>toFind){
			right = mid - 1;
		}
		else{
			return mid;
		}
	}
	return -1;
}
int main(){
	int arr[] = {5,8,4,9,10};
	int len = sizeof(arr) / sizeof(arr[0]);
	int ret=binarySearch(arr,len, 10);
	printf("ret=%d\n",ret);
	system("pause");
	return 0;
}
//====递归的利用
int factor(int n){
	if (n == 1){
		return 1;
	}
	return n*factor( n - 1);
}
void printNum(int num){
	if (num > 9){
		printNum(num / 10);
	}
	printf("%d ",num%10);
}
int main(){
	//int n = 5;
	//int ret = factor(n);
	//printf("%d\n",ret);
	int num = 1234;
	printNum(num);


	system("pause");
	return 0;
}