#include <stdio.h>

void add(int a, int b)						
{
	printf("\n Addition = %d",(a+b));
}

void sub(int a, int b)						
{
	printf("\n Subtraction = %d",(a-b));
}

void mul(int a, int b)						
{
	printf("\n Multiplication = %d",(a*b));
}

void div(int a, int b)						
{
	printf("\n Division = %.2f",((float)a/b));
}
void main()
{
	int a,b,op;
	printf("\nEnter the value of A and B :");
	scanf("%d%d",&a,&b);
	
	printf("\nEnter the choice ");
	printf("\n 1 for Addition ");
	printf("\n 2 for Subtraction ");
	printf("\n 3 for Multiplication");
	printf("\n 4 for Division");
	scanf("%d",&op);
	
	if(op==1)
	{
		add(a,b);
	}
	else if(op==2)
	{
		sub(a,b);
	}
	else if (op==3)
	{
		mul(a,b);
	}
	else if(op==4)
	{
		div(a,b);
	}
	else
	{
		printf("\nInvalid Choice!!!");
	}
	

}