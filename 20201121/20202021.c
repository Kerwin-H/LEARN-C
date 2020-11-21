//====杨辉三角
void yangHui(int n){
	int data[30][30] = { 1 };
	int i ;
	int j ;
	for (i = 0; i < n; i++){
		data[i][0] = 1;
		for (j = 1; j <= i; j++){
			data[i][j] = data[i - 1][j] + data[i - 1][j - 1];  //核心语句,很简单,就是将上面两个数
		}												//相加赋值给下面的数
	}
	for (i = 0; i < n; i++){		//因为是二维数组需要for循环嵌套进行输出
		for (j = 0; j <= i; j++){
			printf("%d",data[i][j]);
		}
		/*putchar('\n');*/
		printf("\n");
	}
}
int main(){
	int k = 0;
	printf("please enter a number :\n");
	scanf("%d",&k);
	yangHui(k);
	system("pause");
	return 0;
}

//====简单的人脑遍历题目
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
int main(){
	int m[4] = { 0 };
	int i=0;
	for (i = 0; i < 4; i++){
		m[i] = 1;
		if ((m[0] != 1) +			//对于这种判断性的题目,我们只需要将她们表达的意思用代码写出来即可
			(m[2] == 1) +
			(m[3] == 1) +
			(m[3] != 1)){
			break;
		}
		m[i] = 0;
	}
	putchar('A' + i);		//比printf()能简易一点
	putchar('\n');
	system("pause");
	return 0;
}




void swapArgs(int * a, int * b) {		//基础交换函数
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void diveRank(int * p, int n){
	if (n >= 5) {
		if ((p[1] == 2) + (p[0] == 3) == 1 &&  //这里和上一个题目的人脑思路一致
			(p[1] == 2) + (p[4] == 4) == 1 &&  //主要运用的是与门的方法,当两个式子有一个为真,则为真
			(p[2] == 1) + (p[3] == 2) == 1 && 
			(p[2] == 5) + (p[3] == 3) == 1 && 
			(p[4] == 4) + (p[0] == 1) == 1)  {
			for (int i = 0; i < 5; i++){
				printf("%d ", p[i]);			//循环打印一维数组的值
			}
			putchar('\n');
		}
		return;
	}
	int i;
	for (i = n; i < 5; i++) {	//交换 -重调用-交换
		swapArgs(p + i, p + n);
		diveRank(p, n + 1);
		swapArgs(p + i, p + n);
	}
}
int main(){
	int p[5] = { 1, 2, 3, 4, 5 }; 
	diveRank(p, 0);			//函数调用
	system("pause");
	return 0;
}