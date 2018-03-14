//********************************************************************
//This program displays a list of numbers and their squares.
//
//By: JESUS HILARIO HERNANDEZ
//Last Updated: December 6th, 2016
//********************************************************************
#include <iostream>
using namespace std;

int main()
{

    /* Input validation when using numbers. */
    int number;

    cout << "Enter a number in the range 1-10: ";
    while (!(cin >> number) || (number < 1 || number > 10))
    {
        // Explain error
        cout << "ERROR: A number must be pressed.\n"
        << "Enter a value in the range 1-10: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(1200, '\n');
    }
   
    cout << "You entered the number " << number << endl;


    /* Input validation when using characters */
    char choice;

    cout << "Enter Y or N: ";
    cin >> choice;

    while (!(choice == 'y' || choice == 'Y' || choice == 'n' || choice == 'N'))
    {
        cout << "ERROR: Either Y or N must be pressed.\n"
        << "Enter Y or N: ";
        // clear input stream
        cin.clear();
        // discard previous input
        cin.ignore(1200, '\n');
        // enter choice again
        cin >> choice;
    }
    cout << "You have chosen " << choice << endl;


    /* Input validation when using strings */

    string stringChoice;

    cout << "Enter \"yes\" or \"no\": ";
    cin >> stringChoice;

    while (!(stringChoice == "yes") && !(stringChoice == "no"))
    {
        cout << "ERROR: You must type either \"yes\" or \"no\".\n"
        << "Enter \"yes\" or \"no\": ";
        // clear input stream
        cin.clear();
        // discard previous input
        cin.ignore(1200, '\n');
        // Re-enter choice again
        cin >> stringChoice;
    }

    cout << "You have enter: " << stringChoice << endl;

    return 0;
}
