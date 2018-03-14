//***************************************************************
// The switch statement in this program tells the user something
// he or she already knows: the data just entered!
//
// By: Jesus Hilario Hernandez
// Last Updated: December 21, 2016
// Used from : Gaddis, "Starting Out With C++",
//  8th Edition, Pg 204-205
//***************************************************************
#include <iostream>
using namespace std;

int main()
{
    char choice;

    cout << "Enter A, B, or C: ";
    cin >> choice;
    // The following switch is
    // missing its break statements!
    switch (choice)
    {
        case 'A': cout << "You entered A.\n";
        case 'B': cout << "You entered B.\n";
        case 'C': cout << "You entered C.\n";
        default:  cout << "You did not enter A, B, or C!\n";
    }
    return 0;
}
