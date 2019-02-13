//***********************************************************
// This program show how to print contents of an array,
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: October 26, 2016
//***********************************************************

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
int inputVal(int);          // Error checking for int
double inputVal(double);    // Error checking for double

int main()
{
    // Print contents of an array
    const int SIZE = 5;
    int numbers [SIZE] = {10, 20, 30, 40, 50};
        // With regular for loop
    for (int count = 0; count < SIZE; count++)
    {
        cout << numbers[count] << endl;
    }
        // With range-based for loop
    for (int val : numbers)
    {
        cout << val << endl;
    }

        return 0;
}
//*********************************************************
// Definition of function inputVal.                       *
// Checks for valid input when using integers.            *
//*********************************************************
// Input validation function for int
int inputVal(int num)
{
    while (!(cin >> num))
    {
        // Explain Error
        cout << "Sorry, a number must be entered..." << endl;
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(123, '\n');
    }
    return num;
}

//*********************************************************
// Definition of function inputVal.                       *
// Checks for valid input when using doubles.             *
//*********************************************************
double inputVal(double num)
{
    while (!(cin >> num))
    {
        // Explain Error
        cout << "Sorry, a number must be entered..." << endl;
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(123, '\n');
    }
    return num;
}
