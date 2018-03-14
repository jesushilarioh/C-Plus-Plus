/********************************************************************
*
*	  00. Find as many errors as you can.
*         // This program uses a loop to raise a number to a power.
*
* 	Jesus Hilario Hernandez
* 	March 12th 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // ERROR:
    /*
    int num, bigNum, power, count;

    cout << "Enter an integer: ";
    cin >> num;
    cout << "What power do you want it raised to? ";
    cin >> power;
    bigNum = num;
    while (count++ < power);
        bigNum *= num;
    cout << "The result is << bigNum << endl;
    return 0;
    */

    // CORRECTION:
    int num,
        bigNum,
        power,
        count = 1; // Initialize to 1

    cout << "Enter an integer: ";
    cin >> num;
    cout << "What power do you want it raised to? ";
    cin >> power;
    bigNum = num;
    while (count++ < power) // Removed (;) semicolon
        bigNum *= num;
    cout << "The result is " << bigNum << endl; // Added (") character



    // Alternative (for) loop, user controlled loop, for processing
    for ( ; count < power; count++)
        bigNum *= num;

    cout << "The result is " << bigNum << endl;
    return 0;
}
