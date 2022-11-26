#include <stdio.h>

void main()
{
	int age;
	char  name[20];
	float salary;
	
	printf("\n\t\t\xB2\xB2\xB2\xB2Personal Details \xB2\xB2\xB2\xB2\n");
	
	printf("\nEnter Your Name:");
//	scanf("%s",&name);
	gets(name);
	
	printf("\nEnter Your Age:");
	scanf("%d",&age);
	
	printf("\nEnter Your Salary:");
	scanf("%f",&salary);
	
	printf("\nName is : %s", name);
	printf("\nAge is : %d", age);
	printf("\nSalary is : %.3f",salary);
	
}