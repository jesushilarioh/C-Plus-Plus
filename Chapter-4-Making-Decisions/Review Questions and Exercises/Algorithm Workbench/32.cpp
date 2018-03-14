/********************************************************************
*
*	32. Write an if/else statement that assigns 0 to x when y is equal to
*       10. Otherwise it should assign 1 to x.
*
* 	Jesus Hilario Hernandez
* 	February 1, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    int x,
        y = 0;

    // If y equal 10, then assign 0 to x.
    if (y == 10)
    {
        x = 0;
        // Display
        cout << endl;
        cout << "If   y = " << y << endl;
        cout << "then x = " << x << endl;
        cout << endl;
    }

    // else assign 1 to x.
    else
    {
        x = 1;
        // Display
        cout << endl;
        cout << "If   y = " << y << endl;
        cout << "then x = " << x << endl;
        cout << endl;
    }

    // Terminate program
    return 0;
}
