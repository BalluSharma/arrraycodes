#include<stdio.h>
main()
{
	int a[10],min;
	printf("Enter 10 numbers:");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	//min numbers
	min=a[0];
	for(int i=1;i<10;i++)
	{
		if(min>a[i])
		{
			min = a[i];
		}
		
	}
	printf("Min=%d",min);
	
}
