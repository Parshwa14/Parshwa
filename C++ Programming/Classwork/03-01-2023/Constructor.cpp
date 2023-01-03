#include<iostream>
using namespace std;

class Sample
{
	public:
		string fname,lname;
		int age;
		
		Sample()
		{																		//Default Constructor
			cout<<"\n\nDefault Constructor Called.\n\n";
		};
		
		Sample(string f,string l,int a)
		{																		//Parameterized Constructor
			cout<<"\n\nParameterized Constructor Called.\n\n";
			fname = f;
			lname = l;
			age = a;
		}
		
		Sample(const Sample &obj)
		{																		//Copy Constructor
			cout<<"\n\nCopy Constructor Called\n\n";							//it takes object as parameter
			fname = obj.fname;
			lname = obj.lname;
			age = obj.age;
		}
		
		void display()															//method or function
		{
			cout<<"\nFirst name :"<<fname<<"\nLast name :"<<lname<<"\nAge : "<<age;
		}
};
int main()
{
	Sample vivek,obj1("Om","Shah",21);								//calling default and then parameterized constructor
	Sample obj2("Ashutosh","Upadhyay",22);							//calling parameterized constructor
	obj1.display();													//function to display the data members
	obj2.display();
	Sample obj3(obj1);
	obj3.display();
	return 0;
	
}