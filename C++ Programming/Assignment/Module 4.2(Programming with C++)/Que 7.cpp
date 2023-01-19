//Que 7 Assume that the test results of a batch of students are stored in three different classes. 
//	  Class Students are storing the roll number. Class Test stores the marks obtained in two subjects 
//	  and class result contains the total marks obtained in the test. The class result can inherit the details 
//	  of the marks obtained in the test and roll number of students. (Multilevel Inheritance)  


#include<iostream>
using namespace std;

class Student
{
	public:												//Parent class
		int Rollno;
};

class Test:public Student
{														//child class (Parent class for Result)
	public:
		int Math,Sci;
		
};

class Result:public Test
{														//child class
	public:
		int Total;
		
		
		void set()												//method for getting input from user
		{
			cout<<"\nEnter Roll Number :";
			cin>>Rollno;
			cout<<"\nEnter Maths Marks :";
			cin>>Math;
			cout<<"\nEnter Science Marks :";
			cin>>Sci;
		}
		
		void show()
		{
			cout<<"\nRoll no : "<<Rollno;						//method for showing the inputs and the data
			cout<<"\nMath Marks : "<<Math;
			cout<<"\nScience Marks : "<<Sci;
			cout<<"\nTotal Marks : "<<(Math+Sci);
		}
		
};

int main()
{
	Result Res;													//object creation of the derived class
	Res.set();
	Res.show();
	return 0;
}