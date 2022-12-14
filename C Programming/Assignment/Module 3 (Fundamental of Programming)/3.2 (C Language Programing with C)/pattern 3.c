//play button shape pattern


# include <stdio.h>

void main()
{
	int i,j,k;
	
	for(i=0;i<=6;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	for(i=6;i<11;i++)
	{
		for(k=0;k<11-i;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
}