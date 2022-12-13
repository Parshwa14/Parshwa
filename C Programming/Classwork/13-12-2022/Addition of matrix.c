#include <stdio.h>

void main()

{
	int matrix1[3][3];
	int matrix2[3][3];
	int i,j;
	
	printf("\nFor Matrix 1 ");
	for(i=0;i<3;i++)														
	{																							// for matrix 1 input
		for(j=0;j<3;j++)
		{
			printf("\nEnter matrix 1 element[%d][%d]",i,j);
			scanf("%d",&matrix1[i][j]);
		}
	}
	
	printf("\nFor Matrix 2 ");
	for(i=0;i<3;i++)
	{																							// for matrix 2 input
		for(j=0;j<3;j++)
		{
			printf("\nEnter matrix 2 element[%d][%d]",i,j);
			scanf("%d",&matrix2[i][j]);
		}
	}
	
	printf("\nMatrix 1 :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",matrix1[i][j]);														//showing the entered input by user matrix 1
		}
		printf("\n");
	}
	
	printf("\nMatrix 2 :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)																		//showing the entered input by user for matrix 2
		{
			printf("%d\t",matrix2[i][j]);
		}
		printf("\n");
	}
	
	printf("\nThe Addition of Two Matrix : \n");
	for(i=0;i<3;i++)
	{																							// adding the two matrix and showing the output
		for(j=0;j<3;j++)
		{
			printf("%d\t",(matrix1[i][j] + matrix2[i][j]));
		}
		printf("\n");
	}
}
	