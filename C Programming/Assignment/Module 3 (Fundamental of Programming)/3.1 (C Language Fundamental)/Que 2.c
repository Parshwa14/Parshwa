/*Que 2 Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo) */

#include <stdio.h>

void main()
{
	int a,b,op;       
	printf("\n\t:=:=:=:=:=:=:=:=:=:=: Simple Calculator :=:=:=:=:=:=:=:=:=:=:");
	
	printf("\n\tEnter Number A : ");            //taking input A from user
	scanf("%d",&a);

	printf("\n\tEnter Number B : ");			//taking input B from user
	scanf("%d",&b);

	printf("\n\tA = %d and B = %d",a,b);		//showing both the inputs entered by user

	printf("\n\n\n\t\xB2\xB2\xB2\xB2\xB2   Select an Operation to Perform!   \xB2\xB2\xB2\xB2\xB2");
	printf("\n\n\t\tEnter 1 for Addition");
	printf("\n\t\tEnter 2 for Subtraction");								//asking user to choose
	printf("\n\t\tEnter 3 for Multiplication");								//which operation he/she 
	printf("\n\t\tEnter 4 for Division");									//wants to perform with 
	printf("\n\t\tEnter 5 for Modulo\n");
	
	scanf("%d",&op);						//input for chosing the operation 
	
	printf("--------------------------------");
	switch(op)												//using switch case for the operations 
	{
		case 1 : printf("\n\t Addition  = %d",(a+b));
				break;
				
		case 2 : printf("\n\t Subtraction = %d",(a-b));
				break;
				
		case 3 : printf("\n\t Multiplication = %d",(a*b));
				break;
		
		case 4 : printf("\n\t Division = %.2f",((float)a/b));
				break;
				
		case 5 : printf("\n\t Modulo = %d",(a%b));
				break;
				
		default : printf("\n\t Invalid Input!");
				break;
	}

}
