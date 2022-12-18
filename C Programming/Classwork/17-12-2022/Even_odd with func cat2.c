#include <stdio.h>

void even_odd(int a)														//formal parameter
{
	printf("\nA = %d ",a);
	
	if(a%2==0)
	{
		printf("n %d is Even",a);
	}
	
	else
	{
		printf("\n%d is Odd",a);
	}
}

void main()
{
	int a;
	printf("\nEnter the value : ");
	scanf("%d",&a);
	even_odd(a);																//actual parameter
}