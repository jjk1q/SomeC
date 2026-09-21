#include <stdio.h>

int main() {


	int x = 1;
	int y = 2;
	int z = 3;
	
	int *arr[3] = {&x, &y, &z};

	for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){

		printf("%p\n", arr[i]);
		printf("%d\n", *arr[i]);
	}
	
	

}
