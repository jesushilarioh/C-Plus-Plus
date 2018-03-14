//***********************************************************
// This program uses a function that returns true or false.
//
// By: Jesus Hilario Hernandez
// Last Updated: October 21st, 2016
//***********************************************************
#include <iostream>
using namespace std;

// Function prototype
int inputVal(int);
bool isEven(int);

int main()
{
    int val;

    // Get a number from the user.
    cout << "Enter an integer and I will tell you "
    << "if it is even or odd: ";
    // Input validation function
    val = inputVal(val);

    // Indicate wheter it is even or odd.
    if (isEven(val))
    {
        cout << val << " is even.\n";
    }
    else
    {
        cout << val << " is odd.\n";
    }
    return 0;
}

//***********************************************************
// This function is for input validation. If the user       *
// enters a value that is not an int. The input stream      *
// will be cleared and ignored.                             *
//***********************************************************
int inputVal(int num)
{
    while (!(cin >> num))
    {
        // Explain error
        cout << "I'm sorry, a number must be entered: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(1200, '\n');
    }
    return num;
}

//***********************************************************
// Definition of function isEven. This function accepts an  *
// integer argument and test it to be even or odd. The      *
// function returns true if the argument is even or false if*
// if the argument is odd. The return is a bool.            *
//***********************************************************

bool isEven(int number)
{
    //local variable
    bool status;

    if (number % 2 == 0)
    {
        status = true;  // The number is even if there is no remainder.
    }
    else
    {
        status = false; // Otherwise, the number is odd.
    }
    return status;
}
