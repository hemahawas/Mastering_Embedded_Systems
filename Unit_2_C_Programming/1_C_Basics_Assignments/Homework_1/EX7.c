
#include <stdio.h>

void main(){
	printf("##########Console-output###\n");

	int a,b;

	printf("please enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%i", &a);

	printf("please enter value of b: ");
		fflush(stdin); fflush(stdout);
		scanf("%i", &b);

	a = a+b;
	b = a-b;
	a = a-b;

	printf("after swapping, a = %i\n", a);
	printf("after swapping, b = %i\n", b);

	printf("\n###########################\n");
	printf("\n\n########################################################################");
}
