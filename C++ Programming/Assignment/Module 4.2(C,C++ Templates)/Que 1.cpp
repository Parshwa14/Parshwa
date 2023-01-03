//Que 1 Write a program to create a simple calculator using class.

#include<iostream>
using  namespace std;

class Calculator
{
	public:													//access specifier(modifier)
	int a,b;												//class members
	
	void getinput()
	{														//to get input for number a and b
		cout<<"\nEnter A : ";
		cin>>a;
		cout<<"\nEnter B : ";
		cin>>b;		
	}
	void showinput()
	{														//to show the entered a and b
		cout<<"\nA = "<<a<<"\nB = "<<b;
	}
	int add()
	{														//function for addition
		return (a+b);
	}
	int subtract()
	{														//function for subtraction
		return (a-b);
	}
	int multi()
	{														//function for multiplication
		return(a*b);
	}
	float divide()
	{														//here we took float for division function
		if (b==0)											//because the answer after the divison maybe in float type
		{													//so that we can get the exact answer
			cout<<"\nDivision by zero."<<endl;
			return 0;
		}
		else
		{
			return ((float)a/b);
		}
	}
		
};
int main()
{	

	int op;	
	cout<<"\n\t\tXxXxXxXxXxXxXxXxX\xB2\xB2 CALCULATOR \xB2\xB2XxXxXxXxXxXxXxXxX\n\n";
	Calculator cal;											//created an object for class
	cal.getinput();											//calling the function for input
	cal.showinput();										//calling the function to show input values
	cout<<"\nEnter 1 for Addition."<<"\nEnter 2 for Subtraction."<<"\nEnter 3 for Multiplication."<<"\nEnter 4 for Divsion.";
	cout<<"\n\nEnter An Operator\n";						//to select the operator 
	cin>>op;
	
	switch(op)
	{
		case 1 : cout<<"\nAddition = "<<cal.add();								//using swtich case for different operations
				break;
		
		case 2 : cout<<"\nSubtraction = "<<cal.subtract();
				break;
				
		case 3 : cout<<"\nMultiplication = "<<cal.multi();
				break;
				
		case 4 : cout<<"\nSubtraction = "<<cal.divide();
				break;	
		default : cout<<"\nEnter Valid Choice...";	
				break;
					
	}
	return 0;
}