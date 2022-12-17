//Que 2 : WAP of Addition, Subtraction, Multiplication and Division using Switch
//case.(Must Be Menu Driven)

#include <stdio.h>

void main()
{
	int n1,n2,op;
	
	printf("\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2  CALCULATOR  \xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n\t\t___________________");
	
	
	printf("\n\t\tEnter first number : ");					
	scanf("%d",&n1);												//taking inputs for two numbers from user
	printf("\n\t\tEnter second number : ");
	scanf("%d",&n2);
	
	printf("\n\t\t[[[  Select An Operator   ]]]\n");
	printf("\n\t\t --> 1 for Addition ");	
	printf("\n\t\t --> 2 for Subtraction ");						//menu for operations to be chosen by user
	printf("\n\t\t --> 3 for Multiplication ");
	printf("\n\t\t --> 4 for Division ");

	scanf("%d",&op);
	

	switch(op)
	{
		case 1 : printf("\n\t\t Addition = %d",(n1+n2));
				break;
				
		case 2 : printf("\n\t\t Subtraction = %d",(n1-n2));
				break;
																									// switch case for the operation chosen by user
		case 3 : printf("\n\t\t Multiplication = %d",(n1*n2));										// and showing the output as a result
				break;																									
				
		case 4 : printf("\n\t\t Division = %.2f",((float)(n1))/n2);
				break;
				
		default : printf("\n\t\t Invalid Option !!");
				break;
	}
}