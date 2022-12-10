//Que 4.2 Write a program to show Vowel or Consonant using switch case. 

#include <stdio.h>

void main()
{
	char v;
	
	printf("\nEnter any Alphabet:");
	scanf("%c",&v);
	
	switch(v)
	{
		case 'a':
		case 'A': 
		case 'e':
		case 'E': 
		case 'i':
		case 'I': 															
		case 'o':
		case 'O': 
		case 'u':
		case 'U': printf("\nIt is a Vowel.");
					break;
					
		default : printf("\nIt is consonant.");
					break; 
		
	}
}