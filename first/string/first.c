#include <stdio.h>
#include <string.h>


int isPalindrom(char *str);
int main() {

	char str[100];
	printf("Text: ");
	scanf("%s", str);
	if(isPalindrom(str) == 0){
		printf("Is palindrom");
	}
	else{
		printf("not palindrom");
	}
	
}

int isPalindrom(char *str){
	
	int length = strlen(str);
	char str1[length + 1];
	
	for(int i = length - 1, count = 0; i >= 0; i--, count++){
		str1[count] = str[i];
		printf("%d", i);
	}
	str1[length] = '\0';
	printf("1.%s, 2.%s", str, str1);
	return strcmp(str1, str);
}