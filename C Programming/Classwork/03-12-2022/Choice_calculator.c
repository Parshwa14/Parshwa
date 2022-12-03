#include <stdio.h>

void main()
{
	int a,b,choice;
	printf("\n\t\tChoice Calculator");
	
	printf("\nEnter Number A :");
	scanf("%d",&a);
	
	printf("\nEnter Number B :");
	scanf("%d",&b);
	 
	printf("\nA = %d, B = %d",a,b);
	
	printf("\n\t\t\tMENU");
	printf("\nEnter Your Choice:");
	printf("\nEnter 1 for Addition.");
	printf("\nEnter 2 for Subtraction.");
	printf("\nEnter 3 for Multiplication.");
	printf("\nEnter 4 for Division.");
	
	scanf("%d",&choice);
	
	if(choice == 1)
	{
		printf("\nAddition = %d ",(a+b));
	}
	else if(choice == 2)
	{
		printf("\nSubtraction = %d",(a-b));
	}
	else if(choice == 3)
	{
		printf("\nMultiplication = %d",(a*b));
	}
	else if(choice == 4)
	{
		printf("\nDivision = %.2f",((float)a/b));
	}
	else
	{
		printf("\nInvalid Choice");
	}
	

}