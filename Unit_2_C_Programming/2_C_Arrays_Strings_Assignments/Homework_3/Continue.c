#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("##########Console-output###\n");

    int i, num, product;
	
    for (i=1, product=1;i<=4; ++i){
		printf("Enter num%d: ",i);
		fflush(stdin); fflush(stdout);
		scanf("%d", &num);
		if (num==0)
			continue;
		product*=num;
	}
	
    printf("product=%d", product);

    printf("\n###########################\n");
	printf("\n\n########################################################################");
    return 0;
}