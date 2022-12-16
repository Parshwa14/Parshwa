//Que 7 Write a prgoram to print Fibonacci series up to given numbers.

#include <stdio.h>

void main()
{
	int sum = 0;
	int a=0;
	int b=1;
	int n;
	
	printf("\nEnter a number for fibonacci series : ");								//taking the input from user to get the series
	scanf("%d",&n);
	printf("\nFibonacci Series : ");
	
	while(sum <= n)
	{
		printf(" %d |",sum);									//showing the output
		
		a=b;
		b=sum;													//swapping the variables to obtain fibonacci series 
		sum = a + b;
	}
	
}