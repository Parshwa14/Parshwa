//Que 12. Write a program to swap the two numbers using friend function without using third variable 

#include<iostream>
using namespace std;

class Swap
{
	private:
		int a,b;
		friend void display(Swap);									// friend function
	public:
		Swap(int a,int b)											
		{
			this->a=a;
			this->b=b;
		}
		
};
void display(Swap s)
	{
		cout<<"\n\t____Before Swapping____"<<"\n\n\tA : "<<s.a<<"\tB : "<<s.b<<"\n";
		s.a = s.a + s.b;
		s.b = s.a - s.b;
		s.a = s.a - s.b;
		
		cout<<"\n\n\n\n\t____After Swapping____"<<"\n\n\tA : "<<s.a<<"\tB : "<<s.b<<"\n";
	}
	
int main()
{
	Swap s(5,4);
	display(s);
	return 0;
	}	