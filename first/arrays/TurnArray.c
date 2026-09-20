#include <stdio.h>

void TurnArray(int *arr, int size);
void PrintArray(int *arr, int size);

int main() {

	int numbers[5] = {1,2,3,4,5};
	TurnArray(numbers, sizeof(numbers) / sizeof(numbers[0]));
	PrintArray(numbers, sizeof(numbers) / sizeof(numbers[0]));

	
	
}

void TurnArray(int *arr, int size){

	for(int i = 0; i < size / 2; i ++){
		int temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;
	}
}

void PrintArray(int *arr, int size){

	for(int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
}
