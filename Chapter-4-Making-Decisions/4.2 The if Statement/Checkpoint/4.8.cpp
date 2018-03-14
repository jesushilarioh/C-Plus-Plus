/********************************************************************
*
*	Checkpoint 4.8
*
*      TRUE or FALSE: Both of the following if statements perform the
*       same operation.
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
    int sales;
    float commissionRate;

    // T/F Problem
    if (sales > 10000)
        commissionRate = 0.15;

    cout << "\ncommissionRate = " << commissionRate;

    if (sales > 10000) commissionRate = 0.15;

    cout << "\ncommissionRate = " << commissionRate << endl;
    cout << endl;

    // TRUE
    // TRUE
    // TRUE

    // Terminate Program False
    return 0;
}
