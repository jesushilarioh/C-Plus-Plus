/********************************************************************
*
*	Checkpoint 4.19
*
*       Assume the variables a = 2, b = 4, and c = 6. Indicate by
*       circling the T or F if each of the following conditions is true
*       or false:
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
    int a = 2, b = 4, c = 6;

    cout << endl;
    cout << "a == 4 || b > 2    --> " << (a == 4 || b > 2)   << endl; // 1
    cout << "6 <= c && a > 3    --> " << (6 <= c && a > 3)   << endl; // 0
    cout << "1 != b && c != 3   --> " << (1 != b && c != 3)  << endl; // 1
    cout << "a >= -1 || a <= b  --> " << (a >= -1 || a <= b) << endl; // 1
    cout << "!(a > 2)           --> " << (!(a > 2))          << endl; // 1
    cout << endl;

    // Output:

    // a == 4 || b > 2    --> 1
    // 6 <= c && a > 3    --> 0
    // 1 != b && c != 3   --> 1
    // a >= -1 || a <= b  --> 1
    // !(a > 2)           --> 1

    // Terminate Program
    return 0;
}
