//*******************************************************
// This program demonstrates that changes to a function
// parameter have no effect on the original argument.
//
// by: Jesus Hernandez
// Last Updated: November 2, 2016
//******************************************************
#include <iostream>
using namespace std;

// Function Prototype
void changeMe(int);

int main()
{
    int number = 12;

    // Display the value in number.
    cout << "number is " << number << endl;

    // Call changeMe passing the value in number as an argument.
    changeMe(number);

    // Display the value in number again.
    cout << "Now back in main again, the value of ";
    cout << "number is " << number << endl;
    return 0;
}

//***********************************************************
// Definition of function changeMe.                         *
// This function changes the value of the parmeter myValue. *
//***********************************************************

void changeMe(int myValue)
{
    // Change the value in myValue to 0.
    myValue = 0;

    // Display the value in myValue.
    cout << "Now the value is " << myValue << endl;
}
