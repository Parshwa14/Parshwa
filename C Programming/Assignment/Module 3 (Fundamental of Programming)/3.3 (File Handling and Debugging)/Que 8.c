//Que 8 : Write a program to reverse a string and check that the string is palindrome or not.

#include <stdio.h>
#include <string.h>

void main()
{
	char str[20];																	//declaring two strings	
	char revv[20];
	
	printf("\nEnter a Word : ");													//taking input of the string from user
	scanf("%s",&str);
	
	strcpy(revv,str);																//copying the string to the other string	
	strrev(revv);																	//reversing the string which we copied
	
	
	if(strcmp(str,revv) == 0)														//comparing main string and reverse string with if else statement
	{
		printf("\nThe String is Palindrome.");
	}
	else
	{
		printf("\nThe string is not Palindrome");
	}
}