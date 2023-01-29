//Que 11. Write a program to calculate the area of circle, rectangle and triangle using Function Overloading   
//	Rectangle: Area * breadth   
//	Triangle: ½ *Area* breadth  
//	Circle: Pi * Area *Area


#include<iostream>
using namespace std;

class Area
{
	public:
		float res;
		float pi = 3.14;
		
		//method for circle
		float shape(float r)
		{
			res = pi*r*r;
			return res;
		}
		
		//method rectangle
		float shape(float l,float b)
		{
			res = l*b;
			return res;
		}
		
		//method for triangle
		float shape(float c,float l,float b)
		{
			res = 0.5*l*b;
			return res;
		}
};

int main()
{
	float r,l,b;
	Area a;
	
	cout<<"\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 AREA OF DIFFERENT SHAPES \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n";
	
	
	//Triangle
	cout<<"\nEnter Height of Triangle :";						//taking input from the user
	cin>>l;
	cout<<"\nEnter Base of Triangle : ";
	cin>>b;
	cout<<"\nArea of Triangle : "<<a.shape(0.5,l,b)<<" sq. mtr";
	cout<<"\n_________________________________________________________\n\n";
	
	//Circle
	cout<<"\nEnter Radius of Circle : ";						//taking input from the user
	cin>>r;
	cout<<"\nArea of Circle : "<<a.shape(r)<<" sq. mtr";
	cout<<"\n_________________________________________________________\n\n";
	
	//Rectangle
	cout<<"\nEnter Length of Rectangle : ";						//taking input from the user
	cin>>l;
	cout<<"\nEnter Breadth of Rectangle : ";
	cin>>b;
	cout<<"\nArea of Rectangle : "<<a.shape(l,b)<<" sq. mtr";

	return 0;
}