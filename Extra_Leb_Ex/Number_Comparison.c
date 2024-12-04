/*program that takes three numbers from the user and determines:
The largest number.
The smallest number.
Solve the problem using both if-else and switch-case statements. */
#include <stdio.h>

main()
 {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) 
	{
        printf("\n\n\t Largest number: %d", num1);
    } else if (num2 >= num1 && num2 >= num3) 
	{
        printf("\n\n\t Largest number: %d", num2);
    } else 
	{
        printf("\n\n\t Largest number: %d\n", num3);
    }
    if (num1 <= num2 && num1 <= num3) 
	{
        printf("\n\n\t Smallest number: %d", num1);
    } else if (num2 <= num1 && num2 <= num3) 
	{
        printf("\n\n\t Smallest number: %d\n", num2);
    } else
	{
        printf("\n\n\t Smallest number: %d\n", num3);
    }

 	switch (1)
	  {
        case 1:
            if (num1 >= num2 && num1 >= num3)
                printf("\n\n\t using switch largest number: %d\n", num1);
            else if (num2 >= num1 && num2 >= num3)
                printf("\n\n\t using switch largest number: %d\n", num2);
            else
                printf("\n\n\t using switch largest number: %d\n", num3);
            break;
    }

    switch (1)
	 {
        case 1:
            if (num1 <= num2 && num1 <= num3)
                printf("\n\n\t using switch smallest number: %d\n", num1);
            else if (num2 <= num1 && num2 <= num3)
                printf("\n\n\t using switch smallest number: %d\n", num2);
            else
                printf("\n\n\t using switch smallest number: %d\n", num3);
            break;
    }
}

