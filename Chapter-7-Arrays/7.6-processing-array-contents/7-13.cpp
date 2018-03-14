//***********************************************************
// This program stores, in an array, the hours worked by
// employee who all make the same hourly wage.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: October 26, 2016
//***********************************************************

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
int inputVal(int);          // Error checking for int
double inputVal(double);    // Error checking for double

int main()
{
    const int NUM_EMPLOYEES = 5;    // Number of employees
    int hours [NUM_EMPLOYEES];      // Array to hold hours
    double payrate;                 // Hourly pay rate
    double grossPay;                // To hold the gross pay

    // Input the hours worked.
    cout << "Enter the hours worked by ";
    cout << NUM_EMPLOYEES << " employees who all\n";
    cout << "earn the same hourly rate.\n";
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        cout << "Employee #" << (index + 1) << ": ";
        hours[index] = inputVal(hours[index]);
    }

    // Input the hourly rate for all employees
    cout << "Enter the hourly pay rate for all the employees: ";
    payrate = inputVal(payrate);

    // Display each employee's gross pay.
    cout << "Here is the gross pay rate each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        grossPay = hours[index] * payrate;
        cout << "Employee #" << (index + 1);
        cout << ": $" << grossPay << endl;
    }
    return 0;
}
//*********************************************************
// Definition of function inputVal.                       *
// Checks for valid input when using integers.            *
//*********************************************************
// Input validation function for int
int inputVal(int num)
{
    while (!(cin >> num))
    {
        // Explain Error
        cout << "Sorry, a number must be entered..." << endl;
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(123, '\n');
    }
    return num;
}

//*********************************************************
// Definition of function inputVal.                       *
// Checks for valid input when using doubles.             *
//*********************************************************
double inputVal(double num)
{
    while (!(cin >> num))
    {
        // Explain Error
        cout << "Sorry, a number must be entered..." << endl;
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(123, '\n');
    }
    return num;
}
