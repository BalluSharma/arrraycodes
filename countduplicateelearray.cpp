#include<stdio.h>
main()
{
	int a[20],i,j,size,count=0;
	printf("Enter the size of Array:");
	scanf("%d",&size);
	
	printf("Enter the Element of Array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Output :");
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				break;
			}
		
		}
	}
		printf("%d",count);
}
