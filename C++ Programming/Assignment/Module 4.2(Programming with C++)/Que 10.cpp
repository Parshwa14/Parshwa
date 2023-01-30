//Que 10. Write a program to concatenate the two strings using Operator Overloading.
#include<iostream>
#include<string.h>
using namespace std;

class String
{
        public:
            char str[50];
        
            void input()
            {													//taking string input from user
                cout<<"\n Enter String : ";
                cin.getline(str,50);
	        }
            void display()
			{
                cout<< str;
            }
            String operator+(String x)  						//Concatenating String using operator overloading
            {
				String s;
                strcat(str,x.str);
                strcpy(s.str,str);
			    return s;
            }
};
int main()
{
    String str1, str2, str3;

    str1.input();
    str2.input();

    cout<<"\n ----------------------------------------------";
    cout<<"\n\n First String is           :  ";
    str1.display();   														//Displaying First String

    cout<<"\n\n Second String is          :  ";
    str2.display();  														//Displaying Second String

    cout<<"\n ----------------------------------------------";
    str3=str1+str2;        													//String is concatenated. Overloaded '+' operator
    cout<<"\n\n Concatenated String is    :  ";
    str3.display();

    return 0;
}