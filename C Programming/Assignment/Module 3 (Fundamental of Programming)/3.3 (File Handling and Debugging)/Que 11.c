//Que 11 : Write a program to show difference between Structure and Union.

#include <stdio.h>

struct Structure_emp
{
	int seid;																				//declaring the structure and its members
	char sename[20];
	float sesal;
	
};

union Union_emp
{
	int ueid;
	char uename[20];
	float uesal;
};																
void main()
{
	struct Structure_emp semp;
	printf("\n Employee Details by Structure \n\n");
	
	printf("\n Enter Employee ID : ");
	scanf("%d",&semp.seid);
																							//taking inputs from user one be one
	printf("\n Enter Employee Name : ");
	scanf("%s",&semp.sename);
	
	printf("\n Enter Employee Salary : ");
	scanf("%f",&semp.sesal);
	
	printf("\n Employee ID : %d \n Employee Name : %s \n Employee Salary : %.2f\n",semp.seid,semp.sename,semp.sesal);
	
// in union we can display on member at a time
	union Union_emp uemp;
	printf("\n\nEnter Employee Details by Union \n\n");
	
	printf("\nEnter Employee ID : ");
	scanf("%d",&uemp.ueid);
	printf("\nEmployee ID : %d\n",uemp.ueid);
	
	printf("\nEnter Employee Name : ");
	scanf("%s",&uemp.uename);
	printf("\nEmployee Name : %s\n",uemp.uename);
	
	printf("\nEnter Employee Salary : ");
	scanf("%f",&uemp.uesal);
	printf("\nEmployee Salary : %.2f\n",uemp.uesal);
	
	
	
//structure's size determined as total of all members
//union's size determined as the greatest member's size for all the members


	printf("\n\n\n\tStructure Size : %d",sizeof(semp));
	printf("\n\n\n\tUnion Size : %d",sizeof(uemp));
}