/************************************************************
*
*   6.21 Write the prototype and header for a function called 
*        calculate. The function should have three parameters: 
*        an int, a reference to a double, and a long (not 
*        necessarily in that order.) Only the int parameter 
*        should have a default argument, which is 47.
*
* 	Jesus Hilario Hernandez
* 	November 30th 2018
*
*************************************************************/

#include <iostream>
using namespace std;

// Function Prototypes
void calculate(double, long, int = 47);    // Funtion Prototype

int main()
{
    calculate(7.8, 8999);
    return 0;
}

void calculate(double num1, long num2, int num3)  // Function Header
{
    cout << "num1, double = " << num1 << endl;
    cout << "num2, long = " << num2 << endl;
    cout << "num3, int = " << num3 << endl;
}