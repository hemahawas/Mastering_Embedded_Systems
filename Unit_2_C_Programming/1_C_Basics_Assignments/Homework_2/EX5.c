
#include <stdio.h>

void main(){
	printf("##########Console-output###\n");

	char a;

	printf("Enter a char: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&a);

	printf("The number is %s", (a >= 'A' && a <= 'z' )? "alphabet" : "not alphabet");

	printf("\n###########################\n");
	printf("\n\n########################################################################");
}
