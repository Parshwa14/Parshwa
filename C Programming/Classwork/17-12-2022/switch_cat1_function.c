#include <stdio.h>

//Calculator with function and switch case

void add() {
	int a = 10,b=10;
	printf("\nAddition : %d",(a+b));
}


void sub() {
	int a =40,b=20;
	printf("\nSubtraction : %d",(a-b));
}


void mul() {
	int a = 10,b=2;
	printf("\nMultiplication : %d",(a*b));
}


void div() {
	int a =100,b=5;
	printf("\nDivision : %f",( (float )a/b));
}


void main() 
{
	int op;
	printf("\nSelect any operation :\n");
	printf("\n1 for Addition  ");
	printf("\n2 for Subtraction  ");
	printf("\n3 for Multiplication  ");
	printf("\n4 for Division  ");
	scanf("%d",&op);
	
	switch(op)
	{	
		case 1: add();
				break;
		case 2: sub();
				break;
		case 3: mul();
				break;
		case 4: div();
				break;
		default : printf("\nInvalid Choice!!!");
				break;
	}
}