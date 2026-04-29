/*
Author: Sibongile Matshona
Date:
Instructor: Suleyman Olcay Polat
Description: This program creates a dynamic array, stores values, and finds the minimum value using a func>
*/

/* Function: minVal
Parameters: a float array and an integer size
Return: a float value (the smallest number in the array)
Description: This function goes through the array and finds the minimum value by comparing each element.
*/

#include <iostream>
using namespace std;

float  minVal(float arr[], int size);

int main()
{

	// Declare variable for size and prompt user

	int size;
	cout << "Enter the size: ";
	cin >> size;
	cout << endl;

	// Create dynamic array

	float* numList = new float[size];

	// Loop to input values using pointer notation

	for(int i = 0; i < size; ++i){

	cout << "Enter value " << i + 1 << ": ";
	cin >> *(numList + i);

	}

	// Call minVal function to find the smallest value

	float smallest = minVal(numList, size);

	// Print result and delete dynamic array

	cout << "The smallest value is " << smallest << endl;
	delete[] numList;


    return 0;
}

float minVal(float arr[], int size){

	float min = arr[0];

	for(int i = 1; i < size; ++i){

		if(arr[i] < min){

		min = arr[i];

		}

	}

return min;

}
