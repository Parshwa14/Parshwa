#include <stdio.h>

/*	
	Structure : It is a name at memory, which stores
				multiple elements of multiple types.
				
				- to use structure, we declare with 
				  struct keyword.
	
	syntax: 
				  
	struct <structure-name>
	{
		members;
	};
*/

struct Employee
{
	int eid;
	char ename[20];
	float esal;
};

void main()
{
	struct Employee emp;
	
	printf("\nEnter ID : ");
	scanf("%d",&emp.eid);
	
	printf("\nEnter Name : ");
	scanf("%s",&emp.ename);
	
	printf("\nEnter Salary : ");
	scanf("%f",&emp.esal);
	
	printf("\n\n\n::::::::::  Employee Details ::::::::::\n\n\n");
	
	printf("\nID : %d",emp.eid);
	printf("\nName : %s",emp.ename);
	printf("\nSalary : %.2f",emp.esal);
	
	printf("\n\nThe size of the Structure is :  %d",sizeof(emp));
	
}