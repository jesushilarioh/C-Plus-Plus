/********************************************************************
*
*	35. Write nested if statements that perform the following tests:
*       If amount1 is greater than 10 and amount2 is less than 100,
*       display the greater of the two.
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
    int amount1, amount2;

    // Ask for amount1 and amount2
    cout << endl;
    cout << "Amount 1: "; cin >> amount1;
    cout << "Amount 2: "; cin >> amount2;
    cout << endl;

    // Solution
    if (amount1 > 10 && amount2 < 100)
    {
        // If amount1 is greater than amount2
        if (amount1 > amount2)
        {
            cout << "amount1 (" << amount1 << ") is greater than ";
            cout << "amount2 (" << amount2 << ')' << endl;
        }

        // If amount2 is greater than amount1
        if (amount2 > amount1)
        {
            cout << "amount2 (" << amount2 << ") is greater than ";
            cout << "amount1 (" << amount1 << ')' << endl;
        }

    }

    // Formatting
    cout << endl;

    // Terminate Program
    return 0;
}
