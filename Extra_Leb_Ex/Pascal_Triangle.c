//Write a C program that generates Pascal’s Triangle up to N rows using loops.
#include <stdio.h>

main()
 {
    int n,i,j,space;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
	 {
        int number = 1; 
        for ( space = 1; space <= (n - i - 1); space++) {
            printf(" ");
        }

        for (j = 0; j <= i; j++) {
            printf("%d ", number);
            number = number * (i - j) / (j + 1); 
        }

        printf("\n"); 
    }

}

