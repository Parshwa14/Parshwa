#include <stdio.h>

//Calculator with function

void add()
{
	int a = 10,b=10;
	printf("\nAddition : %d",(a+b));
}


void sub()
{
	int a =40,b=20;
	printf("\nSubtraction : %d",(a-b));
}


void mul()
{
	int a = 10,b=2;
	printf("\nMultiplication : %d",(a*b));
}


void div()
{
	int a =100,b=5;
	printf("\nDivision : %f",( (float )a/b));
}


void main()
{
	add();
	sub();
	mul();
	div();	
}