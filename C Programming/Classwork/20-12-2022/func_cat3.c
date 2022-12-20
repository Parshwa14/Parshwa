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
	res = add(54,56);
//	printf("\n%d",add(47,87));
	printf("\nAddition = %d",res);
	
	if(res%2==0)
	{
		printf("\nThe number is even.");
	}
	else
	{
		printf("\nThe number is Odd.");
	}
}

