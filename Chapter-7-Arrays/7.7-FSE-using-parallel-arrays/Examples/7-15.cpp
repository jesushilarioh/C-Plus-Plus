// This program uses two parallel arrays: one for hours
// worked and one for pay rate.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 5;
    int hours[NUM_EMPLOYEES];
    double payRate[NUM_EMPLOYEES];

    cout << "Enter the hours worked by " << NUM_EMPLOYEES
         << " employees and their\n"
         << "hourly pay rates.\n";
    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        cout << "Hours worked by employee #" << (i + 1) << ": ";
        cin >> hours[i];
        cout << "Hourly pay rate for employee #" << (i + 1) << ": ";
        cin >> payRate[i];
    }

    cout << "Here is the gross pay for each employee:\n"
         << fixed << showpoint << setprecision(2);

    for(int i = 0; i < NUM_EMPLOYEES; i++)
    {
        double grossPay = hours[i] * payRate[i];
        cout << "Employee #" << (i + 1)
             << ": $" << grossPay << endl;
    }
    
    return 0;
}