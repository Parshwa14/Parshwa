//Que 6 Write a program to print factorial of given number.

#include <stdio.h>

void main()
{
	int n,i,f = 1;
	
	printf("\nEnter a Number to Obtain it's factorial : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		f = f * i;
	}
	printf("\n________________________________");
	
	printf("\n\nThe factorial of %d = %d",n,f);
}