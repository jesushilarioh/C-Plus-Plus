/********************************************************************
*
*	34. Write an if statement that sets the variable hours to 10
*       when the flag variable minimum is set.
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
    bool minimum;
    int hours = 65;

    cout << endl;
    cout << "Enter the minimum in boolean (0 or 1): ";
    cin >> minimum;

    // Solution
    if (minimum)

        // assign 10 to hours
        hours = 10;

        // Display
        if (hours == 10)
        {
            cout << endl;
            cout << "minimum flag = " << minimum;
            cout << ", hours = " << hours   << endl;
            cout << endl;
        }
        else
        {
            cout << endl;
            cout << "minimum flag = " << minimum;
            cout << ", hours = " << hours   << endl;
            cout << endl;
        }

    // Terminate Program
    return 0;
}
