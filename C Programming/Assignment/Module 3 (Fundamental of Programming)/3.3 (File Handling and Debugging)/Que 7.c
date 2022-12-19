//Que 7 : Write a program to Find out length of string without using inbuilt function.

#include <stdio.h>

void main()
{
	char str[30];
	int i,len=0;													
	
	printf("\nEnter a string of your choice : ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)													//using len variable to obtain the length of the string
	{																			// we are using the for loop till the last character of the string 
		len++;																	//here count of 'i' will show us the length of the string as the loop runs
	}
	
	printf("\n\nYou entered the string [%s] ",str);
	printf("And it\'s the length is %d",len);
}