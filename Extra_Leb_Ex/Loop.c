/*Write a C program that checks whether a given number is a prime number or not using a for loop.
Challenge: Modify the program to print all prime numbers between 1 and a given number*/
#include <stdio.h>
main() 
{
    int num, i, n = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) 
	{
        n = 0; 
    } else
	 {
        for (i = 2; i <= num / 2; i++) 
		{
            if (num % i == 0) 
			{
                n= 0;
                break;
            }
        }
    }

    if (n == 1) 
	{
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
}

