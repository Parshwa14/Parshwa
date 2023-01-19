#include <iostream>
using namespace std;

class Lecture
{
	public:
		string f_lecturer,f_sub,f_course;		//data members of the class
		int f_no,i;
		
		Lecture(string a_lecturer,string a_sub,string a_course,int a_no)    //constructor to be called automatically
		{
			f_lecturer = a_lecturer;
			f_sub = a_sub;													//assigning the actual value to the formal data members with the actual data members
			f_course = a_course;
			f_no = a_no;
		}		
		
		void input(string a_lecturer,string a_sub,string a_course,int a_no)
		{
			fflush(stdin);
			cout<<"\n\t\t->Enter Lecturer Name : ";
			getline(cin,f_lecturer);
			cout<<"\n\t\t->Enter Subject Name : ";									//a method to get the input from the user
			getline(cin,f_sub);
			cout<<"\n\t\t->Enter Course Name : ";
			getline(cin,f_course);
			cout<<"\n\t\t->Enter No. of Lectures : ";
			cin>>f_no;
			cout<<"\n________________________________________________________________\n";
		}
		
		void display()
		{
			
			cout<<"\n\t\t->Lecturer Name :  "<<f_lecturer;
			cout<<"\n\t\t->Subject Name : "<<f_sub;									//a method to show the entered value	
			cout<<"\n\t\t->Course Name  : "<<f_course;
			cout<<"\n\t\t->No.of Lectures :  "<<f_no<<"\n";
			cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
			
		}	
		
	
};
int main()
{
		string a_lecturer,a_sub,a_course;							//declaring the data members to access
	int a_no;
	cout<<"\n\t\t    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
	cout<<"\n\t\t    \xB2\xB2\t\t\t\t   \xB2\xB2";
	cout<<"\n\t\t    \xB2   Lecture Management System   \xB2";
	cout<<"\n\t\t    \xB2\xB2\t\t\t\t   \xB2\xB2";
	cout<<"\n\t\t    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";	
	
	Lecture l1(a_lecturer,a_sub,a_course,a_no);
	Lecture l2(a_lecturer,a_sub,a_course,a_no);
	Lecture l3(a_lecturer,a_sub,a_course,a_no);
	Lecture l4(a_lecturer,a_sub,a_course,a_no);
	Lecture l5(a_lecturer,a_sub,a_course,a_no);
	
	
	cout<<"\n\n\n\n\t\tEnter First Lecturer and info.\n";
	l1.input(a_lecturer,a_sub,a_course,a_no);
	cout<<"\n\t\tEnter Second Lecturer and info.\n";
	l2.input(a_lecturer,a_sub,a_course,a_no);
	cout<<"\n\t\tEnter Third Lecturer and info.\n";						//made objects named l1,l2,l3,l4,l5
	l3.input(a_lecturer,a_sub,a_course,a_no);
	cout<<"\n\t\tEnter Fourth Lecturer and info.\n";
	l4.input(a_lecturer,a_sub,a_course,a_no);
	cout<<"\n\t\tEnter Fifth Lecturer and info.\n";
	l5.input(a_lecturer,a_sub,a_course,a_no);   					//using the object taking the inout from the user of daaa
	

	
	cout<<"\n\n";
	cout<<"\n\tThe Entered Details are as Below : ";
	cout<<"\n\t\tFirst Lecture Details:\n";
	l1.display();
	cout<<"\n\t\tSecond Lecture Details:\n";
	l2.display();
	cout<<"\n\t\tThird Lecture Details:\n";
	l3.display();								
	cout<<"\n\t\tFourth Lecture Details:\n";					//using the display method to show the input the entered  by the user
	l4.display();
	cout<<"\n\t\tFifth Lecture Details:\n";
	l5.display();
	
	return 0;
}