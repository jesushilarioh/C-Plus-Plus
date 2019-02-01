//******************************************
// This program check for valid user input.
// In this case the characters Y or N
//
// By: Jesus Hilario Hernandez
// Last Updated: December 5, 2016
//******************************************
#include <iostream>
using namespace std;

int main()
{
    // Variables
    char letter;

    // Ask user to enter Y or N
    cout << "Would you like to continue (Y/N)? ";
    // Receive user input
    cin >> letter;
    // Error check algorithim
    while (!((letter == 'y') || (letter == 'Y') || (letter == 'n') || (letter == 'N')))
    {
        // Explain error
        cout << "ERROR: a Y or an N must be entered: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(132, '\n');
        // Receive input again
        cin >> letter;
    }

    if (letter == 'y' || letter == 'Y')
    {
        cout << "You've entered " << letter << ". Let's continue!" << endl;
    }
    else if (letter == 'n' || letter == 'N')
    {
        cout << "Since you've entered. " << letter
             << "Let's not continute. :(" << endl;
    }


    return 0;
}
