/********************************************************************
*
*	14. Write a cout statement so the variable population is
*       displayed in a field of 12 spaces, left-justified, with a
*       precision of 8 decimal places. The decimal point should
*       always be displayed.
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
    float population = 78.342098230429;

    // Print to screen:
    cout << endl;
    cout << setprecision(8) << fixed << left;
    cout << "(" << setw(12) << population << ")" << endl;
    cout << endl;

    // Program termination.
    return 0;
}
