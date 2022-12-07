//Que 5 WAP to check if the given year is a leap year or not. 

#include <stdio.h>

void main()
{
	int year;
	
	printf("\nEnter a year :");
	scanf("%d",&year);
	
	if(year%4 == 0)									//using if ...else with modulo operator
	{
		printf("\n%d is a Leap Year.",year);
	}
	else
	{
		printf("\n%d is not a Leap Year.",year);
	}
}