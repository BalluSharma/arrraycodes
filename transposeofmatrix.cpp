#include<stdio.h>
main()
{
	int row,col,a[10][10],temp;
	printf("Enter the size of row:");
	scanf("%d",&row);
	printf("Enter the size of col:");
	scanf("%d",&col);
	
	printf("Enter the element of matrix");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
	}
	
	printf("before the transposre of matrix\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	
	printf(" after the Transpose of Matrix\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}
