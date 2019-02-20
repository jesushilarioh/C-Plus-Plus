// This program stores, in two vectors, the hours 
// worked by 5 employees, and their hourly pay rates.
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
    const int NUMBER_OF_EMPLOYEES = 5;
    vector<int> hours(NUMBER_OF_EMPLOYEES);
    vector<double> pay_rate(NUMBER_OF_EMPLOYEES);
    int index;

    // Input the data.
    cout << "Enter the hours worked by " << NUMBER_OF_EMPLOYEES
         << " employees and their hourly rates.\n";

    for( index = 0; index < NUMBER_OF_EMPLOYEES; index++)
    {
        cout << "Hours worked by employee #" << (index + 1) << ": ";
        cin >> hours[index];

        cout << "Hourly pay rate for employee #" << (index + 1) << ": ";
        cin >> pay_rate[index];
    }

    cout << "\nHere is the gross pay for each employee:\n"
         << fixed << showpoint << setprecision(2);
    
    for( index = 0; index < NUMBER_OF_EMPLOYEES; index++)
    {
        double gross_pay = hours[index] * pay_rate[index];

        cout << "Employee #" << (index + 1)
             << ": $"
             << gross_pay
             << endl;
    }
    
    
    return 0;
}
