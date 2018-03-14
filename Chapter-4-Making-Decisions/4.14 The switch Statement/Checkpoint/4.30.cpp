/********************************************************************
*
*	Checkpoint 4.30
*
*       Complete the following program skeleton by writing a switch
*       statement that displays "one" if the user has entered 1, "two"
*       if the user entered 2, and "three" if the user has entered 3.
*       If a number other than 1, 2, or 3 is entered, the program
*       should display an error message.
*
* 	Jesus Hilario Hernandez
* 	February 13, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int userNum;
    cout << "Enter one of the numbers 1, 2, or 3: ";
    cin >> userNum;

    //
    // Write the switch statement here. vvvv
    // Write the switch statement here. vvvv
    // Write the switch statement here. vvvv
    switch (userNum)
    {
        case 1:
            cout << "one" << endl;
            break;
        case 2:
            cout << "two" << endl;
            break;
        case 3:
            cout << "three" << endl;
            break;
        default:
            cout << "Error" << endl;
    }
    // Write the switch statement here. ^^^^
    // Write the switch statement here. ^^^^
    // Write the switch statement here. ^^^^
    //

    // Terminatre program
    return 0;
}
