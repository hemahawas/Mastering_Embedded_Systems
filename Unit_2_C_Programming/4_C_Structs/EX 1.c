#include <stdio.h>
#include <string.h>

struct SStudent{
	char name[20];
	unsigned int roll;
	float marks;
};

int main(void) {
	struct SStudent student;

	printf("************** EX 1 *************\n\n");


	printf("Enter info of students\nEnter name: ");
	fflush(stdin); fflush(stdout);
	gets(student.name);

	printf("\nEnter roll: ");
	fflush(stdin); fflush(stdout);
	scanf("%u", &student.roll);

	printf("\nEnter marks: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &student.marks);

	printf("\nDisplaying Info:\n\n");
	printf("name: %s\n", student.name);
	printf("roll: %u\n", student.roll);
	printf("marks: %f\n", student.marks);


	return 0;
}