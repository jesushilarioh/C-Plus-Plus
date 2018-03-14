//***********************************************************
// This program demonstrates how a local variable
// can shadow the name of a global constant.
//
// By: Jesus Hilario Hernandez
// Last Updated: October 22nd, 2016
//***********************************************************
#include <iostream>
using namespace std;

// Function prototype
void showLocal();

int main()
{
    showLocal();
    showLocal();
    return 0;
}

//***********************************************************
// Definition of function showLocal.                        *
// The initial value of localNum, which is 5, is displayed. *
// The value of localNum is then changed to 99 before the   *
// function returns.                                        *
//***********************************************************

void showLocal()
{
    int localNum = 5;   // Local variable

    cout << "localNum is " << localNum << endl;
    localNum = 99;
}
