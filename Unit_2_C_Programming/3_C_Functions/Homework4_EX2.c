#include <stdio.h>
#include <stdlib.h>


int fact(int);

int main(void) {

	int a;

    printf("Enter factorial number : ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &a);
    
    printf("%d",fact(a));

	return 0;
}

int fact(int x){
	if(x == 0)
		return 1;
	return x * fact(x-1);
}
