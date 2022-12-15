#include <stdio.h>

/*
Recursive Function : A function which calls itself 
					 is called recursive function.

*/

void f1()
{
	
	printf("\nF1 Called");
}

void f2()
{
	f1();
	printf("\nF2 Called");
	f2();
}



void main()   					
{
	f1();							//here the function will run endlessly until the memory is full 
	f2();
}