//************************************************
// This program uses a while loop to error check
// for valid user input. In this case and int.
//
// By: Jesus Hilario Hernandez
// December 3, 2016
//************************************************
#include <iostream>
using namespace std;

int main()
{
    // Variables
    int num;

    // Ask user to enter and number
    cout << "Enter a number: ";

    // Receive user input
    while (!(cin >> num))
    {
        // Explain error
        cout << "ERROR: a number must be entered";
        // Clear previous input
        cin.clear();
        // Discard previous input
        cin.ignore(123, '\n');
    }

    // Let user know the number that they've entered
    cout << "The number you\'ve entered is: " << num << endl;
    return 0;
}
