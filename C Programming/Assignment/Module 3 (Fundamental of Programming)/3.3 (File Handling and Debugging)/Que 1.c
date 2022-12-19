// Que 1 : Write a program to find out the max number from given array using function.

#include  <stdio.h>
//
//void max()
//{
//	int arr[6];
//	int i;
//	
//	for(i=0;i<6;i++)
//	{
//		if(arr[0]>arr[i])
//		{
//			printf("\n%d is Max number from given array",arr[0]);
//		}
//		
//	}
//}

void maxx()
{
	int i;
	int max;
	int arr[6];
	for(i=0;i<6;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("max = %d",max);
}
void main()
{
	int arr[6];
	int i,length,max;
	
	max = arr[0];
		
	for(i=0;i<6;i++)
	{
		printf("\nEnter element [%d] : ",i);
		scanf("%d",&arr[i]);
	}

	maxx();	
}
