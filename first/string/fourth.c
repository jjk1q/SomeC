#include <stdio.h>
#include <string.h>

int myStrLen(char *str);

int main() {

	char str[100];
	printf("Text: ");
	scanf("%s", str);
	printf("%d", myStrLen(str));
}

int myStrLen(char *str){

	int length = 0;
	while(str[length] != '\0'){ length++;}

	return length;
}



