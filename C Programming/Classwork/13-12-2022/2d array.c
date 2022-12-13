#include <stdio.h>

void main()
{
	int matrix1[3][3];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{																		//used nested loops to take input from the user
			printf("\nEnter element[%d][%d]",i,j);
			scanf("%d",&matrix1[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)														//showing the array elements
		{
			printf("%d\t",matrix1[i][j]);
		}
		printf("\n");
	}
	
}