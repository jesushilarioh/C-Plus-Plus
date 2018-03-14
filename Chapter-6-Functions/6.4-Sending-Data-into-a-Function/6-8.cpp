//************************************************************
// This program demonstrates a function with three parameters.
//
// By: Jesus Hilario Hernandez
// Last Updated: November 2, 2016
//************************************************************
#include <iostream>
using namespace std;

// Function Prototype
void showSum(int, int, int);
int inputVal(int);              // Used for error checking

int main()
{
    int value1, value2, value3;

    // Get three integers.
    cout << "Enter three integers and I will display ";
    cout << "their sum: " << endl;
    value1 = inputVal(value1);
    value2 = inputVal(value2);
    value3 = inputVal(value3);

    // Call showSum passing three arguments.
    cout << "The sum of your values is ";
    showSum(value1, value2, value3);
    return 0;
}

//***************************************************************
// Definition of function showSum.                              *
// It uses three integer parameters. Their sum is displayed.    *
//***************************************************************

void showSum(int num1, int num2, int num3)
{
    cout << (num1 + num2 + num3) << endl;
}

//***************************************************************
// The inpuVal function checks for valid user input. In This    *
// case an integer must be entered. If the user type something  *
// other than an integer, then they will be promted to input    *
// valid data type.                                             *
//***************************************************************

int inputVal(int num)
{
    while (!(cin >> num))
    {
        cout << "I'm sorry, a number must be entered. Try again: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}
