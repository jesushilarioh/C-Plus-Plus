//***********************************************************
// This program uses overloaded functions.
//
// By: Jesus Hilario Hernandez
// Last Updated: October 22nd, 2016
//***********************************************************
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
int square(int);
double square(double);

int main()
{
    int userInt;
    double userFloat;

    // Get an int and a double.
    cout << fixed << showpoint << setprecision(2);
    cout << "Enter an integer: ";
    while (!(cin >> userInt))
    {
        cout << "Sorry, a number must be entered: ";
        cin.clear();
        cin.ignore(1234, '\n');
    }
    cout << "Now, enter a floating-point value: ";
    while (!(cin >> userFloat))
    {
        cout << "Sorry, a floating-point must be entered: ";
        cin.clear();
        cin.ignore(1234, '\n');
    }

    // Display their squares.
    cout << "Here are their squares: ";
    cout << square(userInt) << " and " << square(userFloat) << endl;
    return 0;
}

//***************************************************************
// Definition of overloaded function square.                    *
// This function uses an int parameter, number. It returns the  *
// square of number as an int.                                  *
//***************************************************************

int square(int number)
{
    return number * number;
}

//***************************************************************
// Definition of overloaded function square.                    *
// This function uses a double parameter, number. It returns    *
// the square of number as a double.                            *
//***************************************************************

double square(double number)
{
    return number * number;
}
