#include<stdio.h>
//calculate average of 10 numbers array
main()
{
	float a[20],sum=0;
	float avg;
	printf("Enter 10 numbers:");
	for(int i=0;i<10;i++){
	scanf("%f",&a[i]);
 }
 
 printf("\nAverage of 10 numbers:");
 for(int i=0;i<10;i++){
 	sum=sum+a[i];
 }
 	avg = sum/10;
 printf("\nThe Average=%2f",avg);
}
