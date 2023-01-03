/*Que 2	Define a class to represent a bank account. Include the following members:   
			1.	Data Member:   
			-Name of the depositor   
			-Account Number   
			-Type of Account   
			-Balance amount in the account   
			2.	Member Functions  
			-To assign values  
			-To deposited an amount   
			-To withdraw an amount after checking balance   
			-To display name and balance  
*/

#include <iostream>
using namespace std;

class Bank
{
	public:														//access modifer
	double acc_no;
	float bal;													//class members
	string name,type;	
	
	void assign()												//function for assiging values
	{
		cout<<"\nEnter Your Name : ";
		getline(cin,name);
		cout<<"\nEnter Account Number : ";
		cin>>acc_no;
		cout<<"\nEnter Account Type(Savings/Current) : ";
		cin>>type;
		cout<<"\nEnter Amount of your first deposit : ";
		cin>>bal;
	}
	
	void deposit()												//function to deposit the money
	{
		int b;
		cout<<"\nEnter an Amount to Deposit : ";
		cin>>b;
		bal += b; 
		cout<<"\nYour Amount is Successfully Deposited.";
		cout<<"\n________________________________";
		cout<<"\nUpdated Total Balance : "<<bal;
	}
	
	void withdraw()													
	{
		int w;													//function to withdraw money
		cout<<"\nYour Balance : "<<bal;
		cout<<"\nEnter an Amount to Withdraw from Your Account : ";
		cin>>w;
		bal -= w;
		cout<<"\nYou have Successfully Withdrawn the Amount.";
		cout<<"\n________________________________";
		cout<<"\nUpdated Total Balance : "<<bal;
	}
	void inf()
	{															//function to display personal info
		cout<<"\nName : "<<name;
		cout<<"\nAccount Number :"<<acc_no;
		cout<<"\nAccount Type : "<<type;
		cout<<"\nBank Balance : "<<bal;
	}
};
int main()
{	
	int choice;												
	Bank info;																//object creation
	cout<<"\n\t\t************ MALYA BANKS PRIVATE LIMITED ************";
	cout<<"\n\t\t\tThe Safest Bank for Your Money\n\n";
	info.assign();															//calling a function
	cout<<"\n_________________________________________________________________";
	cout<< "\n\n1 for Deposit. \n2 for Withdraw. \n3 for Personal Information.\n";
	cin>>choice;
	
	
	//using if else to select the option and calling functions in it
	if(choice == 1)
	{
		cout<<"\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
		info.deposit();
	}
	else if(choice == 2)
	{	
		cout<<"\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
		info.withdraw();
	}
	else if(choice == 3)
	{
		cout<<"\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
		info.inf();
	}
	else
	{
		cout<<"\nInvalid Input!!";
	}
	return 0;
}