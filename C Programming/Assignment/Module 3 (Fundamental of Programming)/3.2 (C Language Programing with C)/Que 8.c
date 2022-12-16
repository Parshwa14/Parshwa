//Que 8 Write a program to print number in reverse order e.g.: number = 64728 ---> reverse = 82746   

#include <stdio.h>

void main()
{
	int n,remainder;
	int reverse=0;
	
	printf("\nEnter a number to reverse : ");				//taking input from user to reverse the number
	scanf("%d",&n);
	while(n!=0)
	{
		remainder = n%10;									//logic of the code 
		reverse = (reverse * 10)+ remainder ;				//it turns all the number in reverse one by one
		n/=10;
	}
	printf("\nThe Reversed number is %d. ",reverse);
}