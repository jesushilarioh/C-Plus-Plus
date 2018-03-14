/********************************************************************
*
*	  39.
*           Write a nested loop that displays 10 rows of ‘#’
*           characters. There should be 15 ‘#’ characters in each
*           row.
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
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 15; j++)
            cout << "#";

        cout << endl;
    }

    cout << endl;

    // Alternative. Consider (Intialization & Test)
    for (int row = 0; row < 10; row++)
    {
        for (int column = 0; column < 15; column++)
            cout << "#";

        cout << endl;
    }
    // Terminate program
    return 0;
}
