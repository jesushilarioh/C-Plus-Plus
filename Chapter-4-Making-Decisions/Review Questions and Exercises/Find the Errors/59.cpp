/********************************************************************
*
*	59. The following program has errors. Find as many as you can.
*       // This program divides a user-supplied number by another
*       // user-supplied number. It checks for division by zero.
*       #include <iostream>
*       using namespace std;
*       int main()
*       {
*           double num1, num2, quotient;
*
*           cout << "Enter a number: ";
*           cin >> num1;
*           cout << "Enter another number: "; cin >> num2;
*           if (num2 == 0)
*               cout << "Division by zero is not possible.\n";
*               cout << "Please run the program again ";
*               cout << "and enter a number besides zero.\n";
*           else
*               quotient = num1 / num2;
*               cout << "The quotient of " << num1 <<
*               cout << " divided by " << num2 << " is ";
*               cout << quotient << endl;
*           return 0;
*       }
*
* 	Jesus Hilario Hernandez
* 	February 1, 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // Variables
    double num1, num2, quotient;

    // Ask for user input
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;

    // Decision Structure (if / else)
    if (num2 == 0)
    {
        cout << "Division by zero is not possible.\n";
        cout << "Please run the program again ";
        cout << "and enter a number besides zero.\n";
    }

    else
    {
        quotient = num1 / num2;
        cout << "The quotient of " << num1;
        cout << " divided by " << num2 << " is ";
        cout << quotient << endl;
    }

    // Terminate Program
    return 0;
}
