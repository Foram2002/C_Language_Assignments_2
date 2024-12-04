//Write a C program that takes a string as input and reverses it using a function
#include <stdio.h>

void reverseString(char str[]) 
{
    strrev(str); 
}

main()
 {
    char str[100];

    printf("\n\n\t Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    reverseString(str);

    printf("\n\n\t Reversed string: %s", str);

}

