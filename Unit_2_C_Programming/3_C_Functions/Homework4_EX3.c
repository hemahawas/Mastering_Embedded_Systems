#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseSentence(char text[100]);

int main(void) {

	char text[100];

	printf("Enter a sentence: ");
	fflush(stdin); fflush(stdout);
	gets(text);
	
	reverseSentence(text);
	
	return 0;
}

void reverseSentence(char text[100]){
	if(text[1] != '\0'){
		reverseSentence(text+1);
	}
	printf("%c", text[0]);
}
