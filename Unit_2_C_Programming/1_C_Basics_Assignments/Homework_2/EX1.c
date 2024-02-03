
#include <stdio.h>

void main(){
	printf("##########Console-output###\n");

	int a;

	printf("Enter an integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%i", &a);

	printf("a is %s", (a % 2 == 0) ? "even":"odd");

	printf("\n###########################\n");
	printf("\n\n########################################################################");
}
