//***************************************************************
// This switch statement in this program tells the user something
// he or she already knows: the data just entered!
//
// By: Jesus Hilario Hernandez
// Last Updated: December 21, 2016
// Used from : Gaddis, "Starting Out With C++",
//  8th Edition, Pg 203-204
//***************************************************************
#include <iostream>
using namespace std;

int main()
{
    char choice;

    cout << "Enter A, B, or C: ";
    cin >> choice;
    switch (choice)
    {
        case 'A': cout << "You entered A.\n";
                  break;
        case 'B': cout << "You entered B.\n";
                  break;
        case 'C': cout << "You entered C.\n";
                  break;
        default: cout << "You did not enter A, B, or C!\n";
    }
    return 0;
}
