//**************************************************
// This program displays a right side up pyramid,
// as well as an upside down pyramid.
//
// By: JESUS HILARIO HERNANDEZ
// Last modified: October 14, 2016
//**************************************************
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    // Display Pattern A
    cout << "Pattern A looks like this:" << endl;

    // Right side up pyramid for loop
    for (int row = 1; row <= 13; ++row)
    {
        for (int col = 1; col <= row; ++col)
        {
            cout << "+";
        }
        cout << endl;
    }

    // Display Pattern B
    cout << "\nHere is pattern B: " << endl;

    // Upside down pyramid for loop
    for (int row = 13; row >= 1; --row)
    {
        for (int col = 1; col <= row; ++ col)
        {
            cout << "+";
        }
        cout << endl;
    }
    return 0;
}
