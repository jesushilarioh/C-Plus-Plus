//*********************************************
// This program displayes a list of number and
// their squares.
//
// By: Jesus Hilario Hernandez
// Last Updated: January 1, 2017
//*********************************************
#include <iostream>
using namespace std;

int main()
{
    const int MIN_NUMBER = 1,   // Starting number to square
              MAX_NUMBER = 10;  // Maximum number to square

    int num = MIN_NUMBER;    // counter

    cout << "Number Number Squared\n";
    cout << "--------------------------\n";
    while (num <= MAX_NUMBER)
    {
        cout << num << "\t\t" << (num * num) << endl;
        num++;  // Increment the counter.
    }
    return 0;
}
