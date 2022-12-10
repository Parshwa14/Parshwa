//Que 3 WAP to find number is even or odd using ternary operator 

#include <stdio.h>

void main()
{
	int i;
	printf("\n\t\t\t]]]]]]]]]]]] EVEN or ODD [[[[[[[[[[[[");						//Finding Even Odd using ternary operator 
	printf("\n\n\tEnter a Number :");
	scanf("%d",&i);

	i%2==0 ? printf("\n\tIt is Even Number.") : printf("\n\tIt is Odd Number.");
}