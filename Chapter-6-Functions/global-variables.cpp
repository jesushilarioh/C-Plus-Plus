//***********************************************************
// This program has an uninitialized global variable.
//
// By: Jesus Hilario Hernandez
// Last Updated: October 21st, 2016
//***********************************************************
#include <iostream>
using namespace std;

int globalNum;  // Global variable, automatically set to zero

int main()
{
    cout << "globalNum is " << globalNum << endl;
    return 0;
}
