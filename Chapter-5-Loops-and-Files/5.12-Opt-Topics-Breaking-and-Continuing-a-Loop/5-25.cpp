//******************************************************
// This program raises the user's number to the powers
// of 0 through 10.
//
// By: Jesus Hilario Hernandez
// Last updated: Novermber 1, 2016
//******************************************************
#include <iostream>
#include <cmath>
using namespace std;

double inputVal(double);      // Input validation (double)

int main()
{
    double value;
    char choice;

    cout << "Enter a number: ";
    value = inputVal(value);
    cout << "This program will raise " << value;
    cout << " to the pwers of 0 through 10.\n";
    for (int count = 0; count <= 10; count++)
    {
        cout << value << " raised to the power of ";
        cout << count << " is " << pow(value, count);
        cout << "\nEnter Q to quit or any other key ";
        cout << "to continue. ";
        cin >> choice;
        if (choice == 'Q' || choice == 'q')
        {
            break;
        }
    }
    return 0;
}

//***************************************************
// The inputVal function checks for validate input. *
// In this case a double. If an double is not       *
// typed in, the user will be promted to enter      *
// valid data.                                      *
//***************************************************

double inputVal(double num)
{
    while (!(cin >> num))
    {
        cout << "I'm sorry. A number must be entered: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}
