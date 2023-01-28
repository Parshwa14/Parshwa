//Que 9 Write a Program of Two 1D Matrix Addition using Operator Overloading.

#include <iostream>
using namespace std;

class AddMatrix
{
	public:
		int arr1[5],arr2[5],i,j;
		
		void setarr1()
		{
			for(i=0;i<5;i++)
			{
				cout<<"\nEnter Array 1 Element : ";
				cin>>arr1[i];
			}
		}
		
		void setarr2()
		{
			for(j=0;j<5;j++)
			{
				cout<<"\nEnter Array 2 Element : ";
				cin>>arr2[j];
			}
		}
		
		void showmat1()
		{
			cout<<"\nElements of Array 1 : \n\n";
			for(i=0;i<5;i++)
			{
				cout<<arr1[i]<<"\t";
			}
			cout<<"\n\n\n";
		}
	
	
		void showmat2()
		{
			cout<<"\nElements of Array 2 : \n\n";
			for(j=0;i<5;j++)
			{
				cout<<arr2[j]<<"\t";
			}
				cout<<"\n\n\n";
		}
};

int main()
{
	AddMatrix a1;
	a1.setarr1();
	a1.setarr2();
	a1.showmat1();
	a1.showmat2();
	return 0;
}