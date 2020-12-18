#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
char* my_strstr(const char* dest, const char* src){
	char* start = (char*)dest;
	char* substart = (char*)src;
	char* cp = (char*)dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*cp){
		start = cp;
		while (*start != '\0'&&*substart != '\0'&&*start == *substart){
			start++;
			substart++;
		}
		if (*substart == '\0'){
			return cp;
		}
		substart = (char*)src;
		cp++;
	}
	return NULL;
}
int main(){
	char arr[20] = "aabbccde";
	char arr1[20] = "abbc";
	printf("%s\n",my_strstr(arr,arr1));
	system("pause");
	return 0;
}