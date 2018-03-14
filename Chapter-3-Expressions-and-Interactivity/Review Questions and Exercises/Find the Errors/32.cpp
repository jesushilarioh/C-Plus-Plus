/********************************************************************
*
*	32. Each of the following programs has some errors. Locate as
*       many as you can.
*
* 	Jesus Hilario Hernandez
* 	January 6th 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double number1, half;

    cout << endl;
    cout << "Enter a number and I will divide it\n";
    cout << "in half for you.\n";
    cin >> number1;
    half = number1 / 2;
    cout << fixed << showpoint << half << endl;
    cout << endl;

    return 0;
}
