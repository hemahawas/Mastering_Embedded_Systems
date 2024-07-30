#include <stdio.h>
#include <string.h>

struct SStudent{
	char name[20];
	unsigned int roll;
	float marks;
};

int main(void) {
	struct SStudent students[10];

	printf("************** EX 4 *************\n\n");

	unsigned int i;

	printf("Enter info of students\n");
	for(i = 0; i < 10; i++){
		printf("\nEnter Student %d\nEnter name: ", i+1);
		fflush(stdin); fflush(stdout);
		gets(students[i].name);

		printf("Enter roll: ");
		fflush(stdin); fflush(stdout);
		scanf("%u", &students[i].roll);

		printf("Enter marks: ");
		fflush(stdin); fflush(stdout);
		scanf("%f", &students[i].marks);
	}


	printf("\nDisplaying Info:\n");
	for(i = 0; i < 10; i++){
	printf("\nStudent %d\n", i+1);
	printf("name: %s\n", students[i].name);
	printf("roll: %u\n", students[i].roll);
	printf("marks: %f\n", students[i].marks);
	}
	return 0;
}
