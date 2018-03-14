/********************************************************************
*
*	31. Each of the following programs has some errors. Locate as
*       many as you can.
*
* 	Jesus Hilario Hernandez
* 	January 6th 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int number1, number2;

    cout << endl;
    cout << "Enter two numbers and I will multiply\n";
    cout << "them by 50 for you.\n";
    cin >> number1 >> number2;
    number1 *= 50;
    number2 *= 50;
    cout << number1 << " " << number2 << endl;
    cout << endl;

    return 0;
}
