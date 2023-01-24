//Que 8  Write a program to Mathematic operation like Addition, Subtraction, 
//Multiplication, Division Of two number using different parameters and Function Overloading.


#include<iostream>
using namespace std;


class Operation
{
	public:
		int a,b;
		
		void maths(int a)
		{
			cout<<"\nAddition is : "<<(a+b);
		}
		
		int maths(int b)
		{
			return (a-b);
		}
		
		void maths(int a,int b)
		{
			cout<<"\nMultiplication is : "<<(a*b);
		}
		
		void maths()
		{
			int a = 10,b = 15;
			cout<<"\nDivision is : "<<((float)a/b);
		}
		
		
	void get()
	{
		cout<<"\nEnter A : ";
		cin>>a;
		cout<<"\nEnter B : ";
		cin>>b;
	}
};

int main()
{
	Operation m;
	m.get();
	m.maths(5);
	m.maths(10);
	m.maths(10,12);
	m.maths();
	return 0;
}