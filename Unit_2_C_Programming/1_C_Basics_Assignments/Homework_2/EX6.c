
#include <stdio.h>

void main(){
	printf("##########Console-output###\n");

	int i,n, sum = 0;


	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%i",&n);

	for(i = 1; i <= n; i++){
		sum+=i;
	}
	printf("sum = %i", sum);
	printf("\n###########################\n");
	printf("\n\n########################################################################");
}
