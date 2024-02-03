
#include <stdio.h>

void main(){
	printf("##########Console-output###\n");

	int a;

	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%i",&a);

	printf("The number is %s ", a > 0 ? "positive" : (a < 0 ? "negative" : "zero"));


	printf("\n###########################\n");
	printf("\n\n########################################################################");
}
