//********************************************************************
// This program demonstrates how to use multiple
// statememts in the initialization and update expressions
//
// JESUS HILARIO HERNANDEZ
// Last updated: October 5, 2016
//
//********************************************************************

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    // loop's initialization expression is :
    // x = 1, y = 1
    for (x = 1, y = 1; x <= 5; x++)
    {
        cout << x << " plus " << y
             << " equals " << (x + y)
             << endl;
    }

    cout << endl;

    /**
     * same as above
     * however, along with two initialization expressions
     * we'll add two update expression statements
     */

    for (x = 1, y = 1; x <= 5; x++, y++)
    {
        cout << x << " plus " << y
             << " equals " << (x + y)
             << endl;
    }


    return 0;
}
