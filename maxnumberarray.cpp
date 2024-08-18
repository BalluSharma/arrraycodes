#include<stdio.h>
main()
{
	int a[10],max;
	printf("Enter 10 numbers:");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	//max numbers
	max=a[0];
	for(int i=1;i<10;i++)
	{
		if(max<a[i])
		{
			max = a[i];
		}
		
	}
	printf("Max=%d",max);
	
}
