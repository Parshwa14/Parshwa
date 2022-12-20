//Que 3 : Write a program to find reverse of string using recursion.

#include <stdio.h>


void reverseSentence() 
{
    char c;								
    scanf("%c", &c);													//accepting the inpuot from user		
    if (c != '\n') 														//condition for further opertaion if c is char then the code will work 
	{
        reverseSentence();												//calling the function in itself (recursion)
        printf("%c", c);												//printing the output one by one letter as we have used the char data type 
    }																	//it will work with only one char at the time
}


void main() 
{
   	printf("Enter a sentence: ");										//showing msg for user to input the string	
    reverseSentence();													//calling the function
    
}


	
