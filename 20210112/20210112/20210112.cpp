#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

size_t myStrlen(const char* str){
	
	if (str == NULL){    //合法性校验,保持代码的完整性,避免出现漏洞
		return 0;
	}

	assert(str == NULL);  //相等,比较严重再使用

	size_t len = 0;
	while (str[len]!='\0'){
		len++;
	}
	return len;
}


char* myStrcpy(char* dest, const char* src){
	if (dest == NULL || src == NULL){
		return NULL;
	}
	char *ret = dest;  //备份原始值 
	while (*src != '\0'){
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return dest; 
}


char* myStrcat(char* dest,const char* src){
	if (dest == NULL || src == NULL){
		return dest;
	}

	char* p = dest;
	while (*p != '\0'){
		p++;
	}
	//核心,依次每个字符复制过去
	while (*src != '\0'){
		*p = *src;
		p++;
		src++;
	}

	*p = '\0';
	return dest;
}
//========================================================================
int myStrcmp(const char* str1, const char* str2) {
	// 一定要记得, 先校验参数的合法性. 
	// 此处发现参数非法的时候, 并不容易找到一个返回值作为非法结果. 
	// 在 C 中没啥太好的办法. 未来 C++ 和 Java 里有一手操作 抛出异常
	assert(str1 != NULL && str2 != NULL);

	while (*str1 != '\0' && *str2 != '\0') {
		if (*str1 < *str2) {
			return -1;
		}
		else if (*str1 > *str2) {
			return 1;
		}
		else {
			// 此时打成平手了, 需要比较下一个字符
			str1++;
			str2++;
		}
	}
	// 如果上面的循环已经结束了, 还没有触发 return , 可能就是这种情况:
	// hehe  和  hehehe 的比较
	// 接下来就需要看谁短谁就小. 直接看当前位置的 str1 和 str2 指向的内容大小就行了. 
	// 这俩指针中至少一个是 \0 , 另一个就更大. 
	// 如果两个都是 \0, 就是相等
	if (*str1 < *str2) {
		return -1;
	}
	else if (*str1 > *str2) {
		return 1;
	}
	else {
		return 0;
	}
	//return *str1 - *str2;
}

const char* myStrstr(const char* str1, const char* str2) {
	if (str1 == NULL || str2 == NULL) {
		return NULL;
	}

	// blackPtr 确定了当前这趟比较的起始位置. 
	const char* blackPtr = str1;

	while (*blackPtr != '\0') {
		// 就要根据当前的起始位置, 进一步的比较 str1 的内容和 str2 的内容
		// 这里面就需要两个辅助的指针, 一个是 redPtr, 一个是 subPtr
		const char* redPtr = blackPtr;
		const char* subPtr = str2;

		// 这个循环就是以当前的 blackPtr 为起点, 进行一趟比较
		while (*redPtr != '\0' && *subPtr != '\0'
			&& *redPtr == *subPtr) {
			redPtr++;
			subPtr++;
		}
		// 当循环结束之后, 就有三种可能: 
		// 1) 如果是 *redPtr != '\0' 条件不成立, 此时, 就是不匹配
		//    这个时候就应该 blackPtr++ 再找下个起始位置. 
		// 2) 如果是 *subPtr != '\0' 条件不成立, 此时是找到匹配的结果了
		//    就应该返回 blackPtr
		// 3) 如果是 *redPtr == *subPtr 不成立, 此时也应该是 blackPtr++
		if (*subPtr == '\0') {
			return blackPtr;
		}
		blackPtr++;
	}
	return NULL;
}
//===========================================================================
int main(){
	//size_t =unsigned long 

	unsigned int a = 10;
	unsigned int b = 20;
	unsigned int c = a-b;  //两个无符号相减会出现溢出
	printf("%u\n",c);  //%u

	char arr[] = "lisi";
	printf("%d\n", myStrlen(arr));

	char arr1[] = "hehe";
	strcpy(arr1, "sidd");
	printf("%s\n",arr1);

	char name1[1024] = "";
	char name2[1024] = "";
	strcpy(name1, "zhangsan");
	strcpy(name2, "zhangsan");
	//    上下等价,更简易使用
	strcpy(name1, strcpy(name2, "zhangsan"));

	char name[1024] = "zhang ";
	strcat(name, "san");
	printf("%s\n",name);



	system("pause");
	return 0;
}