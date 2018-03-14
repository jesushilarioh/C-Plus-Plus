//*************************************************************
// This program calculates a consultant's charges at $50
// per hour, for a minimum of 5 hours. The ?: operator
// adjusts hours to 5 if less than 5 hours were worked.
//
// By: Jesus Hilario Hernandez
// Last Updated: December 21, 2016
// Used from : Gaddis, "Starting Out With C++",
//  8th Edition, Pg 200-201
//*************************************************************
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PAY_RATE = 50.0;   // Hourly pay rate
    const int MIN_HOURS = 5;        // Minimum billable hours
    double hours,                   // hours worked
           charges;                 // Total sharges

    // Get the hours worked.
    cout << "How many hours were worked? ";
    cin >> hours;

    // Determine the hours to charge for.
    hours = hours < MIN_HOURS ? MIN_HOURS : hours;

    // Calculate and display the charges.
    charges = PAY_RATE * hours;
    cout << fixed << showpoint << setprecision(2)
         << "The charges are $" << charges << endl;
    return 0;
}
