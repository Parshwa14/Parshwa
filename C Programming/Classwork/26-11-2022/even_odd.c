#include <stdio.h>

void main()
{
	int a;
	printf("\nChoose a number:");
	scanf("%d",&a);
	
	if(a%2 == 0)
	{
		printf("\nThe number is even. ");
	}
	else
	{
		printf("\nThe number is odd");
	}
}
