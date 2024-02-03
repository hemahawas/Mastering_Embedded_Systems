
#include <stdio.h>

void main(){
	printf("##########Console-output###\n");

	char c;

	printf("Enter an integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &c);

	switch(c){
	case 'i':
	case 'I':
	case 'a':
	case 'A':
	case 'b':
	case 'B':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
		printf("%c is vowel",c);
		break;
	default:
		printf("%c is consonant",c);
	}


	printf("\n###########################\n");
	printf("\n\n########################################################################");
}
