//Que 3 Write a program to find the multiplication values and the cubic values using inline function.

#include <iostream>
using namespace std;

class Maths
{
	public:
	int a;
	
	void getA()									//function for getting an input
	{
		cout<<"\nEnter A :";
		cin>>a;
	}	
	
	void Cube()									//function for cube				
	{
		cout<<"\nThe Cube of A is : "<<(a*a*a);
	}
};
int main()
{
	Maths m;									//creation of object
	m.getA();									//calling functions(methods)
	m.Cube();
	return 0;
}  