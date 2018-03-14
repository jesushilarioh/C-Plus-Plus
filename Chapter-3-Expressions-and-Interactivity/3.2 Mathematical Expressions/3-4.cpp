//******************************************************
// This Program asks the user to enter the numerator and
// denominator of a fraction and it displays the decimal
// value.
//
// By: Jesus Hilario Hernandez
// Last Updated: December 6, 2016
//******************************************************
#include <iostream>
using namespace std;

int main()
{
    double numerator, denominator;

    cout << "This program shows the decimal value of ";
    cout << "a fraction.\n";
    cout << "Enter the numerator: ";
    cin >> numerator;
    cout << "Enter the denominator: ";
    cin >> denominator;
    cout << "The decimal value is ";
    cout << (numerator / denominator) << endl;
    return 0;
}
