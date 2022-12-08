// Que 6 WAP to convert years into days and days into years.

#include <stdio.h>

void main()
{
	int n,day,year;
	printf("\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Year <--> Days and Days <--> Year Converter \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
	printf("\n\t\t\tSelect your Option :");
	printf("\n\t\t\tPress 1 to convert from Year to Days.");										//making the user choose from the two options
	printf("\n\t\t\tPress 2 to convert from Days to Years.");      
	scanf("%d",&n);
	
	if(n==1)
	{
		printf("\nEnter the Years :");
		scanf("%d",&year);
		printf("\nTotal days in %d year are : %d",year,(year*365));						//using if else to obtain the result
	}
	else if(n==2)
	{
		printf("\nEnter the days :");
		scanf("%d",&day);
		printf("\nTotal years of %d days are : %.2f",day,((float)day/365));
	}
	else
	{
		printf("\n\t\t\tEnter Valid Choice.");
	}

}
