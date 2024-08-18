#include<stdio.h>
main()
{
	int a[3][3],b[3][3],sub[3][3];
	
	printf("Enter first Array:");
    for(int r=0;r<3;r++)
	{
		for(int c=0;c<3;c++)
		{
			scanf("%d",&a[r][c]);
		}
		}	
		
		printf("\n Enter second Array:");
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
				sub[r][c] = a[r][c] - b[r][c];
			}
			printf("\n");
		}
		
		printf("First Matrix:\n");
		for(int r=0;r<3;r++)
		{
			for(int c=0;c<3;c++)
			{
				printf("%d ",a[r][c]);
			}
			printf("\n");
		}
		
		printf("\n Second Matrix:\n");
		for(int r=0;r<3;r++)
		{
			for(int c=0;c<3;c++)
			{
				printf("%d ",b[r][c]);
			}
			printf("\n");
		}
		
		printf("\nTotal Substraction:\n");
		for(int r=0;r<3;r++)
		{
			for(int c=0;c<3;c++)
			{
				printf("%d ",sub[r][c]);
			}
			printf("\n");
		}
}
