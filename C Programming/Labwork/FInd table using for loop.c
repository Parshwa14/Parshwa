//Find table of any number

#include <stdio.h>

void main()
{
	int x,i;
	
	printf("\nEnter any Number you want to find table of :");
	scanf("%d",&x);
	
	for(i=1;i<=10;i++)
	{
		printf("\n%d x %d = %d",x,i,(x*i));
	}
}