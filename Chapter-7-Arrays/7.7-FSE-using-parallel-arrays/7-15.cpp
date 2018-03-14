//***********************************************************
// This program uses two parallel arrays: one for hours
// worked and one for pay rate.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: May 5th, 2017
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
    int hours[NUM_EMPLOYEES];       // Holds hour wokred
    double payRate[NUM_EMPLOYEES];  // Holds pay rates

    // Input the hours worked and the hourly pay rate.
    cout << "Enter the hours worked by " << NUM_EMPLOYEES
         << " employees and their\n"
         << "hourly pay rates.\n";
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        cout << "Hours worked by employee #" << (index + 1) << ": ";
        hours[index] = inputVal(hours[index]);
        cout << "Hourly pay rate for employee #" << (index + 1) << ": ";
        payRate[index] = inputVal(payRate[index]);
        cout << endl;
    }

    // Display each employee's gross pay.
    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        double grossPay = hours[index] * payRate[index];
        cout << "Employee #" << (index + 1);
        cout << ": $" << grossPay << endl;
    }

    // Display numbers of hours array
    cout << "\nThe numbers in array hours are: " << endl;
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        cout << hours[index] << endl;
    }

    // Display the numbers in payRate array
    cout << "\nThe numbers in array payRate are: " << endl;
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        cout << payRate[index] << endl;
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
        cout << " Sorry, a number must be entered..." << endl;
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
        cout << " Sorry, a number must be entered..." << endl;
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(123, '\n');
    }
    return num;
}
