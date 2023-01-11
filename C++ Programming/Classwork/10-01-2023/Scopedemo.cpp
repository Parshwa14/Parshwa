#include <iostream>
using namespace std;

class Scopedemo
{
	public:
		string name,add="surat";
		int age = 69;
		
		void getName();
		void details();
};

void Scopedemo::getName()
{
	cout<<"\nEnter Name : ";
	getline(cin,name);
}

void Scopedemo::details()
{
	cout<<"\nName : "<<name;
	cout<<"\nAge : "<<age;
	cout<<"\nAddress : "<<add;
}
int main()
{
	Scopedemo s1;
	s1.getName();
	s1.details();
	return 0;
}