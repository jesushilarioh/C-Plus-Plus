//***********************************************************
// This program calculates gross pay and also introduces
// and uses global constants to do so.
//
// By: Jesus Hilario Hernandez
// Last Updated: October 21st, 2016
//***********************************************************
#include <iostream>
#include <iomanip>
using namespace std;

// Global constants
const double PAY_RATE = 22.55;      // Hourly pay rate
const double BASE_HOURS = 40.0;     // Max non-overtime hours
const double OT_MULTIPLIER = 1.5;   // Overtime multiplier

// Function prototypes
double inputVal(double);
double getBasePay(double);
double getOvertimePay(double);


int main()
{
    double hours,           // Hours worked
           basePay,         // Base pay
           overtime = 0.0,  // Overtime pay
           totalPay;        // Total pay

    // Get the number of hours worked.
    cout << "How many hours did you work? ";
    hours = inputVal(hours);

    // Get the amount of base pay.
    basePay = getBasePay(hours);

    // Get ovetime pay, if any.
    if (hours > BASE_HOURS)
    {
        overtime = getOvertimePay(hours);
    }

    // Calculate the total pay.
    totalPay = basePay + overtime;

    // Set up numeric output formatting.
    cout << setprecision(2) << fixed << showpoint;

    // Display the pay.
    cout << "Base pay: $" << basePay << endl
         << "Overtime pay $" << overtime << endl
         << "Total pay $" << totalPay << endl;
    return 0;
}

//***************************************************
// The inputVal function check for input validation *
// checks the error and askes the user to enter     *
// valid information                                *
//***************************************************

double inputVal(double num)
{
    while (!(cin >> num))
    {
        // Explain error
        cout << "I'm sorry, please enter a number: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(1200, '\n');
    }
    // return valid input
    return num;
}

//***********************************************
// The getBasePay function accepts the number of*
// hours worked as an argument and returns the  *
// emplyees's pay for non-overtime hours.       *
//***********************************************

double getBasePay(double hoursWorked)
{
    double basePay; // To hold base pay

    // Determine base pay.
    if (hoursWorked > BASE_HOURS)
    {
        basePay = BASE_HOURS * PAY_RATE;
    }
    else
    {
        basePay = hoursWorked * PAY_RATE;
    }

    return basePay;
}

//***************************************************
// The getOvertimePay function accepts the number   *
// of hours worked as an argument and returns the   *
// emplyee's overitme pay.                          *
//***************************************************

double getOvertimePay(double hoursWorked)
{
    double overtimePay; // To hold overtime pay

    // Determine overtime pay.
    if (hoursWorked > BASE_HOURS)
    {
        overtimePay = (hoursWorked - BASE_HOURS) * PAY_RATE * OT_MULTIPLIER;
    }
    else
    {
        overtimePay = 0.0;
    }
    return overtimePay;
}
