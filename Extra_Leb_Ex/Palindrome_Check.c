//takes a number as input and checks whether it is a palindrome using a function. Challenge: Modify the program to check if a given string is a palindrome.
#include <stdio.h>

int isPalindrome(int num) 
{
    int originalnum = num;
    int reversednum = 0, remainder;

    while (num != 0) 
	{
        remainder = num % 10;
        reversednum = reversednum * 10 + remainder; 
        num /= 10; 
    }

    if (originalnum == reversednum) 
	{
        return 1; 
    } else {
        return 0; 
    }
}

main()
 {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num)) 
	{
        printf("\n\n\t number is a palindrome.%d", num);
    } else {
        printf("\n\n\t number is not a palindrome.%d", num);
    }

}


