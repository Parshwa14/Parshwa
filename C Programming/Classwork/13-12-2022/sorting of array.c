//Sorting of array

#include <stdio.h>

void main()
{
	int arr1[5];
	int i,j,temp;
	
	printf("\Enter Array 1 Elements :");
	for(i=0;i<5;i++)														//	Taking input from User for array elements
	{
		printf("\nEnter Element [%d] :",i+1);
		scanf("%d",&arr1[i]);
		
	}
	
	
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr1[i]);												//showing the array elements
	}
	
	
	printf("\nArray elements in ascending order :\n");
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr1[i] > arr1[j])
			{
				temp = arr1[i];												// logic for sorting array in ascending order
				arr1[i] = arr1[j];
				arr1[j] = temp;
			}
		}
	}
	
	
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr1[i]);												//showing array elements in ascending order
	}
	
	
	printf("\nArray in Descending order :\n");
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr1[i] < arr1[j])
			{
				temp = arr1[i];												// logic for sroting array in descending order
				arr1[i] = arr1[j];
				arr1[j] = temp;
			}
		}
	}
	
	
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr1[i]);												//showing the array elements in descending order 
	}
	

}