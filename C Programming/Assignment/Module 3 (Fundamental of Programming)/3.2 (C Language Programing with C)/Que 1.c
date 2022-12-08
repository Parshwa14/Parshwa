//Que 1 WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo)

#include <stdio.h>

void main()
{
	int a,b,op;
	
	printf("\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Simple Calculator \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
	
	printf("\n\t\tEnter Number A :");			//Taking input A from user
	scanf("%d",&a);
	
	printf("\n\t\tEnter Number B :");			//Taking input B form user
	scanf("%d",&b);
	
	printf("\n\t\tA = %d \n\t\tB = %d\n",a,b);    	//Showing the entered input A and B
	
	printf("\n\t\tSelect any of one Operation from below\n\n");
	printf("\n\n\t\tEnter 1 for Addition");
	printf("\n\t\tEnter 2 for Subtraction");								//asking user to choose
	printf("\n\t\tEnter 3 for Multiplication");								//which operation he/she 
	printf("\n\t\tEnter 4 for Division");									//wants to perform with 
	printf("\n\t\tEnter 5 for Modulo\n");
	
	scanf("%d",&op);
	
	printf("--------------------------------");
	
	if(op==1)
	{
		printf("\n\t Addition  = %d",(a+b));
	}
	else if(op==2)
	{
		printf("\n\t Subtraction = %d",(a-b));
	}
	else if(op==3)
	{
		printf("\n\t Multiplication = %d",(a*b));
	}	
	else if(op==4)
	{
		printf("\n\t Division = %.2f",((float)a/b));
	}
	else if (op==5)
	{
		printf("\n\t Modulo = %d",(a%b));
	}
	else
	{
		printf("\nPlease Choose from the Given Options.");
	}
}