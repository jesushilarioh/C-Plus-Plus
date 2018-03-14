/********************************************************************
*
*	40. Convert the following if/else if statement into a switch statement:
*
*       if (choice == 1)
*       {
*           cout << fixed << showpoint << setprecision(2);
*       }
*       else if (choice == 2 || choice == 3)
*       {
*           cout << fixed << showpoint << setprecision(4);
*       }
*       else if (choice == 4)
*       {
*           cout << fixed << showpoint << setprecision(6);
*       }
*       else
*       {
*           cout << fixed << showpoint << setprecision(8);
*       }
*
*
* 	Jesus Hilario Hernandez
* 	February 1, 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>  // For formatting
using namespace std;

int main()
{
    // Variables
    int choice = 8;
    float number = 89.09123843;

    // Formatting
    cout << endl;

    // Solution
    switch (choice)
    {
        case 1:
            cout << fixed << showpoint << setprecision(2) << number;
            break;

        case 2:
        case 3:
            cout << fixed << showpoint << setprecision(4) << number;
            break;

        case 4:
            cout << fixed << showpoint << setprecision(6) << number;
            break;

        default:
            cout << fixed << showpoint << setprecision(8) << number;
    }

    // Formatting
    cout << '\n' << endl;

    // Terminate program false
    return 0;
}
