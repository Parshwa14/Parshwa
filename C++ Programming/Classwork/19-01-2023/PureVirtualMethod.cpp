/*
Pure Virtual Method(Function) :

- These Functions are declared with "Virtual" keyword.
- They have the Declaration.
- They do not contain any body.

syntax:

	virtual void show();
	
	IMPORTANT RULE:
	If you are declaring a pure virtual function, then it is complusory to implement that function 
	in the class, which is inherting it.
*/

#include<iostream>
#include<conio.h>
using namespace std;

class Fan
{
	public:
		//Non-Virtual Method(Concrete Method)

		void install()
		{
			cout<<"\nThe fan is OFF Now.";
		}
		
		//Virtual Method(Non-Concrete Method)
		virtual void OnButton();		
};

class Switch:public Fan
{
	public:
		void OnButton()												//body of virtual method declared in the parent class
		{
			cout<<"\nThe fan is Rotating.";
		}
};
int main(char anykey)												//to take input of only one character 
{
	
	int choice;
	Switch s;
	do
	{
	
	cout<<"\nPress 1 to turn ON. \nPress 2 to turn OFF.";
	cout<<"\nEnter Your Choice :";
	cin>>choice;
	
	switch(choice)
	{
		case 1: s.OnButton();
			   break;													//switch case 
			   
		case 2: s.install();
			   break;
		
		default :cout<<"\nInvalid Choice!!";
			   break;
			   
	}
}
while(choice==2);
cout<<"\n\n\t**SAVE ELECTRICITY by TURNING OFF FAN If it is UNNECESSARILY ON***";
cout<<"\n\nPress ANYKEY to turn OFF the fan :";					//To save electricity we will ask user to turn the fan off
anykey = getch();
cout<<"\n\n\n\t\2\2\2\2THANKS FOR YOUR CONTRIBUTION IN SAVING ENERGY\2\2\2\2    ";
s.install();


	return 0;
}