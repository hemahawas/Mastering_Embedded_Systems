
#include <stdio.h>

void main(){
	printf("##########Console-output###\n");

	char op;
	float a,b;


	printf("Enter an operator (+, -, * , /): ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&op);

	printf("Enter operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&a, &b);

	switch(op){
	case '+':
		printf("%.1f %c %.1f = %.1f", a, op, b, a+b);
		break;
	case '-':
		printf("%.1f %c %.1f = %.1f", a, op, b, a-b);
		break;
	case '*':
		printf("%.1f %c %.1f = %.1f", a, op, b, a*b);
		break;
	case '/':
		printf("%.1f %c %.1f = %.1f", a, op, b, a/b);
		break;
	}
	printf("\n###########################\n");
	printf("\n\n########################################################################");
}
