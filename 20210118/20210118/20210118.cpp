#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

int main(){

	//有转义字符的意思,多用/
	/*char name[] = "D:\program2\qq\Bin";
	char name[] = "D:/program2/qq/Bin";
	printf("%s\n",name);
*/

	//FILE是已经定义的结构体
	//"文件指针","句柄"(handler)
	//文件打开可能会失败
	 
	FILE* f=fopen("C:/Users/64801/Documents/temp/123.txt","w");
	if (f == NULL){
		//printf("文件打开失败! errno=%d,%s\n",errno,strerror(errno));
		perror("文件打开失败!");
		system("pause");
		return 1;
	}
	printf("文件打开成功\n");

	//磁盘中的数据读取到内存中
	//char buf[1024] = { 0 };
	////第二三个参数相乘是总的读取到的字节数
	////返回值表示读取的元素个数
	////如果实际读取的元素个数少一点,则文件读完了
	//int n = fread(buf, 1, 1024, f);
	//printf("%s\n",buf);

	////fwrite写入文件
	//char buf[1024] = "6416546haha";
	//int n=fwrite(buf,1,strlen(buf),f);
	//if (n < strlen(buf)){
	//	perror("fwrite");
	//}


	//用fprintf进行格式化写入
	int num = 10;
	//fprintf(f, "num=%d", num);

	//与printf等价'
	//使用fscanf(stdin,"")和scanf等价.
	//fprintf(stdout,"num=%d",num);

	//sprintf  格式化结果写入到字符串中
	//sscanf	从格式化字符串中解析结果

	/*char buf[1024] = { 0 };
	sprintf(buf,"num =%d",num);
	printf("%s\n",buf);*/


	//字符串和整数的转换
	/*char buf[1024] = { 0 };
	sprintf(buf,"%d",num);
	printf("%c\n", buf[0]);
	printf("%c\n", buf[1]);
	printf("%c\n", buf[2]);*/

	//atoi
	//itoa


	//关闭文件
	//程序使用完毕一定要关闭文件!!!!
	//文件资源泄露/句柄泄露
	fclose(f);


	system("pause");
	return 0;
}