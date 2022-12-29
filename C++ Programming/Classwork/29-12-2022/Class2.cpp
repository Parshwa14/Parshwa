#include <iostream>
using namespace std;

class Student
{
	public:															//access specifier(modifier)
	int r_no;
	string name;													///members of class
	float rank;
	
	void getDetails()
	{
		cout<<"\nEnter Roll no. :";
		cin>>r_no;
		cout<<"\nEnter Name :";
		cin>>name;
		cout<<"\nEnter Rank :";
		cin>>rank;														//function in class
	}
	
	void showDetails()
	{
		cout<<"\nRoll no. : "<<r_no;
		cout<<"\nName :"<<name;
		cout<<"\nRank :"<<rank;
	}
};

int main()
{
	Student std;										//object creation
	std.getDetails();
	std.showDetails();
	return 0;	
}