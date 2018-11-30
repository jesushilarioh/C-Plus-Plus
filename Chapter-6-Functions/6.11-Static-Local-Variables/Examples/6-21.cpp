/********************************************************************
*
*   6-20. This program shows that local variables do not retian
*         their values between function calls.
*
* 	Jesus Hilario Hernandez
* 	November 29th 2018
*
********************************************************************/
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

/********************************************************
 * Definition of function showLocal.                    *
 * The initial value of localNum, which is 5, is        *
 * displayed. The value of localNum is then changed to  *
 * 99 before the function returns.                      *
 ********************************************************/
void showLocal()
{
    int localNum = 5;   // Local variable

    cout << "localNum is " << localNum << endl;
    localNum = 99;
}