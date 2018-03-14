/********************************************************************
*
*	Checkpoint 4.6
*
*       Write an if statement that performs the following logic: if
*       the variable price is greater than 500, then assign 0.2 to
*       the variable discountRate.
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
    int price = 2000;
    float discountRate;

    // Solution
    if (price > 500)
        discountRate = 0.2;

    // Display solution
    cout << endl;
    cout << "if price is greater than 500 (price = " << price << ")\n";
    cout << "then discoutRate = " << discountRate << endl << endl;

    // Terminate Program False
    return 0;
}
