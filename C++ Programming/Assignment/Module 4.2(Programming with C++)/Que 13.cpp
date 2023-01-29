//Que 13. Write a program to find the max number from given two numbers using friend function.

#include<iostream>
using namespace std;

class Maxnum
{
	private:
		int a,b;												//private members
		friend void mxx(Maxnum);								//friend function to access private members
	public:
		
		Maxnum(int a,int b)										//constructor
		{
			this->a=a;
			this->b=b;
			
		}
		
};

void mxx(Maxnum m)
{
	if(m.a>m.b)																	//method for max number
	{
		cout<<"\nMax Number from the Given two is : "<<m.a;
	}
	else
	{
		cout<<"\nMax Number from the Given two is : "<<m.b;
	}
	
}
int main()
{
	Maxnum m(16,9);													//calling constructor
	mxx(m);															//calling the method with object
	return 0;
}