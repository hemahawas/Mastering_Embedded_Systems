
#include <stdio.h>
#include <string.h>

struct SComplex{
	float real;
	float img;
};

struct SComplex addComplex(struct SComplex c1, struct SComplex c2){
	struct SComplex sum;
	sum.real = c1.real + c2.real;
	sum.img = c1.img + c2.img;
	return sum;
}
int main(void) {
	struct SComplex c1, c2, sum;

	printf("************** EX 3 *************\n\n");


	printf("For 1st complex: \n");
	printf("Enter real and imaginary number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &c1.real, &c1.img);

	printf("For 2nd complex: \n");
	printf("Enter real and imaginary number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &c2.real, &c2.img);

	sum = addComplex(c1, c2);
	printf("Sum = %.2f%c%.2fi", sum.real, sum.img > 0 ? '+':'\0',sum.img);

	return 0;
}
