
#include <stdio.h>

void BubbleSort(int *arr, int size);
void PrintArray(int *arr, int size);

int main() {
	
	int arr[5] = {5,4,13,5,1};
	int size = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, size);
	PrintArray(arr,size);
}

void BubbleSort(int *arr, int size){
	int swapped = 0;
	for(int i = 0; i < size - 1 && swapped == 0; i++){
		swapped = 1;
		for(int j = 0; j < size - 1 - i; j++){
			if(arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swapped = 0;
			}
		}
	}
}
void PrintArray(int *arr, int size){
	
	for(int i = 0; i < size; i ++){
		printf("%d ", arr[i]);
	}

}