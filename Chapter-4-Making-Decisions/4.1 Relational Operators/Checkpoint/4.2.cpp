/********************************************************************
*
*	Checkpoint 4.2
*
*       Indicate whether the following statements about relational
*       expressions are correct or incorrect.
*
*       A) x <= y is the same as y > x.
*
*       B) x != y is the same as y >= x.
*
*       C) x >= y is the same as y <= x.
*
* 	Jesus Hilario Hernandez
* 	February 12, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    int x = 1, y = 1;

    // Program title
    cout << endl;
    cout << "Checkpoint 4.2" << endl;
    cout << "---------------" << endl;
    cout << "Variables: " << endl;
    cout << "x = 1," << endl;
    cout << "y = 1" << endl << endl;


    // A). x <= y is the same as y > x.
    cout << "A). x <= y is the same as y > x.       --> ";
    if ((x <= y) == (y < x))
        cout << "True";
    else
        cout << "False";
    cout << endl;

    // B). x != y is the same as y >= x.
    cout << "B). x != y is the same as y >= x.      --> ";
    if ((x != y) == (y >= x))
        cout << "True";
    else
        cout << "False";
    cout << endl;

    // C). x >= y is the same as y <= x.
    cout << "C). x >= y is the same as y <= x.      --> ";
    if ((x >= y) == (y <= x))
        cout << "True";
    else
        cout << "False";
    cout << endl;


    // Formatting
    cout << endl;


    // Terminate Program False
    return 0;
}
