//Que 5.2	Write a program to take 10 no. Input from user and find out …
//			(i) How many even numbers are there
//			(ii) How many odd numbers are there
//			(iii) sum of even numbers
//			(iv) sum of odd numbers

#include <stdio.h>

void main()
{
	int num;
	int i;
	int ce=0;
	int co=0;															//declaring all the necessary variables
	int sum_even = 0;
	int sum_odd = 0;
	
	printf("\nEnter 10 Numbers \n ");
	for(i=1;i<11;i++)
	{
		printf("\nEnter number %d : ",i);								//taking user input for the numbers
		scanf("%d",&num);
		
		if(num % 2 == 0)
		{
			sum_even = sum_even + num;									//for sum of even numbers and count of even numbers
			ce++;
		}
		else
		{
			sum_odd = sum_odd + num;									//for sum of odd numbers and count of odd numbers
			co++;
		}
	}
	printf("---------------------------------\n");
	printf("\nThere are %d Even Numbers. \n",ce);
	printf("---------------------------------\n");
	printf("\nThere are %d Odd Numbers. \n",co);
	printf("---------------------------------\n");
	printf("\nSum of Even numbers : %d\n",sum_even);
	printf("---------------------------------\n");
	printf("\nSum of Odd numbers : %d\n",sum_odd);	
}