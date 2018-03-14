/********************************************************************
*
*	  36.
*           Write a (do-while loop) that asks the user to enter two
*           numbers. The numbers should be added and the sum
*           displayed. The user should be asked if he or she wishes to
*           perform the operation again. If so, the loop should
*           repeat; otherwise it should terminate.
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
    int number_1,
        number_2,
        sum;        // Sum of (number_1) && (number_2)
    char another;   // Yes or No (y/n) choice.

    // Ask user if wish to quit program.
    do
    {
        // Ask for 2 numbers (number_1 & number_2)
        cout << "Enter two numbers.\n";
        cout << "#1: ";
        cin >> number_1;
        cout << "#2: ";
        cin >> number_2;

        // Caclculate the (sum)
        sum = number_1 + number_2;

        // Display (sum)   
        cout << "Sum of #1 and #2 is " << sum << endl;

        // Ask user if repeat
        cout << "Would you like to sum another 2 numbers? (Y/N)";
        cin >> another;

    } while(another == 'Y' || another == 'y');

    // Terminate program
    return 0;
}
