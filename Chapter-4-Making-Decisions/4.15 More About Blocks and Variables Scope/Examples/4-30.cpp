//*********************************************************
// This program uses two variables with the name number.
//
// By: Jesus Hilario Hernandez
// Last Updated: December 21, 2016
// Used from : Gaddis, "Starting Out With C++",
//  8th Edition, Pg 213
//*********************************************************
#include <iostream>
using namespace std;

int main()
{
    // Define a variable named number.
    int number;

    cout << "Enter a number greater that 0: ";
    cin >> number;
    if (number > 0)
    {
        int number; // Another variable named number.
        cout << "Now enter another number: ";
        cin >> number;
        cout << "The second number you entered was "
             << number << endl;
    }
    cout << "Your first number was " << number << endl;
    return 0;
}
