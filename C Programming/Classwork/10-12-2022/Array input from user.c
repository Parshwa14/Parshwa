#include <stdio.h>

void main()
{
	int arr1[5],i;
	
	printf("\nEnter Array 1 elements :\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	printf("\n\nThe Elements of Array 1 are :\n\n ");
	
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr1[i]);
	}
}