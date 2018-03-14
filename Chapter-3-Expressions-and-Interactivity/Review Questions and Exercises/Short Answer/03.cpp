/********************************************************************
*
*	03. What header files must be included in the following program?
*
* 	Jesus Hilario Hernandez
* 	December 29th 2017
*
*
********************************************************************/
#include <iostream>
// #include <iomanip>

using namespace std;

int main()
{
    double amount = 89.7;
    cout << showpoint << fixed;
    cout << setw(8) << amount << endl;
    return 0;
}
