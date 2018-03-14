//********************************************************************
// This program displays a list of numbers and
// their squares.
//
// JESUS HILARIO HERNANDEZ
// Last updated: October 5, 2016
//
//********************************************************************

#include <iostream>
using namespace std;

int main()
{
    /* Using a while loop */

    const int MIN_NUMBER = 1,   // Strating number to square
    MAX_NUMBER = 10;            // Maximum number to square

    int num = MIN_NUMBER;       // Counter

    cout << "Number Number Squared\n";
    cout << "-------------------------\n";
    while (num <= MAX_NUMBER)
    {
        cout << num << "\t\t" << (num * num) << endl;
        num++;  //Increment the counter.
    }

    /* Using a for loop */

    cout << "\nNumber Number Squared\n";
    cout << "-------------------------\n";
    for (num = MIN_NUMBER; num <= MAX_NUMBER; num++)
    {

        cout << num << "\t\t" << (num * num) << endl;
    }


    return 0;
}
