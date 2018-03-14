//******************************************************
// This program extracts the rightmost digit of a number.
//
// By: Jesus Hilario Hernandez
// Last Updated: November 22, 2016
//******************************************************
#include <iostream>
using namespace std;

int main()
{
    int number = 123452;
    int rightMost = number % 10;

    cout << "The rightmost digit in "
         << number << " is "
         << rightMost << endl;
    return 0;
}
