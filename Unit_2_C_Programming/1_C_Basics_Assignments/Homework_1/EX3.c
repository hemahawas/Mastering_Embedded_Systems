
#include <stdio.h>

void main(){
	printf("##########Console-output###\nC Programming\n");

	int a,b;

	printf("please enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%i %i", &a, &b);


	printf("sum: %i\n", a+b);

	printf("###########################\n\n"\
			"########################################################################");
}
