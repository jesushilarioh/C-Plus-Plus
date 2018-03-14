// This program asks for three numbers, then
// displays the average of the numbers.

//JESUS HILARIO HERNANDEZ

//Last modified: 9/26/2016

#include <iostream>       //for input output. This is the only library needed.
using namespace std;

int main()
{
    double num1, num2, num3, avg;

    cout << "Enter the first number: ";

    cin >> num1;

    cout << "Enter the second number: ";

    cin >> num2;

    cout << "Enter the third number: ";

    cin >> num3;

    avg = (num1 + num2 + num3) / 3;

    cout << "The average is: " << avg << endl << endl;

    return 0;
}
