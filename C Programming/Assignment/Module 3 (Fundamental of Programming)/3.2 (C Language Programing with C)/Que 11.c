//Que 11 Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)
  
#include <stdio.h>

void main()
{
	int n,ld,fd,total=0;
	
	printf("\nEnter a number : ");
	scanf("%d",&n);
	ld=n%10;        					   //here the remainder is the alst digit of the number
	while(n>=10)
	{
		n=n/10;								//we will  be dividing the number until it is greater than 10 and then after dividing  
	}										//it by 10 we will get the first digit 
	fd=n;
	printf("fd=%d ld=%d",fd,ld);
	total = fd + ld;						// adding the first digit and last digit to the predefined total which has value store 0 in itself
	printf("\nThe total of First and Last digits is : %d",total);
}  