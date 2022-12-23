//Que 10 : Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age.

#include <stdio.h>

struct Employee 
{
	int empno;
	char empname[20];														//declaration of structure and members
	char address[20];
	int age;
	
};

void main()
{
	struct Employee emp;
	int n,i;
	
	printf("\nEnter the Total Number of Employees : ");
	scanf("%d",&n);															//asking the user number of total employees
	
	for(i=1;i<=n;i++)
	{
		printf("\nEnter Employee [%d] ID. : ",i);
		scanf("%d",&emp.empno);
		printf("\nEnter Employee [%d] Name : ",i);							//taking inputs from the user
		scanf("%s",&emp.empname);
		printf("\nEnter Employee [%d] Address : ",i);
		scanf("%s",&emp.address);
		printf("\nEnter Employee [%d] Age : ",i);
		scanf("%d",&emp.age);
	}
	
	printf("\n\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
	printf("\n\nEmployee Details :\n\n");
	
	for(i=1;i<=n;i++)
	{																						
		printf("\nEmployee [%d] ID : %d",i,emp.empno);						//displaying the values entered by the user
		printf("\nEmployee [%d] Name : %s",i,emp.empname);
		printf("\nEmployee [%d] Address : %s",i,emp.address);
		printf("\nEmployee [%d] Age : %d",i,emp.age);
	}
}