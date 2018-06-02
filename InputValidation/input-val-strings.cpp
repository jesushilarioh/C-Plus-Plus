//********************************************************************
//This program displays a list of numbers and their squares.
//
//By: JESUS HILARIO HERNANDEZ
//Last Updated: May 14th, 2018
//********************************************************************
#include <iostream>
using namespace std;

int main()
{
    // Variables
    string str_choice;

    // Ask for user inut
    cout << "Enter \"yes\" or \"no\": ";
    cin >> str_choice;

    // Input Validate
    while (!(str_choice == "yes" || str_choice == "Yes") && !(str_choice == "no" || str_choice == "No"))
    {
        cout << "ERROR: You must type either \"yes\" or \"no\": ";
        // clear input stream
        cin.clear();
        // discard previous input
        cin.ignore(1200, '\n');
        // Re-enter choice again
        cin >> str_choice;
    }

    cout << "You have enter: " << str_choice << endl;

    return 0;
}
