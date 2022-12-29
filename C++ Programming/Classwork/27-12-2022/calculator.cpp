#include <iostream>
using  namespace std;

int main()
{
	int a,b,op;
	cout<<"Enter A : ";
	cin>>a;
	cout<<"\nEnter B : ";
	cin>>b;
	
	cout<<"\nA = "<<a<<"\nB = "<<b;
	
	cout<<"\nEnter 1 for Addition \nEnter 2 for Subtraction \nEnter 3 for Multiplication \nEnter 4 for Division";
	cin>>op;
	
	switch(op)
	{
		case 1 : cout<<"\nAddition : "<<(a+b);
				break;
		case 2 : cout<<"\nSubtraction : "<<(a-b);
				break;
		case 3 : cout<<"\nMultiplication : "<<(a*b);
				break;
		case 4 : cout<<"\nDivision : "<<((float)a/b);
				break;
		default : cout<<"\nEnter Valid Input!";
				break;
	}
	return 0;
}