/********************************************************************
*
*	  65. Find as many errors as you can.
*
* 	Jesus Hilario Hernandez
* 	March 12th 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int num1 = 0,
        num2 = 10,
        result;

    num1++;
    // result = ++(num1 + num2);    // Error
    result = 1 + (num1 + num2);     // Correction
    cout << num1 << " " << num2 << " " << result;
    return 0;
}
