/********************************************************************
*
*	Checkpoint 4.12
*
*       TRUE or FALSE: The following if/else statements cause the same
*       output to display.
*
* 	Jesus Hilario Hernandez
* 	February 13, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    int x = 8, y = 9;

    // Statements in question
    // A).
    if (x > y)
        cout << "x is the greater.\n";
    else
        cout << "x is not the greater.\n";  // Will display

    // B).
    if (y <= x)
        cout << "x is not the greater.\n";
    else
        cout << "x is the greater.\n";      // Will display

    // FALSE

    //-----------------------
    // Output result:
    //-----------------------
    // x is not the greater.
    // x is the greater.
    //-----------------------

    // Terminate Program
    return 0;
}
