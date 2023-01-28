////Que 1. Write a program of to swap the two values using templates.   

#include <iostream>
using namespace std;


template <typename T>
int swap_numbers(T x, T y)							//templates
{
	T t;
	t = x;
	x = y;
	y = t;
	return 0;
}

int main()
{
	int a, b;
	
	cout<<"\n\t\t|||||||||||||||   SWAP NUMBER USING TEMPLATES   |||||||||||||||\n";
	cout<<"\nEnter Number A : ";
	cin>>a;
	cout<<"\nEnter Number B : ";
	cin>>b;
	cout<<"\n::::\t::::\t::::\tBefore Swap\t::::\t::::\t::::\t\n";
	cout<<"\n\t\tA : "<<a<<"\t\tB : "<<b;


	swap_numbers(a, b);																				//calling the function
	cout<<"\n\n\n::::\t::::\t::::\tAfter Swap\t::::\t::::\t::::\t\n";
	cout<<"\n\t\tA : "<<a<<"\t\tB : "<<b;
	return 0;
}
