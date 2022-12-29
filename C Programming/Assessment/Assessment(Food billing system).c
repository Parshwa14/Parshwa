

// Module 3 Assessment Test
//Food Billing System

#include <stdio.h>
#include <conio.h>


void menu()
{
		printf("\n\t\t\t:::::::::: MENU ::::::::::\n\n");	
		printf("\n\t\t1. Pizza-------------Price = 180rs/pcs.");
		printf("\n\t\t2. Burger------------Price = 100rs/pcs.");			//function to display the menu
		printf("\n\t\t3. Dosa--------------Price = 120rs/pcs.");
		printf("\n\t\t4. Idli--------------Price = 50rs/pcs.");	
}
	
void main(char repeat)
{
	int choice,qt,amt,prc;										//qt for quantity,amt for amount,prc for price or per product
	int tamt=0;													//tamt for total amount
	printf("\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 FOOD BILLING SYSTEM \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n");
	do
	{
		menu();													//calling menu function
		printf("\n\n\t\tChoose Your Food Item :");				//taking input for food item from user
		scanf("%d",&choice);
	
		if(choice == 1 )
		{
			printf("\n\t\tYou have selected Pizza.");
			prc = 180;
		}
		else if(choice == 2)
		{																//using if else for the different 
			printf("\n\t\tYou have selected Burger.");					//food items selection from the menu
			prc = 100;													//we can also use switch statement 
		}																//instead of if else statements
		
		else if(choice == 3)
		{
			printf("\n\t\tYou have selected Dosa.");	
			prc = 120;
		}
		else if(choice == 4)
		{
			printf("\n\t\tYou have selected Idli.");
			prc = 50;			
		}
		else
		{
			printf("\n\t\tPlease Enter Item from the Menu !!!");
		}	
		
		printf("\n\t\tEnter Quantity : ");									//input for the quantity of the food 
		scanf("%d",&qt);													//items the user chose
		
		amt = qt * prc;														//obtaining the amount from quantity of the item and
		printf("\n\t\tAmount = %d\n",amt);									//price per piece/one item

	
		tamt = tamt + amt;													//total amount of the all orders made simultaneously
		printf("\n\t\tDo you want to place more orders ? y or n :\n\n");
		printf("\n\t\t\tTotal amount : %d",tamt);

	repeat = getch();														//getting char input for while to reorder if user want
}
	while(repeat=='y'||repeat =='Y');
	{
		printf("\n\t\t-----------------------------------------");
		printf("\n\n\n\t\tThe Final Bill Amount is : %d",tamt);					//displaying the final amount after the exit of while loop
		
	}
	
}
