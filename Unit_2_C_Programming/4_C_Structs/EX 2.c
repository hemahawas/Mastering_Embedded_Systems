#include <stdio.h>
#include <string.h>

struct SDistance{
	int feet;
	float inch;
};

struct SDistance addDistances(struct SDistance d1, struct SDistance d2){
	struct SDistance sum;
	sum.feet = d1.feet + d2.feet;
	sum.inch = d1.inch + d2.inch;

	if(sum.inch > 12){
		int extra = sum.inch / 12;
		sum.feet += extra;
		sum.inch -= (extra * 12);
	}

	return sum;
}

int main(void) {
	struct SDistance d1, d2, sum;

	printf("************** EX 2 *************\n\n");


	printf("Enter info for 1st distance: \nEnter feet: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &d1.feet);

	printf("Enter inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &d1.inch);

	printf("Enter info for 2nd distance: \nEnter feet: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &d2.feet);

	printf("Enter inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &d2.inch);

	sum = addDistances(d1, d2);

	printf("Sum of distances : %d'-%.1f\"", sum.feet, sum.inch);

	return 0;
}
