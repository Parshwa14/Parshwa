/* syntex 

			Initialization;
			
			while(Condition)
			{
				statement;
				updation;
			}
			
*/

#include <stdio.h>

void main()
{
	int i=1;     //Initialization
	
	while(i<10)
	{
		printf("\n%d",i);       	//statement
		i++;						// updation (i++ = i+1)
	}
	
}