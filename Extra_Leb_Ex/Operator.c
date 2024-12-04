/* a simple calculator. The program should take two numbers
and an operator as input from the user and perform the respective operation (addition,
subtraction, multiplication, division, or modulus) using operators.
? Challenge: Extend the program to handle invalid operator inputs	*/
#include<stdio.h>
main()
{
	int num1,num2;
	
	printf("Enter First Number :- ");
	scanf("%d",&num1);
	
	printf("Enter Second Number :- ");
	scanf("%d",&num2);
	
	printf("\n\n Addition %d ",num1+num2);
	
	printf("\n\n Substraction  %d ",num1-num2);

	printf("\n\n Multiplication %d ",num1*num2);

	printf("\n\n  Division  %d ",num1/num2);

	printf("\n\n  Modul  %d ",num1+num2);

	
	
	
}
