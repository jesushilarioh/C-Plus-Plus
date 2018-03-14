//**************************************************
// This program demonstrates the prefix and postfix
// modes of the increment and decrement operators.
//
// By: Jesus Hilario Hernandez
// Last Updated: December 29, 2016
//
// Used from: Gaddis, "Starting Out With C++",
//  8th Edition, Pg. 229-230
//**************************************************
#include <iostream>
using namespace std;

int main()
{
    int num = 4;

    cout << num << endl;    // Displays 4
    cout << num++ << endl;  // Displays 4, and then add 1 to num
    cout << num << endl;    // Displays 5
    cout << ++num << endl;  // Adds 1 to num, then displays 6
    cout << endl;           // Displays a blank line

    cout << num << endl;    // Display 6
    cout << num-- << endl;  // Displays 6, then subtracts 1 from num
    cout << num << endl;    // Displays 5
    cout << --num << endl;  // Subracts 1 from num, then diplays 4

    return 0;
}
