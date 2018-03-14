/********************************************************************
*
*	Checkpoint 4.9
*
*      TRUE or FALSE: Both of the following if statements perform
*      the same operation.
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
    int calls = 20;
    float rate = 8.25;

    // T/F Problem
    if (calls == 20)
        rate *= 0.5;

    cout << "\nrate = " << rate;

    if ((calls = 20))
        rate *= 0.5;

    cout << "\nrate = " << rate << endl;
    cout << endl;

    // FALSE
    // FALSE
    // FALSE
    // added parenthesis to line 27
    // see 4.9.png in checkpoint file

    // Terminate Program False
    return 0;
}
