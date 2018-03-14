/********************************************************************
*
*	  66. Find as many errors as you can.
*         // This program adds two numbers entered by the user
*
* 	Jesus Hilario Hernandez
* 	March 12th 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char again;

    // ERROR: NO CURLY BRACES TO ENCAPSULATE LOOP'S BODY
    /*      
    while (again == 'y' || again == 'Y')
        cout << "Enter a number: ";
        cin >> num1;
        cout << "Enter another number: ";
        cin >> num2;
        cout << "Their sum is << (num1 + num2)" << endl;
        cout << "Do you want to do this again? ";
        cin >> again;
    */


    // CORRECTION: ADDED CURLY BRACES
    while (again == 'y' || again == 'Y')
    {
        cout << "Enter a number: ";
        cin >> num1;
        cout << "Enter another number: ";
        cin >> num2;
        cout << "Their sum is << (num1 + num2)" << endl;
        cout << "Do you want to do this again? ";
        cin >> again;
    }

    return 0;
}
