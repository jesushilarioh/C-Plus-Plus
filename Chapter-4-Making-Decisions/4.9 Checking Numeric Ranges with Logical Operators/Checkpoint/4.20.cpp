/********************************************************************
*
*	Checkpoint 4.20
*
*       Write an if statement that prints the message "The number is
*       valid" if the variable speed is within the range 0 through 200.
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
    int speed = 700;

    // The if statement
    if (speed >= 0 && speed <= 200)
        cout << "The number is valid" << endl;

    // Terminate Program
    return 0;
}
