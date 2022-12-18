#include <stdio.h>

void add(int a, int b)											//formal parameter
{
	printf("\n Addition = %d",(a+b));
}

void main()
{
	int a,b;
	printf("\nEnter the value of A and B :");
	scanf("%d%d",&a,&b);
	add(a,b);													//actual parameter
}