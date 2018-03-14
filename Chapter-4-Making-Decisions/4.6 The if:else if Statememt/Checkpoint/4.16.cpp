/********************************************************************
*
*	Checkpoint 4.16
*
*       What will the following code display?
*
* 	Jesus Hilario Hernandez
* 	February 13, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int funny = 7, serious = 15;
    funny = serious % 2;

    if (funny != 1)
    {
        funny = 0;
        serious = 0;
    }
    else if (funny == 2)
    {
        funny = 10;
        serious = 10;
    }
    else
    {
        funny = 1;
        serious = 1;
    }
    cout << funny << " " << serious << endl;

    // Output: 1 1

    // Terminate Program
    return 0;
}
