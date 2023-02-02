#include<iostream>
using namespace std;

class ATM
{
	public:
		int sp = 2023;
		int otp = 100498;
		double accno = 8511153980;
		int pin,typ,men,acc,otp1;
		float bal ;
		
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
			cout<<"\n Press 1 for Change Pin ";
			cout<<"\n Press 2 for Display Balance";
			cout<<"\n Press 3 for Cash Withdrawal";
			cout<<"\n Press 4 for Cash Deposit";
			cin>>men;	
		}
		
		
		void displaybal()
		{
			cout<<"\nYour Savings  ";	
		}
};
int main()
{
	int men;
	ATM a;
	cout<<"\n\t\t************ WELCOME TO MALYA BANKS PRIVATE LIMITED ************";
	cout<<"\n\t\t\tThe\tSafest\tBank\tfor\tYour\tMoney\n\n";
	cout<<"\n\t\t\tPlease Insert Your Card ";
	
	a.menu();
	switch (men)
	{
		case 1: cout<<"\nEnter Your Account No. To reset The Pin";
				cin>>a.acc;
				if(a.accno==a.acc)
				{
					cout<<"\nWe Have sent you an OTP Enter it to Confirm : ";
					cin>>a.otp;
					if(a.otp==a.otp1)
					{
						cout<<"\nEnter Your New Pin : ";
						cin>>a.sp;
					}
					else
					{
						cout<<"\nEntered OTP is Incorrect!!! We cannot Process Further...";
					}
				}
				else
				{
					cout<<"\nEntered Account No does not match with the card!!! We Cannot Process Further...";
				}
				
				break;
				
	}
	a.type();
	
	a.validate();
	return 0;
}