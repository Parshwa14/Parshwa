#include <iostream>
using namespace std;

class Side
{
	protected:
		int l;
	public:
		void setVal(int x)
		{
			l = x;
		}
};

class Square : public Side
{
	public:
		int sqr()
		{
			return l*l;
		}
};

class Cube : public Side
{
	public:
		int cub()
		{
			return l*l*l;
		}
};

int main()
{
	Square s;
	int n;
	cout<<"\nEnter Value : ";
	cin>>n;
	s.setVal(n);
	int s1 = s.sqr();
	cout<<"\nSquare is : "<<s1;
	
	if(s1%2==0)
	{
		cout<<"\nSquare is Even.";
	}
	else
	{
		cout<<"\nSquare is Odd.";
	}
	
	Cube c;
	c.setVal(n);
	int c1 = c.cub();
	
	cout<<"\nCube is : "<<c1;
	(s1>c1)?cout<<"\nSquare is Greater.":cout<<"\nCube is Greater.";
	
	return 0;
}