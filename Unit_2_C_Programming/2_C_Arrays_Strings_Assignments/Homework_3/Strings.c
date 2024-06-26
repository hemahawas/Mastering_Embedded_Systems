#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("##########Console-output###\n");

    /*************************** Strings: Frequency of chars *********************/
	/*
	char text[100];
	
	printf("Enter the text");
	fflush(stdin); fflush(stdout);
	gets(text);

	char c;

	printf("Enter the character");
	fflush(stdin); fflush(stdout);
	scanf("%c", &c);

	int i, freq=0;

	for(i = 0; i < strlen(text); i++){
		if(c == text[i]){
			freq++;
		}
		if(text[i] == 0)
			break;
	}

	printf("The %c exists %d times", c, freq);
	*/

	/******************************* Strings: get length **********************/
/*
	char text[100];

	printf("Enter the text");
	fflush(stdin); fflush(stdout);
	gets(text);

	int i=0;

	while(text[i] != 0){
		i++;
	}

	printf("Length = %d", i);
	*/

	/******************************* Strings : Reverse ************************/
	/*
	char text[100];

	printf("Enter the text");
	fflush(stdin); fflush(stdout);
	gets(text);

	int i = 0;

	for(i = strlen(text)-1; i >=0 ; i--){
		printf("%c", text[i]);
	}
	*/

    printf("\n###########################\n");
	printf("\n\n########################################################################");
    return 0;
}