/********************************************************************
*
*	Checkpoint 4.4
*
*       What will the following program display?
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
    int a = 0, b = 2, x = 4, y = 0;

    // Display
    cout << (a == b) << endl;   // 0
    cout << (a != y) << endl;   // 0
    cout << (b <= x) << endl;   // 1
    cout << (y > a) << endl;    // 0

    // Terminate Program
    return 0;
}
