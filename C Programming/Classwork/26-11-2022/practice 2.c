#include <stdio.h>
//Calculator using scanf and printf
void main()
{
	int a,b;
	
	printf("\n\xB2\xB2\xB2\xB2\xB2 CALCULATOR \xB2\xB2\xB2\xB2\xB2\n");
    
	
	printf("Enter the value of A :");
	scanf("%d",&a);
	
	printf("Enter the value of B :");
	scanf("%d",&b);
	
	printf("\nA = %d, \nB = %d",a,b);
	
	printf("\nAddition = %d", (a+b));
	printf("\nSubtration = %d", (a-b));
	printf("\nMultipliation = %d", (a*b));
	printf("\nDivision = %.3f", ((float)a/b));
	
}