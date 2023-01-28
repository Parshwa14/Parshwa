#include<iostream>
using namespace std;


	template <typename T>
	T add(T a,T b)
	{
		return a+b;
	}

int main()
{
	cout<<"\nAdd Using Integer Type : "<<add<int>(10,20);
	cout<<"\nAdd Using Float Type : "<<add<float>(45.54f,69.96f);
	cout<<"\nAdd Using String Type : "<<add<string>("Parshwa ","Bhavsar");
	return 0;
}