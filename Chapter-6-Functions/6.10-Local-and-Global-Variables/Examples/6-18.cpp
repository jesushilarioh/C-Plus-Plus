/********************************************************************
*
*   6-18. This program has an uninitialized global variable.
*
* 	Jesus Hilario Hernandez
* 	November 29th 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int globalNum;  // Global variable, automatically set to zero

int main()
{
    cout << "globalNum is " << globalNum << endl;
    return 0;
}