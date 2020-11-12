#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//====素数100-200
int main(){
	int n, k, i, m = 0;
	for (n = 101; n < 201; n = n + 2){
		k = sqrt(n);
		for (i = 2; i <= k;i++)
		if (n%i == 0)
			break;
		if (i >= k + 1){
			printf("%d",n);
			m = m + 1;
		}
		if (m % 10 == 0)
			printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}
//====一个球,每次反弹一半,从100米扔下,求运行路程
int main(){	
	float sn = 100.0, hn = sn / 2;
	int n;
	for (n = 2; n <= 10; n++)
	{
		sn = sn + 2 * hn;
		hn = hn / 2; 
	}
	printf("the total of road is %f\n", sn);
	printf("the tenth is %f meter\n", hn);
	system("pause");
	return 0;
}
//====变更字符
int main(){
	char c;
	while ((c = getchar()) != '\n'){
		if ((c >= 'A'&&c <= 'Z') || (c >= 'a'&&c <= 'z')){
			c = c + 4;
			if (c >= 'Z'&&c <= 'Z' + 4 || c > 'z')
				c = c - 26;
		}
		printf("%c",c);
	}
	printf("\n");
	system("pause");
	return 0;
}
//P161