#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int power(int base, unsigned int pow);

int main(void) {

	int num;
	unsigned int pow;

	printf("Enter the base number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);
	
    printf("Enter the power number (positive integer): ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &pow);
	
    printf("Result = %d", power(num, pow));
	
	return 0;
}

int power(int base, unsigned int pow){
	if(pow == 0) return 1;
	return base *power(base, pow-1);
}
