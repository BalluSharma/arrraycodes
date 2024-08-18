#include<stdio.h>
main()
{
	int num[10],count=0,isPrime;
	
	printf("Enter 10 numbers:");
	for(int i=0;i<10;i++){
	   scanf("%d",&num[i]);
	}

	for(int i=0;i<10;i++)
	{
		if(num[i]<=1)
		{
			continue;
		}
		isPrime=1;
		for(int j=2;j*j<=num[i];j++)
		{
			if(num[i]%j ==0)
			{
				isPrime=0;
				break;
			}
		}
		if(isPrime)
		{
			count++;
		}
	}
	printf("Count of prime numbers:%d\n",count);
}
