//Que 8  Write a program to Mathematic operation like Addition, Subtraction, 
//Multiplication, Division Of two number using different parameters and Function Overloading.


#include<iostream>
using namespace std;

class Calculate
{
	public:
		
		int math(int a, int b)							//different method with different parameters 
		{												//function overloading
			return (a+b);
		}
		
		float math(float a,float b)
		{
			return (a-b);
		}
		
		int math(float a,int b)
		{
			return (a*b);
		}
			
		float math(int a,float b)
		{
			return (a/b);
		}
		
};

int main()
{
	int a = 10,b = 5;
	float c = 20,d = 15;
	Calculate cal;
	cout<<"\nAddition is : "<<cal.math(a,b);
	cout<<"\nSubtraction is : "<<cal.math(c,d);
	cout<<"\nMultiplication is : "<<cal.math(c,a);
	cout<<"\nDivision is : "<<cal.math(a,c);
	return 0;
}