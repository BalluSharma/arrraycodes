#include<stdio.h>
main()
{
	int a[10],inputnum,found=0;
	printf("Enter 10 numbers:");
	for(int i=0;i<10;i++)
	{
	    scanf("%d",&a[i]);	
	}
	
	printf("\nEnter that number which may you find:");
	scanf("%d",&inputnum);
	
	for(int i=0;i<10;i++)
	{
		if(a[i]==inputnum)
		{
			printf("It is available in the list");
			found=1;
			break;
	}
}
if(found==0)
{
	printf("It is not available in the list");
}
}
