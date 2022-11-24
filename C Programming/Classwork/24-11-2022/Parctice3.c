#include <stdio.h>

void main()
{
	int n1 = 91, n2 = 23;
	
	printf("\n\xB2\xB2\xB2\xB2\xB2 CALCULATOR \xB2\xB2\xB2\xB2\xB2\n");
	printf("\nA = %d,\tB = %d\n",n1,n2);
	
	printf("\nAddition = %d", (n1+n2));
	printf("\nSubtration = %d", (n1-n2));
	printf("\nMultipliation = %d", (n1*n2));
	printf("\nDivision = %.3f", ((float)n1/n2));
	
}