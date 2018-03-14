//***********************************************************
// This program deal with partially filled array. The user
// enters in the numbers to be stored in an array that has
// the capacity of 100. If the user has less than 100 numbers
// they should press -1 to quit the program. The total amount
// of numbers they've entered will be printed to screen.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: October 27, 2016
//***********************************************************
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
int inputVal(int);          // Error checking for int

int main()
{
    const int SIZE = 100;
    int numbers[SIZE];
    int count = 0;

    // Adding number to array numbers
    int num;
    cout << "Enter a number or -1 to quit: ";
    num = inputVal(num);
    while (num != -1 && count < SIZE)
    {
        count++;
        numbers[count - 1] = num;
        cout << "Enter a number or -1 to quit: ";
        num = inputVal(num);
    }

    // Display the valid items in th array
    for (int index = 0; index < count; index++)
    {
        cout << numbers[index] << endl;
    }

    cout << "There are " << SIZE << " available spaces in number array.\n"
         << count << " are have been used. " << endl;
    return 0;
}

//*********************************************************
// Definition of function inputVal.                       *
// Checks for valid input when using integers.            *
//*********************************************************
// Input validation function for int
int inputVal(int number)
{
    while (!(cin >> number))
    {
        // Explain Error
        cout << "Sorry, a number must be entered..." << endl;
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(123, '\n');
    }
    return number;
}
