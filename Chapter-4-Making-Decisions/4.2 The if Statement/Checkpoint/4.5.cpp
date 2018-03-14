/********************************************************************
*
*	Checkpoint 4.5
*
*       Write an if statement that performs the following logic: if
*       the variables x is equal to 20, then assign 0 to the
*       variable y.
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
    int x = 20, y = 87;

    // Solution
    if (x == 20)
        y = 0;

    // Display solution
    cout << endl;
    cout << "if   x = " << x << endl;
    cout << "then y = " << y << endl << endl;

    // Terminate Program False
    return 0;
}
