
#include <stdio.h>

void main(){
	printf("##########Console-output###\n");

	unsigned int i,n, fact = 1;


	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%i",&n);

	if(n <0){
		printf("Error, n should't be negative");
		exit(0);
	}

	for(i = 1; i <= n; i++){
		fact*=i;
	}
	printf("fact = %u", fact);
	printf("\n###########################\n");
	printf("\n\n########################################################################");
}
