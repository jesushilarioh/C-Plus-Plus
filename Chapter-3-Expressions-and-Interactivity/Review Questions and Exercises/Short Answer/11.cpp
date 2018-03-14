/********************************************************************
*
*	11. Write a multiple assignment statement that can be used instead
*       of the following group of assignment statements:
*
*       east = 1;
*       west = 1;
*       north = 1;
*       south = 1;
*
* 	Jesus Hilario Hernandez
* 	January 2nd 2018
*
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    int east = 1,
        west,
        north,
        south;

    // Multiple assignemt statments:
    east = west = north = south;

    // Print values to screen.
    cout << endl;
    cout << "west = " << west << endl;
    cout << "east = " << east << endl;
    cout << "south = " << south << endl;
    cout << "north = " << north << endl;
    cout << endl;

    // Program termination.
    return 0;
}
