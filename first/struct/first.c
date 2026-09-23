
#include <stdio.h>
#include <string.h>

struct Student {
	char name[50];
	int age;
	float avg;
};

void printStudent(struct Student s);

int main() {

	struct Student students[2];
	int size = sizeof(students) / sizeof(students[0]);
	for(int i = 0; i < size; i++){
		printf("Name: ");
		scanf("%s", students[i].name);
		printf("Age: ");
		scanf("%d", &students[i].age);
		printf("Avg: ");
		scanf("%f", &students[i].avg);
	}
	printStudent(students[0]);

	
}
void printStudent(struct Student s){
	printf("%s", s.name);
	printf("%d", s.age);
	printf("%f", s.avg);
	
}