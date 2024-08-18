#include<stdio.h>
main()
{
	int a[15];
	printf("Enter 10 Numbers:");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("The Reverse Order:\n");
	for(int i=9;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
}
