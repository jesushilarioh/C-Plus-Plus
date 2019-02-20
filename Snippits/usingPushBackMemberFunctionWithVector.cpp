// This program stores, in two arrays, the hours
// worked by 5 employees, and their hourly pay rates.
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
    vector<int> hours;
    vector<double> pay_rate;
    
    int number_of_employees,
        index;

    cout << "How many employees do you have? ";
    cin >> number_of_employees;

    cout << "Enter the hours worked by " << number_of_employees
         << " employees and their hourly rates.\n";
         
    for (index = 0; index < number_of_employees; index++)
    {
        int temporary_hours;
        double temporary_rate;

        cout << "Hours worked by employee #" << (index + 1)
             << ": ";
        cin >> temporary_hours;
        hours.push_back(temporary_hours);

        cout << "Hourly pay rate for employee #"
             << (index + 1) << ": ";
        cin >> temporary_rate;
        pay_rate.push_back(temporary_rate);
    }

    cout << "Here is the gross pay for each employee:\n"
         << fixed << showpoint << setprecision(2);

    for (index = 0; index < number_of_employees; index++)
    {
        double gross_pay = hours[index] * pay_rate[index];
        cout << "Employee #" << (index + 1)
             << ": $" << gross_pay << endl;
    }
    return 0;
}