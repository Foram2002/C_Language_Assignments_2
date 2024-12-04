//simple calculator.take two numbers and operator as input from the user and perform the respective operation (addition,subtraction, multiplication, division, or modulus) using operators.
#include<stdio.h>
main()
{
	int num1,num2;
	
	printf("\n\n\t Enter First Integer Number:- ");
	scanf("%d",&num1);
	
	printf("\n\n\t Enter Second Integer Number:- ");
	scanf("%d",&num2);
	
	printf("\n\n\t ===========================================================");
	
	printf("\n\n\t Addition %d",num1 + num2);
	printf("\n\n\t Subtraction %d",num1-num2);
	printf("\n\n\t Multiplication %d ",num1*num2);
	printf("\n\n\t Division %d",num1/num2);
	printf("\n\n\t Modulus %d",num1%num2);

}
