//function category 3 with return and with parameter

#include <stdio.h>

int  add(int a,int b)
{
	printf("\nIn function \nA =%d \nB= %d",a,b);
	return a+b;
}

void main()
{
	int res;
	int a,b;
	
	printf("\nEnter value of A :");
	scanf("%d",&a);
	printf("\nEnter value of B :");
	scanf("%d",&b);	
	
	res = add(a,b);
	printf("\n%d",res);
	
	if(res%2==0)
	{
		printf("\nResult is Even.");
	}
	else
	{
		printf("\nResult is Odd.");
	}
}

