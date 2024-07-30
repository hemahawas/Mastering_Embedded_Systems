#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("##########Console-output###\n");

    /**************************** Arrays: Sum Matrix **************************/
	/*
	float a[2][2], b[2][2], sum[2][2];
	int i,j;

	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("Enter a%d%d: ", i+1, j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &a[i][j]);

		}
	}

	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("Enter b%d%d: ", i+1, j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &b[i][j]);
			sum[i][j] = a[i][j] + b[i][j];
		}
	}

	printf("Sum Matrix\n%5f %f\n%5f %f", sum[0][0], sum[0][1], sum[1][0], sum[1][1]);
*/

	/********************** Arrays : Average ******************************/

	/*
	int n;

	printf("Enter the number of data: ");

	fflush(stdin); fflush(stdout);
	scanf("%d", &n);

	float arr[n], sum=0, average;

	int i;

	for(i = 0; i < n; i++){
		printf("Enter the number: ");
		fflush(stdin); fflush(stdout);
		scanf("%f", &arr[i]);
		sum+=arr[i];
	}

	average = sum/n;

	printf("Average = %f", average);
	*/

	/************************ Arrays : Transpose of Matrix ********************/
	/*
	int n_row, n_col, i, j;

	printf("Enter row and column of matrix: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &n_row, &n_col);

	int arr[n_row][n_col], transpose[n_col][n_row];

	for(i = 0; i < n_row; i++){
		for(j = 0; j < n_col; j++){
			printf("Enter arr%d%d: ", i+1, j+1);
			fflush(stdin); fflush(stdout);
			scanf("%d", &arr[i][j]);
		}
	}


	for(i = 0; i < n_col; i++){
		for(j = 0; j < n_row; j++){
			transpose[i][j] = arr[j][i];

		}
		printf("\n");
	}

	printf("\nArray:\n");
	for(i = 0; i < n_col; i++){
			for(j = 0; j < n_row; j++){
				printf("%d  ", arr[i][j]);
			}
			printf("\n");
		}

	printf("\nTranspose:\n");

	for(i = 0; i < n_col; i++){
			for(j = 0; j < n_row; j++){
				printf("%d  ", transpose[i][j]);
			}
			printf("\n");
		}

	 */

	/************************** 	Arrays : insert element ************************/
	/*
	int n, i;

	printf("Enter the number of data: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);

	int arr[n];


	for(i = 0; i < n; i++){
		fflush(stdin); fflush(stdout);
		scanf("%d", &arr[i]);
	}

	int x,l;

	printf("Enter the value instead: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x);

	printf("Enter the location: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &l);

	arr[l-1] = x;

	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	*/

	/******************************  Arrays : Search ***********************/
	
	/*
	int n, i;

	printf("Enter the number of data: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);

	int arr[n];


	for(i = 0; i < n; i++){
		fflush(stdin); fflush(stdout);
		scanf("%d", &arr[i]);
	}

	int s;
	
	printf("Enter the number to be searched: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &s);

	for(i = 0; i < n; i++){
		if(s == arr[i]){
			printf("Found in location %d", i+1);
			break;
		}
	}
	*/

    printf("\n###########################\n");
	printf("\n\n########################################################################");
    return 0;
}
