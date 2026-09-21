#include <stdio.h>
#include <string.h>

int countVowels(char *str);

int main() {

	char str[100];
	printf("Text: ");
	scanf("%s", str);
	int count = countVowels(str);
	printf("%d", count);
}

int countVowels(char *str){

	int count = 0;
	char vowels[] = {"aeiouAEIOU"};
	
	for(int i = 0; i < strlen(str); i++){
		for(int j = 0; j < strlen(vowels); j++){
			if(str[i] == vowels[j]){
				count++;
				break;
			}
		}
	}
	return count;
}