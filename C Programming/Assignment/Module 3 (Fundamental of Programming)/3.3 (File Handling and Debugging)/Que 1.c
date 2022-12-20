// Que 1 : Write a program to find out the max number from given array using function.

#include  <stdio.h>

void max(int arr1[],int length)												//taking two parameters(arguments) to take value from the main function
{
	int i;
	int max = arr1[0];														//declaring the max variable to any of array element for the ease of comparison
	
	for(i=0;i<7;i++)
	{
		printf("%d \t",arr1[i]);											//printing the elements of array	
		
		if(arr1[i]>max)														
		{																	//to find the max number from the array by comparing each element with the first 
			max = arr1[i];													//element of the array
		}
	}
	printf("\n\nThe Max Number in the Array is : %d",max);
}


void main()
{
	
	int arr1[10] ;															//we are taking here array of 10 numbers
	int i;														
	int length = sizeof(arr1)/sizeof(arr1[0]);								//for finding length we are using total size of array/size of single element of array

	for(i=0;i<length;i++)
	{
		printf("\nEnter element %d : ",i);									//taking inputs of array from the user
		scanf("%d",&arr1[i]);
	}
	printf("\n\n\n");
	max(arr1,length);														//calling the function
}

