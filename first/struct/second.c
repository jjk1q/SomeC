#include <stdio.h>
#include <string.h>


struct Student{
	char name[100];
	int age;
	float avg;
};

int findMaxIndexInStruct(struct Student students[], int size);

int main() {

	struct Student students[3] = {
    		{"Artem", 17, 3.5},
    		{"Max", 18, 4.0},
    		{"Lisa", 16, 2.9}
	};
	int maxIndex = findMaxIndexInStruct(students,sizeof(students) / sizeof(students[0]));
	printf("%s", students[maxIndex].name);
}

int findMaxIndexInStruct(struct Student students[], int size){

	float max = students[0].avg;
	int maxIndex = 0;
	for(int i = 0; i < size; i++){
		if(students[i].avg > max){
			max = students[i].avg;
			maxIndex = i;
		}
	}
	return maxIndex;
}
