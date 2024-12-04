//takes an integer from the user and check operators: Whether the number is even or odd.the number is positive, negative,or zero.the number is a multiple of both 3 and 5.
#include<stdio.h>
main()
{
	int n1;
	
	printf("Enter The Number:- ");
	scanf("%d",&n1);
	
	if(n1%2==0)
	{
		printf("Number Is Even");
	}
	else
	{
		printf("Number Is Odd");
	}
	printf("\n\n-------------------------------------------------------------\n");
	
	int n2;
	printf("Enter The Number:- ");
	scanf("%d",&n2);
	
	if(n2>0)
	{
		printf("Number Is Positive");
	}
	else if(n2<0)
	{
		printf("Number Is Negative");
	}
	else
	{
		printf("Number is Zero");
	}
	printf("\n\n-------------------------------------------------------------\n");
	
	int n3;
	printf("Enter The Number:- ");
	scanf("%d",&n3);
	
	if(n3%3==0 && n3%5==0)
	{
		printf("This Number Is  Multiple of both 3 and 5");
	}
	else
	{
		printf("Not Multiple of both 3 and 5");
	}
	
}

