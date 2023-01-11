//Que 6 Create a class person having members name and age.
//Derive a class student having member percentage. Derive another class teacher having member salary.
//Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance).



#include <iostream>
using namespace std;
class Person																			//Parent class
{
	public:
		string name;
		int  age;
};

class Student																			//Parent class
{
	public:
		float per;	
};

class Teacher:public Person,public Student												//multiple inheritance(child class)
{
	public:																
		float sal;	
	
		void putDetails()
		{
			cout<<"\nEnter Name : ";
			getline(cin,name);
			cout<<"\nEnter Age : ";
			cin>>age;														//this method is for taking input from user 
			cout<<"\nEnter Percentage :";
			cin>>per;
			cout<<"\nEnter Salary : ";
			cin>>sal;
		}
	
		
		void showDetails()
		{
			cout<<"\nName : "<<name;
			cout<<"\nAge : "<<age;
			cout<<"\nPercentage : "<<per<<" %";								//this method is to display the details entered by user
			cout<<"\nSalary : "<<sal;
		}
};


int main()
{
	Teacher t;																//object creation
	cout<<"\n ";
	t.putDetails();															//calling the methods
	t.showDetails();
	
	
	return 0;
}