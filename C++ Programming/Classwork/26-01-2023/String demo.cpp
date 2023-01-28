#include <iostream>
using namespace std;
int main()
{
	string name1 = "Parshwa ";
	string name2;
	cout<<"Name 1 : "<<name1;
	name2 = name1;
	cout<<"\nName 2 : "<<name2;
	cout<<"\nString Concatenate : "<<name1 + name2;
	int len = name2.size();
	cout<<"\nSize of String is : "<<len;
}