#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//��Ϊ��Ҫ������,���û�нӴ��µ�֪ʶ,ֻ�ǽ���ǰ�Ĵ�������˸�ϰ
//====�ַ����ȽϺ���
int strcmp1(const char* str1, const char* str2){
	assert(str1 != NULL || str2 != NULL);
	while (*str1 != '\0'&&*str2 != '\0'){
		if (*str1 < *str2){
			return -1;
		}
		else if (*str1>*str2){ return 1; }
		else{ 
			str1++; 
			str2++;
		}
	}
	if (*str1 <* str2){
		return -1;
	}
	else if (*str1>*str2){ return 1; }
	else{ return 0; }
}
int main(){
	char arr1[] = "abcde";
	char arr2[] = "adcd";
	char* temp1 = arr1;
	char* temp2 = arr2;
	printf("%d\n",strcmp1(temp1,temp2));
	system("pause");
	return 0;
}