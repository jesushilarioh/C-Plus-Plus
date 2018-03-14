//**************************************************************
// This program stores, in two vectors, the hours worked by 5
// employees, and their hourly pay rates.
//
// By: Jesus Hilario Hernandez
// Last Updated: November 11th, 2016
//**************************************************************
#include <iostream>
#include <vector>   // Needed to define vectors
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 5;            // Numbers of employees
    vector<int> hours(NUM_EMPLOYEES);       // A vector of integers
    vector<double> payRate(NUM_EMPLOYEES);  // A vector of doubles
    int index;                              // Loop counter

    // Input the data.
    cout << "Enter the hours worked by " << NUM_EMPLOYEES;
    cout << " employees and their hourly rates.\n";
    for (index = 0; index < NUM_EMPLOYEES; index++)
    {
        cout << "Hours worked by employees #" << (index + 1);
        cout << ": ";
        cin >> hours[index];
        cout << "Hourly pay rate for employee #";
        cout << (index + 1) << ": ";
        cin >> payRate[index];
    }

    // Display each empolyee's gross pay.
    cout << "\nHere is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        double grossPay = hours[index] * payRate[index]; 
        cout << "Employee #" << (index + 1);
        cout << ": $" << grossPay << endl; 
    }
    return 0;
}
