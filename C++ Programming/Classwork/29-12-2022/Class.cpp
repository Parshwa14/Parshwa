#include <iostream>
using namespace std;

class Student
{
	public:															//access specifier(modifier)
	int a = 10;														//member of class
};

int main()
{
	Student stud;													//object creation
	cout<<stud.a;
	return 0;
}