/********************************************************************
*
*	01. Write an if statement that assigns 100 to x when y is eqaul
*       to 0.
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
    int y = 0,
        x = 0;

    // Solution
    if (y == 0)
    {
        x = 100;
    }

    // Display
    cout << endl;
    cout << "if   y = " << y << endl;
    cout << "then x = " << x << endl;
    cout << endl;

    // Terminate program.
    return 0;
}
