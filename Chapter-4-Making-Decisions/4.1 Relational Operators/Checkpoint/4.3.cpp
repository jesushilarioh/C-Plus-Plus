/********************************************************************
*
*	Checkpoint 4.3
*
*       Answer the following questions with a yes or no.
*
*       A) If it is true that x > y and it is also true that x < z,
*          does that mean y < z is true?
*
*       B) If it is true that x >= y and it is also true that z == x,
*          does that mean that z == y is true?
*
*       C) If it is true that x != y and it is also true that x != z,
*          does that mean that z != y is true?
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
    int x = 2, y = 1, z = 3;

    // Program title
    cout << endl;
    cout << "Checkpoint 4.3" << endl;
    cout << "---------------" << endl;



    // A) If it is true that x > y and it is also true that x < z,
    //    does that mean y < z is true?

    // Set variables
    x = 2, y = 1, z = 3;

    // Display
    cout << "Variables: " << endl;
    cout << "x = 2" << endl;
    cout << "y = 1" << endl;
    cout << "z = 3 \n" << endl;

    cout << "A) If it is true that x > y and it is also true that x < z,\n";
    cout << "   does that mean that y < z is true?  --> ";
    if ((x > y) && (x < z) && (y < z))
        cout << "True";
    else
        cout << "False";
    cout << '\n' << endl;

    // B) If it is true that x >= y and it is also true that z == x,
    //    does that mean that z == y is true?

    // Set variables
    x = 2, y = 1, z = 2;

    // Display
    cout << "Variables: " << endl;
    cout << "x = 2" << endl;
    cout << "y = 1" << endl;
    cout << "z = 2 \n" << endl;

    cout << "B) If it is true that x >= y and it is also true that z == x,\n";
    cout << "   does that mean that z == y is true? --> ";
    if ((x >= y) && (z == x) && (z == y))
        cout << "True";
    else
        cout << "False";
    cout << '\n' << endl;

    // C) If it is true that x != y and it is also true that x != z,
    //    does that mean that z != y is true?

    // Set variables
    x = 2, y = 1, z = 1;

    // Display
    cout << "Variables: " << endl;
    cout << "x = 2" << endl;
    cout << "y = 1" << endl;
    cout << "z = 1 \n" << endl;

    cout << "C) If it is true that x != y and it is also true that x != z,\n";
    cout << "   does that mean that z != y is true? --> ";
    if ((x != y) && (x != z) && (z != y))
        cout << "True";
    else
        cout << "False";
    cout << endl;


    // Formatting
    cout << "---------------" << endl;
    cout << endl;


    // Terminate Program False
    return 0;
}
