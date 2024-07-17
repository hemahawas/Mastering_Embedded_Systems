#include <stdio.h>
#include <stdlib.h>


void findPrime(int ,int);

int main(void) {


	int a,b;
	
    printf("Enter prime number intervals : ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &a, &b);
	
    findPrime(a,b);

	return 0;
}

void findPrime(int a,int b){
	int i, j;
	for(i = a+1; i < b; i++){
		for(j = 2; j  < i; j++){
			if(i%j == 0 && i != j)
				break;
		}
		if(j==i)
			printf("%d ", i);
	}
}
