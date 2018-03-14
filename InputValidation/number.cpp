//****************************************************
// This program uses an algorithm for error checking
// and input validation when using numbers.
//
// By: Jesus Hilario Hernandez
// Last updated: December 2, 2016
//****************************************************
#include <iostream>
using namespace std;

int main()
{
    // Variables
    int number;

    // Ask user to enter a number
    cout << "Enter an number: ";

    while (!(cin >> number))
    {
        // Explain error
        cout << "I'm sorry you've not entered a number. Try again:";
        // Clear input stream
        cin.clear();
        // discard previous input from user
        cin.ignore(123, '\n');
    }

    cout << "You've entered " << number << endl;
    return 0;
}
