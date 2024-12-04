/*Write a C program that takes N numbers from the user and stores them in an array. The
program should then calculate and display the sum of all array elements.
Challenge: Modify the program to also find the average of the numbers.*/

#include <stdio.h>
main() 
{
    int n, sum = 0,i;
    float average;

    printf("Enter the number of elements:- ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers: \n", n);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) 
	{
        sum += arr[i];
    }
    average = (float)sum /n;

    printf("\n\n\t Sum of all array elements: %d", sum);
    printf("\n\n\t Average of all array elements: %.2f", average);
}


