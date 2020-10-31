//
//素数求法   加9    分数相加
//
//
//
//门帘问题     二分查找法
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
//编写程序数一下 1到 100 的所有整数中出现多少个数字9
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
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
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
//	 编写代码，演示多个字符从两端移动，向中间汇聚
//	 例如本来有一个字符串 "Welcome to bit!" 
//	 打印的时候这样来搞: 
//	 先打印 "W############!"
//	 再打印 "We##########t!"
//	 再打印 "Wel########it!"
//	 先创建字符串
//	char str1[] = "Welcome to bit!";
//	char str2[] = "###############";
//	// 此处使用两个变量, 来控制两个方向各自打印多少个字符
//	int left = 0;
//	int right = strlen(str1) - 1;
//	printf("%s\n", str2);
//	// 两侧向中间汇聚, 其实最后就会让 left 和 right 重合. 
//	while (left <= right) {
//		// 打印之前, 加上一个 Sleep 操作, 让程序运行的慢一点
//		// Sleep 这个函数表示 "休眠" 
//		// 这个函数是 Windows 上独有的. 
//		Sleep(500); 
//		// cls 也是一个 windows 的命令
//		// cl clear
//		// s screen
//		system("cls");
//		// 打印之前, 先修改 str2 的内容
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

			printf("找到对应元素,下标为:%d\n", mid);
			break;
		}
	}
	if (left > right){

		printf("该元素不存在!\n");
		system("pause");
		return 0;
	}
}



