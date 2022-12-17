// Que 1 : Write a program to find out the max number from given array using function.
#include  <stdio.h>
void max_num();
void main()
{
	int arr[5];
	int i;
	
	printf("\nFor Array elements : \n");
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter number [%d] ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\nThe elements of array : \n");
	
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr[i]);
	}
	max_num();
}

void max_num()
{
	int i ,j,arr[5];
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(arr[i]>arr[j])
			{
				printf("\n %d is max number",arr[i]);
			}
			else
			{
				printf("\n %d is max number",arr[j]);
			}
		}
	}
}
