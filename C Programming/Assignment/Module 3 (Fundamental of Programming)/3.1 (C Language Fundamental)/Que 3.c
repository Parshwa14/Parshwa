//Que 3 WAP to find area of circle, rectangle and triangle.

#include <stdio.h>

void main()

{
	int n;
	float rad,len,wid,sid;      //here rad = radius(circle),len,wid = length and width(rectangle),sid = side (square)
	printf("\tFind the Area of :");
	printf("\n\t1 for Circle");
	printf("\n\t2 for Rectangle");
	printf("\n\t3 for Square");
	scanf("\n%d",&n);
	
	if(n==1)
	{
		printf("\n\tYou chose to find Area of Circle.");
		printf("\n\tEnter Radius of Circle :");
		scanf("\n%f",&rad);													//area of circle
		printf("\n\tArea of Circle = %.2f sq. mtr",(3.141*rad*rad));
	}
	else if(n==2)
	{
		printf("\n\tYou chose to find Area of Rectangle.");
		printf("\n\tEnter Length of Rectangle :");
		scanf("\n%f",&len);													//area of rectangle
		printf("\n\tEnter Width of Rectangle :");
		scanf("\n%f",&wid);
		printf("\n\tArea of Rectangle = %.2f sq. mtr",(len*wid));
	}
	else if(n==3)
	{
		printf("\n\tYou chose to find Area of Square.");
		printf("\n\tEnter Length of Square :");                            	//area of square
		scanf("\n%f",&sid);
		printf("\n\tArea of Square = %.2f sq. mtr",(sid*sid));
	}
	else
	{
		printf("\n\tSelect Valid Option!");
	}
	
}