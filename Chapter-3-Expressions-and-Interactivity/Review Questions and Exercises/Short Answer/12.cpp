/********************************************************************
*
*	12. Write a cout statement so that variable divSales is displayed
*       in a field of 8 spaces, in fixed point notation, with a
*       precision of 2 decimal points.
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
    float divSales = 78.90234;

    cout << endl;
    cout << setprecision(2) << fixed;
    cout << "(" << setw(8) << divSales << ")" << endl;
    cout << endl;

    return 0;
}
