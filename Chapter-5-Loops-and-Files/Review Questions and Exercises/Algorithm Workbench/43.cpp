/********************************************************************
*
*	  43.
*           Convert the following for loop to a while loop:
*
*           for (int x = 50; x > 0; x−−)
*           {
*               cout << x << " seconds to go.\n";
*           }
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
    int x = 50;

    // While loop, condition controlled loop, pretest loop
    while (x > 0)
    {
        cout << x << " seconds to go.\n";
        x--;
    }
    // Terminate program
    return 0;
}
