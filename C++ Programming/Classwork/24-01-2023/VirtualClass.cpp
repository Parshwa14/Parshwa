#include <iostream>
using namespace std;

class A
{
	public:
		
		void msg()
		{
			cout<<"\nHello from Class A.";
		}
};

class B : virtual public A     //virtual class
{
		
};

class C : virtual public A     //virtual class
{
};

class D : public B, public C
{
	
};

int main()
{
	D obj;
	obj.msg();
	return 0;
}