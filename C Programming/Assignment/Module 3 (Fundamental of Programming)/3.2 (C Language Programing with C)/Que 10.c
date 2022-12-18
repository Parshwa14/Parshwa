//Que 10 •	Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include <stdio.h>

void main()
{
	int n,rem,sum=0;
	printf("\nEnter a number : ");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem = n%10;
		sum = sum + rem;
		n /= 10;
	}
	printf("\nThe sum of digits you entered is :%d",sum);

}