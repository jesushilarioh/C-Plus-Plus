/********************************************************************
*
*	Checkpoint 4.1
*
*       Assuming x is 5, y is 6, and z is 8, indicate by circling
*       the T or F whether each of the following relational
*       expressions is true or false:
*
*       A) x == 5           T   F
*       B) 7 <= (x + 2)     T   F
*       C) z < 4            T   F
*       D) (2 + x) != y     T   F
*       E) z != 4           T   F
*       F) x >= 9           T   F
*       G) x <= (y * 2)     T   F
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
    int x = 5,
        y = 6,
        z = 8;

    // Program title
    cout << endl;
    cout << "Checkpoint 4.1" << endl;
    cout << "---------------" << endl;
    cout << "Variables: " << endl;
    cout << "x = 5," << endl;
    cout << "y = 6," << endl;
    cout << "z = 8 " << endl;

    // A). x == 5
    cout << "\nA). x == 5        --> ";
    if (x == 5)
        cout << "True";
    else
        cout << " False";

    // B). 7 <= (x + 2)
    cout << "\nB). 7 <= (x + 2)  --> ";
    if (7 <= (x + 2))
        cout << "True";
    else
        cout << " False";

    // C). z < 4
    cout << "\nC). z < 4         --> ";
    if (z < 4)
        cout << "True";
    else
        cout << " False";

    // D). (2 + x) != y
    cout << "\nD). (2 + x) != y  --> ";
    if ((2 + x) != y)
        cout << "True";
    else
        cout << " False";

    // E). z != 4
    cout << "\nE). z != 4        --> ";
    if (z != 4)
        cout << "True";
    else
        cout << " False";

    // F). x >= 9
    cout << "\nF). x >= 9        --> ";
    if (x >= 9)
        cout << "True";
    else
        cout << " False";

    // G). x <= (y * 2)
    cout << "\nG). x <= (y * 2)  --> ";
    if (x <= (y * 2))
        cout << "True";
    else
        cout << " False";

    // Formatting for end line
    cout << '\n' << endl;

    // Terminate Program False
    return 0;
}
