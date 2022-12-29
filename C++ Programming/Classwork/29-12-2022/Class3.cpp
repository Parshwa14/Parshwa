#include <iostream>
using namespace std;


class Student
{
	public:															//access specifier(modifier)
	int r_no;
	string name;													///members of class
	float rank;
	
	
		void showDetails(int r_no,string name,int rank)
	{
		cout<<"\nRoll no. : "<<r_no;
		cout<<"\nName :"<<name;
		cout<<"\nRank :"<<rank;
	}
};

int main()
{
	Student std;										//object creation
	int r_no,rank;
	string name;
	
	cout<<"\nEnter Roll no. :";
		cin>>r_no;
		fflush(stdin);													//we can get input from the main function also
		cout<<"\nEnter Name :";
		getline(cin,name);												//to get a line as a object including spaces
		cout<<"\nEnter Rank :";
		cin>>rank;														
	std.showDetails(r_no,name,rank);
	return 0;	
}