#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("##########Console-output###\n");
    switch(){
        case:
        default:
    }
    float num, average, sum=0;
    int i, n;
    
    printf("Maximum no. of inputs\n");
    fflush(stdin); fflush(stdout);
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        printf("Enter n%d", i);
        fflush(stdin); fflush(stdout);
        scanf("%f", &num);
        if(num < 0.0)
            break;
        sum += num;
    }
    
    average = sum /(i-1);
    
    printf("Average=%.2f", average);

    printf("\n###########################\n");
	printf("\n\n########################################################################");
    return 0;
}