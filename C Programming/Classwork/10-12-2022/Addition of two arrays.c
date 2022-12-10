#include <stdio.h>


void main()
{
	int arr1[5],arr2[5],i;
	
	printf("\nEnter Array 1 elements :\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	printf("\nEnter Array 2 elements :\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr2[i]);
	}
	
	printf("\nAddition of Two Arrays are :\n");
	
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr1[i] + arr2[i]);
	}
}