//Que 6 : Write a program to make addition, Subtraction and multiplication of two matrix using 2-D Array.

#include <stdio.h>

void main()
{
	int mat1[3][3],mat2[3][3];
	int i,j,op;
	
	//Taking the inputs of both the matrixs from user
	
	//matrix 1 
	
	printf("\nEnter the Elements for Matrix 1.");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter value for element [%d][%d] ",i,j);
			scanf("%d",&mat1[i][j]);
		}
	}
	
	
	//matrix 2
	
	printf("\nEnter the Elements for Matrix 2.");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter value for element [%d][%d] ",i,j);
			scanf("%d",&mat2[i][j]);
		}
	}
	
	//showing the elements of matrix 1 and matrix 2 entered by user
	
	printf("\nMatrix 1 : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",mat1[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatrix 2 : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",mat2[i][j]);
		}
		printf("\n");
	}
	
	//For mathermatical operations
	
	printf("\nSelect an Operation from below.");																//user have to chose any of one operation
	printf("\n1 for Addition. \n2 for Subtraction. \n3 for Multiplication.\n");
	scanf("%d",&op);
	
	if(op==1)
	{
		printf("\nAddition of two matrix : \n\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)													//for the addition 
			{
				printf("%d\t",(mat1[i][j]+mat2[i][j]));
			}
			printf("\n");
		}
	}
	
	else if(op==2)
	{
		printf("\nSubtraction of two matrix : \n\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)													//for subtraction
			{
				printf("%d\t",(mat1[i][j]-mat2[i][j]));
			}
			printf("\n");
		}
	}
	
	else if(op==3)
	{
		printf("\nMultiplication of two matrix : \n\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)													//for multiplication
			{
				printf("%d\t",(mat1[i][j]*mat2[i][j]));
			}
			printf("\n");
		}
	}
	
	else
	{
		printf("\nError,Try again!");
	}
}

