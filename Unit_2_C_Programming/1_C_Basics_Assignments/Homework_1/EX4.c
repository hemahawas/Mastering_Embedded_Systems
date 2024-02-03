
#include <stdio.h>

void main(){
	printf("##########Console-output###\n");
	printf("\n###########################\n");
	float a,b;

	printf("please enter two numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &a, &b);


	printf("Product: %.3f\n", a*b);


	printf("########################################################################");
}
