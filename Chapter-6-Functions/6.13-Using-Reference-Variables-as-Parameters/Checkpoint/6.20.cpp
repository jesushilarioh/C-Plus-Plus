/************************************************************
*
*   6.20 Write the prototype and header for a function called 
*        compute. The function should have three parameters: 
*        an int, a double, and a long (not necessarily in 
*        that order). The int parameter should have a default 
*        argument of 5, and the long parameter should have 
*        a default argument of 65536. The double parameter 
*        should not have a default argument.
*
* 	Jesus Hilario Hernandez
* 	November 30th 2018
*
*************************************************************/
#include <iostream>
using namespace std;

// Function Prototypes
void compute(double, int = 5, long = 65536);    // Funtion Prototype

int main()
{
    compute(7.8);
    return 0;
}

void compute(double num1, int num2, long num3)  // Function Header
{
    cout << "num1, double = " << num1 << endl;
    cout << "num2, int = " << num2 << endl;
    cout << "num3, long = " << num3 << endl;
}