//*******************************************************
// This program demonstrates a function with a parameter.
//
// By: Jesus Hilario Hernandez
// Last Updated: November 1, 2016
//*******************************************************
#include <iostream>
using namespace std;

// Function Prototype
void displayValue(int);

int main()
{
    cout << "I am passing 5 to displayValue.\n";
    displayValue(5);    // Call displayValue with argument 5
    cout << "Now I am back in main.\n";
    return 0;
}

//***********************************************************
// Definition of function displayValue.                     *
// It uses an integer parameter whoes value is displayed.   *
//***********************************************************

void displayValue(int num)
{
    cout << "The value is " << num << endl;
}
