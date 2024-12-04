//checks whether a given number is a prime number or not using a for loop.Challenge: Modify the program to print all prime numbers between 1 and a given number

#include <stdio.h>
main() 
{
    int num, i = 2, number = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= num / 2) 
	{
        if (num % i == 0) 
		{
            number = 1;  
            break;
        }
        i++;
    }
    if (num == 1) 
	{
        printf("number is neither prime nor composite.%d", num);
    } else if (number == 0) 
	{
        printf("\n\n\t number is a prime number.%d", num);
    } else 
	{
        printf("\n\n\t number is not a prime number.%d", num);
    }
}

