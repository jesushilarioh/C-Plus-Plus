//***********************************************************
// This program asks for the number of hours worked
// by six employees. It stores the values in an array.
//
// By: Jesus Hilario Hernandez
// Last Updated: October 25, 2016
//***********************************************************
#include <iostream>
using namespace std;

// Function prototype
int inputVal(int);      // Used for input validation.

int main()
{
    const int NUM_EMPLOYEES = 6;
    int hours[NUM_EMPLOYEES];

    // Get hours worked by each employee.
    cout << "Enter the hours worked by "
         << NUM_EMPLOYEES << " employees: " << endl;
    hours[0] = inputVal(hours[0]);
    hours[1] = inputVal(hours[1]);
    hours[2] = inputVal(hours[2]);
    hours[3] = inputVal(hours[3]);
    hours[4] = inputVal(hours[4]);
    hours[5] = inputVal(hours[5]);


    // Display the values in the array.
    cout << " " << hours[0];
    cout << " " << hours[1];
    cout << " " << hours[2];
    cout << " " << hours[3];
    cout << " " << hours[4];
    cout << " " << hours[5] << endl;
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
