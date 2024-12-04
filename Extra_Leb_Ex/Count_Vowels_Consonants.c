//takes a string from the user and counts the number of vowels and consonants in the string.
#include <stdio.h>

main() 
{
    char str[100];
    int vowels = 0, consonants = 0,i;


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    for ( i = 0; str[i] != '\0'; i++) 
	{
        char ch = tolower(str[i]); 

        if (ch >= 'a' && ch <= 'z') 
		{
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
			{
                vowels++;  
            }
			 else 
			{
                consonants++;  // Increment consonant count
            }
        }
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
}

