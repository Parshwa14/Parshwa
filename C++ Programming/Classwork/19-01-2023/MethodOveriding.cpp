#include<iostream>
using namespace std;

class A
{
	public:
		
		A()
		{
			cout<<"\nA's Constructor Called.";
		}
		
		void show()
		{	
			cout<<"\nA's Method called.";
		}
};



class B:public A
{
	public:
		
		B()
		{
			cout<<"\nB's Constructor Called.";
		}
		
		void show()
		{
			A::show();									//scope resolution to call the base class's method
			cout<<"\nB's Method called.";
		}

};



class C:public B
{
	public:
		
		C()
		{
			cout<<"\nC's Constructor Called.";
		}
	
		void show()
		{
			B::show();							        //scope resolution to call the base class's method
			cout<<"\nC's Method called.";
		}
};


int main()
{
	C obj;
	cout<<"\n";
	obj.show();
	return 0;
}