//Que 4.1 Write a program to show Monday to Sunday using Switch case.

#include <stdio.h>

void main()
{
	char x;
	
	printf("\nEnter 'm' for Monday.");
	printf("\nEnter 't' for Tuesday.");
	printf("\nEnter 'w' for Wednesday.");
	printf("\nEnter 'h' for Thursday.");
	printf("\nEnter 'f' for Friday.");
	printf("\nEnter 's' for Saturday.");
	printf("\nEnter 'i' for Sunday.");
	
	
	scanf("%c",&x);
	
	switch(x)
	{
		case 'M':
		case 'm': printf("\nIt is Monday.");
					break;
			
		case 'T':
		case 't': printf("\nIt is Tuesday.");
					break;
					
		case 'W':
		case 'w': printf("\nIt is Wednesday.");
					break;
					
		case 'H':
		case 'h': printf("\nIt is Thursday.");
					break;
					
		case 'F':
		case 'f': printf("\nIt is Friday.");
					break;
		
		case 'S':
		case 's': printf("\nIt is Saturday.");
					break;
		
		case 'I':
		case 'i': printf("\nIt is Sunday.");
					break;
		
		default : printf("\nIncorrect Choice...");
					break;
	}
}