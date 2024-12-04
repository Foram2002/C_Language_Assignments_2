//Write a C program that accepts two 2x2 matrices from the user and adds them. Display the resultant matrix.

#include<stdio.h>
main()
{
	int m1[3][3], m2[3][3], m3[3][3],r,c,k;

	printf("\n\n\n\t Matrix-1 --------------------");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n\n\t Input m1[%d][%d] : ",r,c);
			scanf("%d",&m1[r][c]);
		}
	}
	
	printf("\n\n\n\t Matrix-2 --------------------");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\n\n\t Input m2[%d][%d] : ",r,c);
			scanf("%d",&m2[r][c]);
		}
	}
	
	printf("\n\n\n\t Matrix-1 --------------------\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",m1[r][c]);
		}
		printf("\n");
	}
	
	printf("\n\n\n\t Matrix-2 --------------------\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",m2[r][c]);
		}
		printf("\n");
	}
	
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			m3[r][c]=0;
			for(k=0;k<3;k++)
			{
				m3[r][c]+=m1[r][k]+m2[k][c];
			}
		}	
	}
	printf("\n\n\n\t Sum Of Matrix -3 --------------------\n\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",m3[r][c]);
		}
		printf("\n");
	}
}
	
