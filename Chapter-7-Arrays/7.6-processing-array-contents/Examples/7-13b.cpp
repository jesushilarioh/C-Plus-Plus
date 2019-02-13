//***********************************************************
// This program sums the values in a numeric array.
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

    // Summing the values in a numeric array
    const int NUM_UNITS = 24;
    int units[NUM_UNITS];
        // Using regular for loop
    int total = 0;
    for (int count = 0; count < NUM_UNITS; count++)
    {
        cout << "Enter number " << (count + 1) << ":";
        units[count] = inputVal(units[count]);
        total += units[count];
    }
    cout << "The total of every number in the units array is: "
         << total << endl;

        // Using a range-based for loop

    total = 0;
    int count = 1;
    for (int val : units)
    {
        cout << "Enter number " << count << ":";
        val = inputVal(val);
        total += val;
        count++;
    }
    cout << "The total of every number in the units array is: "
    << total << endl;
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
