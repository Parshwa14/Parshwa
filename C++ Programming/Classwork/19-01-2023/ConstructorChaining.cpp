/*Here all thre object will be called because C is inherited from B and 
B is inherited from A so All the Constructor are called.This is called as Contructor Chaining.
*/
#include<iostream>
using namespace std;


class A
{
	public:
		
		A()
		{
			cout<<"\nA's Constructor Called.";
		}
};

class B:public A
{
	public:
		
		B()
		{
			cout<<"\nB's Constructor Called.";
		}
};

class C:public B
{
	public:
		
		C()
		{
			cout<<"\nC's Constructor Called.";
		}
};
int main()
{
	C obj;					
	return 0;
}