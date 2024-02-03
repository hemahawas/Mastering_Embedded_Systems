
#include <stdio.h>

void main(){
	printf("##########Console-output###\n");

	float a,b,c;

	printf("Enter three numbers : ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);

	printf("largest = %.3f", (a>b ? (a>c ? a : c) : (b>c ? b : c)));


	printf("\n###########################\n");
	printf("\n\n########################################################################");
}
