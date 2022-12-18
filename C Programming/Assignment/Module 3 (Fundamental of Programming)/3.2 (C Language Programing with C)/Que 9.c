//Que 9  Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

#include <stdio.h>

void main()
{
	int n,remainder=0,max=0;
	printf("\nEnter a Number : ");
	scanf("%d",&n);
	while(n!=0)
	{
		remainder = n%10;
		if(remainder>max)
		{
			max=remainder;
		}
		n /= 10;
		
	}
	printf("\nThe largest number in the given digits is : %d",max);
		
}