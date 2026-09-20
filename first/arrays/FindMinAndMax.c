#include <stdio.h>

void FindMinAndMax(int *arr, int size, int *min, int *max);

int main() {

	int numbers[5] = {1,2,3,4,5};
	int min = numbers[0];
	int max = numbers[0];
	FindMinAndMax(numbers, sizeof(numbers) / sizeof(numbers[0]), &min, &max);
	printf("min: %d, max: %d\n", min, max);
}

void FindMinAndMax(int *arr, int size, int *min, int *max){

	for(int i = 0; i < size; i++){
		if(arr[i] < *min){
			*min = arr[i];
		}
		if(arr[i] > *max){
			*max = arr[i];
		}
	}
}



