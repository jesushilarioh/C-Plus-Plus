/********************************************************************
*
*	30. Each of the following programs has some errors. Locate as
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
    int number1, number2, product;

    cout << endl;
    cout << "Enter two numbers and I will multiply them for you.\n";
    cin >> number1 >> number2;
    product = number1 * number2;
    cout << number1 << " * " << number2 << " = " << product << endl << endl;

    return 0;
}
