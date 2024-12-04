/*Write a C program that takes an integer input from the user and prints its multiplication
table using a for loop.
Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).*/

#include <stdio.h>
main() 
{
    int num, i, n;

    printf("\n\n\t Enter the number for multiplication table:- ");
    scanf("%d", &num);

    printf("\n\n\t Enter the range for the multiplication table (1 to n):- ");
    scanf("%d", &n);

    printf("\n\n\t Multiplication table of %d from 1 to %d:\n", num, n);
    for (i = 1; i <= n; i++) 
	{
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

