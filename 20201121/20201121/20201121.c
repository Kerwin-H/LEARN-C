//====�������
void yangHui(int n){
	int data[30][30] = { 1 };
	int i;
	int j;
	for (i = 0; i < n; i++){
		data[i][0] = 1;
		for (j = 1; j <= i; j++){
			data[i][j] = data[i - 1][j] + data[i - 1][j - 1];  //�������,�ܼ�,���ǽ�����������
		}												//��Ӹ�ֵ���������
	}
	for (i = 0; i < n; i++){		//��Ϊ�Ƕ�ά������Ҫforѭ��Ƕ�׽������
		for (j = 0; j <= i; j++){
			printf("%d", data[i][j]);
		}
		/*putchar('\n');*/
		printf("\n");
	}
}
int main(){
	int k = 0;
	printf("please enter a number :\n");
	scanf("%d", &k);
	yangHui(k);
	system("pause");
	return 0;
}

//====�򵥵����Ա�����Ŀ
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
int main(){
	int m[4] = { 0 };
	int i = 0;
	for (i = 0; i < 4; i++){
		m[i] = 1;
		if ((m[0] != 1) +			//���������ж��Ե���Ŀ,����ֻ��Ҫ�����Ǳ�����˼�ô���д��������
			(m[2] == 1) +
			(m[3] == 1) +
			(m[3] != 1)){
			break;
		}
		m[i] = 0;
	}
	putchar('A' + i);		//��printf()�ܼ���һ��
	putchar('\n');
	system("pause");
	return 0;
}




void swapArgs(int * a, int * b) {		//������������
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void diveRank(int * p, int n){
	if (n >= 5) {
		if ((p[1] == 2) + (p[0] == 3) == 1 &&  //�������һ����Ŀ������˼·һ��
			(p[1] == 2) + (p[4] == 4) == 1 &&  //��Ҫ���õ������ŵķ���,������ʽ����һ��Ϊ��,��Ϊ��
			(p[2] == 1) + (p[3] == 2) == 1 &&
			(p[2] == 5) + (p[3] == 3) == 1 &&
			(p[4] == 4) + (p[0] == 1) == 1)  {
			for (int i = 0; i < 5; i++){
				printf("%d ", p[i]);			//ѭ����ӡһά�����ֵ
			}
			putchar('\n');
		}
		return;
	}
	int i;
	for (i = n; i < 5; i++) {	//���� -�ص���-����
		swapArgs(p + i, p + n);
		diveRank(p, n + 1);
		swapArgs(p + i, p + n);
	}
}
int main(){
	int p[5] = { 1, 2, 3, 4, 5 };
	diveRank(p, 0);			//��������
	system("pause");
	return 0;
}