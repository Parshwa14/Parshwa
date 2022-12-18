#include <stdio.h>

void pass(int a)
{
	printf("\n%d is in the function now.",a);
}

void main()
{
	int a;
	printf("\nEnter value : ");
	scanf("%d",&a);
	pass(a);
}