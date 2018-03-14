/********************************************************************
*
*	  70. Find as many errors as you can.
*         // This program displays the sum of the numbers 1-100.
*
* 	Jesus Hilario Hernandez
* 	March 12th 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // ERROR:
    /*
    int count = 1, total;
    while (count <= 100)
        total += count;
    cout << "The sum of the numbers 1-100 is ";
    cout << total << endl;
    return 0;
    */

    // CORRECTION:
    int count = 1, total = 0;
    while (count <= 100)    // Added curly braces...Multiple lines in body.
    {
        total += count;
        count++;    // incremented counter variable (count)
    }
    cout << "The sum of the numbers 1-100 is ";
    cout << total << endl;

    // Alternative counter controlled (for) loop.
    for ( ; count <= 100; count++)
        total += count;
    cout << "The sum of the numbers 1-100 is ";
    cout << total << endl;

    // Terminat Program
    return 0;
}
