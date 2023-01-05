//Que 4 Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include <iostream>
using namespace std;

class Calculator
{
	public:
	int a,b,op;
	
	Calculator(int num1,int num2)
	{
		a = num1;									//creating a parameterized constructor
		b = num2;									//assigning the value of  constructor to the class
	}	
	
	void get()
	{
		cout<<"\nEnter A :";cin>>a;						//taking input from user
		cout<<"\nEnter B :";cin>>b;
	}
	void put()
	{								//displaying the value 
		cout<<"\nA = "<<a<<"\tB = "<<b;
		
	}
	
	void opr()
	{													//for selection of operator
		cout<<"\n\n1 for Addition"<<"\n2 for Subtraction"<<"\n3 for Multiplication"<<"\n4 for Division\n";
		cin>>op;
	}
	
	void res()
	{
		switch(op)
		{
				
		case 1 :cout<<"\nAddition = "<<(a+b);					//switch case for different operations
				break;
				
		case 2 :cout<<"\nSubtraction = "<<(a-b);
				break;
				
		case 3 :cout<<"\nMultiplication = "<<(a*b);
				break;
				
		case 4 :cout<<"\nDivision = "<<((float)a/b);
				break;
				
		default :cout<<"\nEnter from above Options!!";
				break;  
		}
		
	}
};
int main()
{
	Calculator a(1,1);				//creation of object so it will call the contructor automatically
	a.get();
	a.put();						//calling the methods/functions 
	a.opr();
	a.res();
	
	
	return 0;
}  