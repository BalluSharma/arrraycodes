#include<stdio.h>
main()
{
	int n,temp=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			printf("Not PrimeNumber");
			temp=1;
			break;
		}
	}
		if(temp == 0)
		{
			printf("Prime Number");
		}
		
}
