/********************************************************************
*
*	Checkpoint 4.21
*
*       Write an if statement that prints the message "The number is
*       not valid" if the variable speed is outside the range 0
*       through 200.
*
* 	Jesus Hilario Hernandez
* 	February 13, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    int speed = 403;

    // The if statement
    if (speed < 0 || speed > 200)
        cout << "The number is invalid.\n";

    // Terminate Program
    return 0;
}
