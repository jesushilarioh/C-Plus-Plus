/********************************************************************
*
*	08. Assume the qty and salesReps are both integers. Use a type
*       cast espression to rewrite the following statement so it will
*       no longer perform integer division.
*
*       unitsEach = qty / salesReps;
*
* 	Jesus Hilario Hernandez
* 	January 2nd 2018
*
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int qty = 89, salesReps = 2;
    float unitsEach;

    // Original
    unitsEach = qty / salesReps;
    cout << "unitsEach (no type cast)= " << unitsEach << endl;

    // Type Casted to a double
    unitsEach = static_cast<double>(qty) / salesReps;
    cout << "unitsEach (with type cast)= " << unitsEach << endl;
    return 0;
}
