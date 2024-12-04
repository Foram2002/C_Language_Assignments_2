/*the marks of a student as input and displays the corresponding grade based on the following conditions:
Marks > 90: Grade A
Marks > 75 and <= 90: Grade B
Marks > 50 and <= 75: Grade C
Marks <= 50: Grade D	*/

#include<stdio.h>
main()
{
	int marks;
	
	printf("Enter Marks:- ");
	scanf("%d",&marks);
	if(marks<0 || marks>100)
	{
		printf("Enter Marks is Incorrect");
	}
	else if(marks>90)
	{
		printf("Grade - A");
	}
	else if(marks>75 && marks<=90)
	{
		printf("Grade - B");
	}
	else if(marks>50 && marks<=75)
	{
		printf("Grade - C");
	}
	else if(marks<=50)
	{
		printf("Grade - D");
	}
	
	printf("\n\n\t Enter Marks:-");
	scanf("%d",&marks);
	
	switch (marks>90){
		case 1:
			printf("Grade - A");
			break;
		case 2:
			printf("Grade - B");
			break;
		case 3:
			printf("Grade - C");
			break;
		case 4:
			printf("Grade - D");
			break;
	} 
}
