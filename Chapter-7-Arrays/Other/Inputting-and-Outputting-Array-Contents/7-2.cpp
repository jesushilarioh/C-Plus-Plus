//***********************************************************
// This program asks for the number of hours worked by six
// employees. It stores the values in an array.
//
// By: Jesus Hilario Hernandez
// Last Updated: October 25, 2016
//***********************************************************
#include <iostream>
using namespace std;

// Function prototype
int inputVal(int);                  // Used for input validation.

int main()
{
    const int NUM_EMPLOYEES = 6;    // Number of employees
    int hours[NUM_EMPLOYEES];       // Each employee's hours
    int count;                      // Loop counter

    // Input the hours worked.
    for (count = 0; count < NUM_EMPLOYEES; count++)
    {
        cout << "Enter the hours worked by employee "
             << (count + 1) << ": ";
        hours[count] = inputVal(hours[count]);
    }

    // Display the contents of the array
    cout << endl;
    for (count = 0; count < NUM_EMPLOYEES; count++)
    {
        cout <<"Hours worked by employee "
             << (count + 1) << ": "
             << hours[count] << endl;
    }
    return 0;
}

//***********************************************
// Definition of function inputVal function.    *
//                                              *
// This function is used to validate whether    *
// the user has entered a number. If no         *
// number is entered at the keyboard, the       *
// while loop will prompt the error and ask     *
// for valid input.                             *
//***********************************************

int inputVal(int num)
{
    while (!(cin >> num))
    {
        cout << "Please enter a number: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}
