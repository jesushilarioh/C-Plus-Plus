/********************************************************************
*
*	  38.
*           Write a loop that asks the user to enter a number.
*           The loop should iterate 10 times and keep a running
*           total of the numbers entered.
*
* 	Jesus Hilario Hernandez
* 	March 10th 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // Variables
    int number,
        total = 0;

    // Pretest loop, counter controlled loop (10)
    for (int i = 1; i <= 10; i++)
    {
        // Ask for a number
        cout << "Enter a number: ";
        cin >> number;
        total += number;
    }

    // Display total
    cout << "Total = is " << total << endl;
    // Terminate program
    return 0;
}
