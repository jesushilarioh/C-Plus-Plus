/********************************************************************
*
*	13. Write a cout statement so the variable totalAge is displayed
*       in a field of 12 spaces, in fixed point notation, with a
*       precision of 4 decimal places.
*
* 	Jesus Hilario Hernandez
* 	January 2nd 2018
*
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variables
    float totalAge = 56.43498;

    cout << endl;
    cout << setprecision(4) << fixed;
    cout << "(" << setw(12) << totalAge << ")"<< endl;
    cout << endl;

    // Program termination.
    return 0;
}
