//Que 5 : Write a program to take two Array input from user and sort them in ascending or descending order as per user’s choice.

#include <stdio.h>

void main()
{
	int arr1 [5], arr2 [6], sort;
	int i,j,temp;

	
//	Taking input from the user for array 1 elements


	printf("\nFor Array 1 :\n\n");
	for(i=0;i<6;i++)
	{
		printf("Enter element %d : ",i);
		scanf("%d",&arr1[i]);	
	}


//	Taking input from the user for array 2 elements

	
	printf("\nFor Array 2 :\n\n");
	for(i=0;i<7;i++)
	{
		printf("Enter element %d : ",i);
		scanf("%d",&arr2[i]);
	}


//Showing the elements of array 1
	
	printf("\nThe elements of Array 1 : \n\n");
	for(i=0;i<6;i++)
	{
		printf("%d\t",arr1[i]);
	}


//Showing the elements of array 2

	
	printf("\n\nThe elements of Array 2 : \n\n");
	for(i=0;i<7;i++)
	{
		printf("%d\t",arr2[i]);
	}


//Making user chose to select how to sort ascending or descending	order


	printf("\n\nEnter your choice to sort the array.");
	printf("\n1 - Ascending order. \n2 - Descending order.");
	scanf("%d",&sort);

	if(sort==1)
	{
		//for array 1
		
		for(i=0;i<6;i++)
		{
			for(j=i+1;j<6;j++)
			{
				if(arr1[i]>arr1[j])
				{
					temp = arr1[i];
					arr1[i]=arr1[j];					//logic for sorting
					arr1[j]=temp;
				}
			}
			
		}
		
		printf("\nArray 1 in Ascending order : \n\n");
		for(i=0;i<6;i++)
		{																		
			printf("%d\t",arr1[i]);								//showing the sorted array 1
		}
		
//		for array 2

		for(i=0;i<7;i++)
		{
			for(j=i+1;j<7;j++)
			{
				if(arr2[i]>arr2[j])
				{
					temp = arr2[i];						//logic for sorting
					arr2[i]=arr2[j];
					arr2[j]=temp;
				}
			}
		}
		printf("\nArray 2 in Ascending order : \n\n");
		for(i=0;i<7;i++)
		{					
			printf("%d\t",arr2[i]);											//showing the sorted array 2
		}
	}	
	
	
//Sorting in descending order


	else if(sort==2)
	{
		
		//for array 1
		
		for(i=0;i<6;i++)
		{
			for(j=i+1;j<6;j++)
			{
				if(arr1[i]<arr1[j])
				{
					temp = arr1[i];
					arr1[i]=arr1[j];									//logic for sorting
					arr1[j]=temp;
				}			
			}
		}
		
		printf("\nArray 1 in Descending order : \n\n");
		for(i=0;i<6;i++)
		{		 		
			printf("%d\t",arr1[i]);										//showing the sorted array 1
		}
		
		
		// for array 2 
		for(i=0;i<7;i++)
		{
			for(j=i+1;j<7;j++)
			{
				if(arr2[i]<arr2[j])
				{
					temp = arr2[i];
					arr2[i]=arr2[j];									//logic for sorting
					arr2[j]=temp;
				}
			}
		}

		printf("\nArray 2 in Descending order : \n\n");
		for(i=0;i<7;i++)
		{
			printf("%d\t",arr2[i]);										//showing the sorted array 2
		}
	}
	else
	{
		printf("\nPlease select valid option.");
	}

}