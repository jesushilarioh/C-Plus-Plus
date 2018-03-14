//*****************************************************
// This program demonstrates the setw manipulator being
// used with values of various data types.
//
// By: Jesus Hilario Hernandez
// Last Updated: December 10, 2016
//*****************************************************
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int intValue = 3928;
    double doubleValue = 91.5;
    string stringValue = "John J. Smith";

    cout << "(" << setw(5) << intValue << ")" << endl;
    cout << "(" << setw(8) << doubleValue << ")" << endl;
    cout << "(" << setw(16) << stringValue << ")" << endl;
    return 0;
}
