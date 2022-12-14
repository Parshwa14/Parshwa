// isoceles triangle pattern

#include <stdio.h>

void main()
{
	int i,j,k,l;
	
	
	for(i=0;i<=4;i++)
	{
		
		
		for(k=0;k<4-i;k++)
		{
			printf("  ");
		}
		
		for(j=0;j<i+1;j++)
		{
			printf(" *");
		}
		
		for(l=0;l<i;l++)
		{
			printf(" *");
		}
		printf("\n");
	}
}