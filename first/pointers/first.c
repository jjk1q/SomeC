#include <stdio.h>


void addFive(int *x);

int main() {

	int x = 1;
	int y = 2;
	int *px = &x;
	int *py = &y;
	addFive(px);
	addFive(py);
	printf("%d", x);
	printf("%d", y);

	
}

void addFive(int *x){

	*x += 5;
}


