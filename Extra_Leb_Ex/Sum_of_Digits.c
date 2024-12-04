//takes an integer from the user and calculates the sum of its digits using a while loop.Challenge: Extend the program to reverse the digits of the number.
#include <stdio.h>
main() 
{
    int num, sum = 0, n,reversed = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);
    n= num;  

    while (num != 0) 
	{
        digit = num % 10;     
        sum += digit;          
        reversed = reversed * 10 + digit;  
        num /= 10;           
    }
    printf("\n\n\t Sum of digits: %d", sum);
    printf("\n\n\t Reversed number: %d", reversed);
}

