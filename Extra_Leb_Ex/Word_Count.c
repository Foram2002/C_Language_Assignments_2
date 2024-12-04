//Write a C program that counts the number of words in a sentence entered by the user

#include <stdio.h>
int main() {
    char str[100];
    int word_count = 0,i;
    int in_word = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) 
	{
        if (isspace(str[i])) 
		{
            in_word = 0;  
        } else 
		{
            if (in_word == 0)
			 {
                word_count++;  
                in_word = 1;   
            }
        }
    }

    printf("\n\n\t Number of words: %d", word_count);
}

