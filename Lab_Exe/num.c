#include<stdio.h>
main()
{
	int num1,num2,num3;
	
	printf("Enter First Number :- ");
	scanf("%d",&num1);
	
	printf("Enter Second Number :- ");
	scanf("%d",&num2);
	
	printf("Enter Third Number :- ");
	scanf("%d",&num3);
	
	if(num1>num2)
	{
		if(num1!=num2)
		{
			printf("\n\n\t Smallest Number %d",num1);

		}
		
		printf("\n\n\t First Num Largest %d",num1);	
	}
	else if(num2>num3)
	{
		if(num2!=num3)
		{
			printf("\n\n\t Smallest 2 Number %d",num2);

		}
		printf("\n\n\t Second Num Largest %d",num2);
	}
	else if(num3>num1)
	{
		if(num3!=num1)
		{
			printf("\n\n\t Smallest 3 Number %d",num3);

		}
		printf("\n\n\t Third Num Largest %d",num3);
	}
	else
	{
		printf("Thank You");
	}
}
