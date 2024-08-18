#include<stdio.h>
int main()
{
	int a[3][3], b[3][3], mult[3][3];
	
	printf("Enter first matrix:");
	for(int r=0;r<3;r++)
	{
		for(int c=0;c<3;c++)
		{
			scanf("%d",&a[r][c]);
		}
	}
	
	printf("Enter second matrix:");
	for(int r=0;r<3;r++)
	{
		for(int c=0;c<3;c++)
		{
			scanf("%d",&b[r][c]);
		}
	}
	
	

	for(int r=0;r<3;r++)
	{
		for(int c=0;c<3;c++)
		{
			mult[r][c] =0;
			for(int k=0;k<3;k++)
			{
				mult[r][c]+= a[r][k]*b[k][c];
			}
		}
	}
	
	printf("\nThe Multiplication\n");
	for(int r=0;r<3;r++)
	{
		for(int c=0;c<3;c++)
		{
			printf("%d ",mult[r][c]);
		}
		printf("\n");
	}
}
