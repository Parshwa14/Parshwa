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
		fflush(stdin);													
		cout<<"\nEnter Name :";
//		cin>>name;														//it uses space as separator so we cannot add full name
		getline(cin,name);												//to get a line as a object including spaces
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