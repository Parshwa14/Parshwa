//Que 4 : Write a program to find factorial using recursion.

#include<stdio.h>  
  
int fact(int n)  
{  
  if (n == 0)  													//the value entered by the user is checked for 0 ans is 1
    return 1;  													
  else  	
    return(n * fact(n-1)); 										//other than 0 value of n it will count from the equation 
}  
   
void main()  
{  
  int number;  
  int f;  														//the input taken from the user
  printf("Enter a number: ");  
  scanf("%d", &number);   
   
  f = fact(number);  											//stored in a variable called f which is equal to the function factorial and the value of 
  printf("\n\nFactorial of %d is %d\n", number, f);  			//number is passed as n in the function

}  