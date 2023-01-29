//Que 9 Write a Program of Two 1D Matrix Addition using Operator Overloading.

#include <iostream>
using namespace std;

class AddMatrix
{
	public:
		int mt[5],res[5],i,j;
		
		void setmat()
		{													//method to take input
			for(i=0;i<5;i++)
			{
				cin>>mt[i];
			}
		}
		
		
		void showmat()
		{													//method to show the input
			for(i=0;i<5;i++)
			{
				cout<<"\t"<<mt[i];
			}
			cout<<"\n\n\n";
		}
		
		AddMatrix operator + (AddMatrix x)
		{
			AddMatrix a1;
			for(i=0;i<5;i++)
			{
				a1.res[i]=mt[i]+x.mt[i];								//operator overlaoding
			}
			
			for(i=0;i<5;i++)
			{
				cout<<"\t"<<a1.res[i];	
			}	
			
			return a1;
		}
	
	
		
};

int main()
{
	AddMatrix a1,a2;
	cout<<"\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Addition of Two Matrix \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n";
	//getting input for the elements of both the matrix from user
	cout<<"\nEnter Elements of Matrix 1 : ";
	a1.setmat();
	cout<<"\n\n_____________________________________________________________________";
	cout<<"\nEnter Elements of Matrix 2 : ";
	a2.setmat();
	cout<<"\n\n_____________________________________________________________________";
	
	//displaying the entered input by the user
	cout<<"\nMatrix 1 Elements : ";
	a1.showmat();
	cout<<"\n\n_____________________________________________________________________";
	cout<<"\nMatrix 2 Elements : ";
	a2.showmat();
	cout<<"\n\n_____________________________________________________________________";
	
	//displaying the addition of the two matrix 
	cout<<"\nAdditions of two Matrix : ";
	a1+a2;

	return 0;
}