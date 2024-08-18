#include<stdio.h>
int main()
{
	int num[20],size,temp;
	printf("Enter the size of Array:");
	scanf("%d",&size);
	
	printf("Enter the element of Array");
	for(int i=0;i<size;i++){
	scanf("%d",&num[i]);
}

     printf("\nThe Array in Descending order:");
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++)
		{
			if(num[i]<num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
							}
		}
	}
    for(int i=0;i<size;i++)
    {
    	printf("%d\n",num[i]);
	}
}
