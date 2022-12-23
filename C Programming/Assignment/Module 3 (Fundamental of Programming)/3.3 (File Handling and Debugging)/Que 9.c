//Que 9  : Write a program of structure employee that provides the following information -print and display empno, empname, address and age.

#include <stdio.h>


struct Employee_info														//structure declaration and declaring member declaration
{
	int empno;
	char empname[20];
	int age;
	char address[100];
};

void main()
{
	struct Employee_info emp;
	
	printf("\nEnter Employee ID : ");										//asking user to enter the details 
	scanf("%d",&emp.empno);
	
	printf("\nEnter Employee Name : ");
	scanf("%s",&emp.empname);
	
	printf("\nEnter Employee Age : ");
	scanf("%d",&emp.age);
	
	printf("\nEnter Employee Address : ");
	scanf("%s",&emp.address);
	
	printf("\n Employee ID : %d ",emp.empno);
	printf("\n Employee Name : %s",emp.empname);							//displaying the value entered
	printf("\n Employee Age : %d",emp.age);
	printf("\n Employee Address : %s",emp.address);

}