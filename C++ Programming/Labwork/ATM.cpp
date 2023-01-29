#include<iostream>
using namespace std;

class ATM
{
	public:
		int sp = 2023;
		int pin,typ;
		float bal;
		
		void validate()
		{
			cout<<"\n\n\nEnter Your Four Digit Pin : ";
			
			cin>>pin;
			if(pin==sp)
			{
				cout<<"\nYou are being taken to the next page > > > ";
				
			}
			else
			{
				cout<<"\nINCORRECT PIN !!!";
			}
		}
		void type()
		{
			cout<<"\nSelect Type of Your Bank Account ";
			cout<<"\n 1 for Savings Account";
			cout<<"\n 2 for Current Account\n\n";
			cin>>typ;
		}
		
		void menu()
		{
			cout<<"\n\t\t Select a Service You Want";
			cout<<"\n Press 1 for Banking ";
			cout<<"\n Press 2 for Display Balance";
			cout<<"\n Press 3 for Cash Withdrawal";
			cout<<"\n Press 4 for ";
		}
		
		
		void displaybal()
		{
			cout<<"\nYour Savings  ";	
		}
};
int main()
{
	ATM a;
	cout<<"\n\t\t************ WELCOME TO MALYA BANKS PRIVATE LIMITED ************";
	cout<<"\n\t\t\tThe\tSafest\tBank\tfor\tYour\tMoney\n\n";
	cout<<"\n\t\t\tPlease Insert Your Card ";
	cout<<"\n\t\t\t(Don't Forget to Collect Your Card)";
	a.type();
	a.menu();
	a.validate();
	return 0;
}