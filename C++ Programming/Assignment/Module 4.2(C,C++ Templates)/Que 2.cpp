//Que 2 Write a program of to sort the array using templates.

#include<iostream>
using namespace std;

template <typename T>												
void sortArray(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) 				//it will start from 0 to numbers of elements of array
	{												
        for (int j = 0; j < n - i - 1; j++) 		//it will check till the conditions satisfies and further not operable
		{
            if (arr[j] > arr[j + 1]) 				
			{										
                T temp = arr[j];					
                arr[j] = arr[j + 1];				//if the condition is true the elements will be swapped
                arr[j + 1] = temp;					//using the temp variable 
            }
        }
    }
}
int main() {
    int arr[] = {31, 62, 95, 51, 74};
    int n = sizeof(arr) / sizeof(arr[0]);			//getting the numbers of elements of array to sort
    sortArray(arr, n);								//calling the method
    for (int i = 0; i < n; i++)						//using the for loop to print the final sorted array
        cout << arr[i] << " ";
    
    return 0;
}
  