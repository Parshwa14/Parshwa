//Que 2 WAP to swap two numbers without using third variable.

#include <stdio.h>

void main()
{
	int a,b;
	
	printf("\t\t\t:::::::::: Swap the Numbers :::::::::\n\n");
	
	printf("\n\t\tEnter Number A :");
	scanf("%d",&a);
	
	printf("\n\t\tEnter Number B :");
	scanf("%d",&b);
	
	printf("\n\t\tNumbers Before Swapping :");
	printf("\n\t\tA = %d \n\t\tB = %d",a,b);

	a=a+b;										// new a will be (a+b)
	b=a-b;										// new b will be (a+b-b = a)
	a=a-b;										// new a will be (a+b-a = b)
	printf("\n\t\tNumbers After Swapping :");
	printf("\n\t\tA = %d \n\t\tB = %d",a,b);     //so the final value of A and B will be swapped
}