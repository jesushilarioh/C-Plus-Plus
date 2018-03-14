/********************************************************************
*
*	38. Write an if statement that prints the message "The number is not
*       valid" if the variable hours is outside the range 0 through 80.
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
    int hours = -58;

    // Solution
    if (hours <= 0 || hours >= 80)
        cout << "\nThe number " << hours << " is not valid\n" << endl;

    // Terminate program false
    return 0;
}
