//Que 5.3 Write a program to print table up to given numbers.

#include <stdio.h>

void main()
{
	int a,b,i;							//here a = no. of table and b = upto which no. user wants the table
	
	printf("\nEnter the Number to obtain it's Table : ");								//input for getting number of table
	scanf("%d",&a);
	
	printf("\nEnter the number upto which you want the Table : ");						//input for upto which no.user wants the table								
	scanf("%d",&b);
	
	for(i=1;i<b+1;i++)
	{
		printf("\n________________________________");
		printf("\n%d\t%d\t%d",a,i,(a*i));
		
	}
}