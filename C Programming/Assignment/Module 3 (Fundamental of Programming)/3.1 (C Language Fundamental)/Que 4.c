//Que 4 WAP to find simple interest.

#include <stdio.h>

void main()
{
	float principal,rate,time;
	
	printf("\nEnter the Principal Amount :");
	scanf("%f",&principal);
	
	printf("\nEnter the Rate of  Interest :");
	scanf("%f",&rate);
	
	printf("\nEnter The Time Duration in Years :");
	scanf("%f",&time);
	
	printf("\nSimple Interest = %f",((principal*rate*time)/100));
	
}