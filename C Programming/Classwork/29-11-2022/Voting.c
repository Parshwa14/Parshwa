#include <stdio.h>

void main()
{
	int age;
	int a;
	printf("Enter Your Age:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("Congrats, You can Vote.");
	}
	else
	{
		a = 18-age;
		printf("You have to wait for %d years to Vote.",a);
	}
}