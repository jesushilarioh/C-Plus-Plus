/********************************************************************
*
*	29. Each of the following programs has some errors. Locate as
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
    float quotient;

    cout << endl;
    cout << "Enter two numbers and I will divide\n";
    cout << "the first by the second for you.\n";
    cin >> number1 >> number2;

    quotient = static_cast<float>(number1) / number2;

    cout << quotient << endl;

    return 0;
}
