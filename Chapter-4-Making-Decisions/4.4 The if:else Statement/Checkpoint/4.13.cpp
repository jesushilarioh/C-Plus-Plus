/********************************************************************
*
*	Checkpoint 4.13
*
*       Write an if/else statement that assigns 1 to x if y is equal
*       to 100. Otherwise if shouls assign 0 to x.
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
    int x = 29, y = 67;

    // The if statement
    if (y == 100)
        x = 1;
    else
        x = 0;

    // Display
    cout << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << endl;

    // Terminate Program
    return 0;
}
