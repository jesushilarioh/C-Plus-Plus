/********************************************************************
*
*	  69. Find as many errors as you can.
*         // This program displays the sum of two numbers.
*
* 	Jesus Hilario Hernandez
* 	March 12th 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // ERROR
    /*
    int choice, num1, num2;
    do
    {
        cout << "Enter a number: ";
        cin >> num1;
        cout << "Enter another number: ";
        cin >> num2;
        cout << "Their sum is " << (num1 + num2) << endl;
        cout << "Do you want to do this again?\n";
        cout << "1 = yes, 0 = no\n";
        cin >> choice;
    } while (choice = 1)
    return 0;
    */

    // CORRECTION:
    int choice, num1, num2;
    do
    {
        cout << "Enter a number: ";
        cin >> num1;
        cout << "Enter another number: ";
        cin >> num2;
        cout << "Their sum is " << (num1 + num2) << endl;
        cout << "Do you want to do this again?\n";
        cout << "1 = yes, 0 = no\n";
        cin >> choice;
    } while (choice == 1);   // Added (;) semicolon and changed (=) to (==).
    return 0;
}
