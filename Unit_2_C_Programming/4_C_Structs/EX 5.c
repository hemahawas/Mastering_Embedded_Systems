#include <stdio.h>
#include <math.h>
#define AREA(R) R * R * 22/7


struct SCircle{
	float raduis;
	float area;
};

int main(void) {
	struct SCircle circle;
	printf("************** EX 5 *************\n\n");

	printf("Enter the radius: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &circle.raduis);
	circle.area = AREA(circle.raduis);
	printf("Area: %.2f", circle.area);
	return 0;
}
