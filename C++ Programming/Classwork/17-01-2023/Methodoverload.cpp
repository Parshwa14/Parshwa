#include <iostream>
using namespace std;

class Moverload
{
	public:
		
		void common()
		{
			int a = 5,b = 9;
			
			cout<<"\nAddition is :"<<(a+b);
		}
		
		void common(int a)
		{
			if(a%2==0)
			{
				cout<<"\nIt is Even.";
			}
			else
			{
				cout<<"\nIt is Odd";
			}
		}
		
		void common(int a, int b)
		{
			cout<<"\nMultiplication is : "<<(a*b);
		}
};

int main()
{
	Moverload mo;
	mo.common();
	mo.common(5);
	mo.common(26,98);
	return 0;
}