//**************************************************************
// This program uses a function to perform division. If division
// by zero is detected, the function returns.
//
// by: Jesus Hilario Hernandez
// last updated: November 2, 2016
//**************************************************************
#include <iostream>
using namespace std;

// Function prototype.
void divide(double, double);
double inputVal(double);   // For error Checking

int main()
{
    double num1, num2;

    cout << "Enter two numbers and I will divide the first\n";
    cout << "number by the second number: ";
    num1 = inputVal(num1);
    num2 = inputVal(num2);
    divide(num1, num2);
    return 0;
}

//*******************************************************************
// Definition of function divide.                                   *
// Uses two parameters: arg1 and arg2. The function divides arg1    *
// by arg2 and shows the result. If arg2 is zero, however, the      *
// function returns.                                                *
//*******************************************************************

void divide(double arg1, double arg2)
{
    if (arg2 == 0.0)
    {
        cout << "Sorry, I cannot divide by zero.\n";
        return;
    }
    cout << "The quotient is " << (arg1 / arg2) << endl;
}

//*******************************************************************
// Function inputVal prompts the user to enter valid input data.    *
// In this case the double data type is accepted only.              *
//*******************************************************************

double inputVal(double num)
{
    while (!(cin >> num))
    {
        cout << "I'm sorry a number must be entered: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}
