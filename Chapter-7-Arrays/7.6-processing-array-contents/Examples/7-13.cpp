// This program stores, in an array, the hours worked by
// employees who all make the same hourly wage.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 5;
    int hours[NUM_EMPLOYEES];
    double payrate;
    double grossPay;

    cout << "Enter the hours worked by "
         << NUM_EMPLOYEES << " employees who all\n"
         << "earn the same hourly rate.\n";
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        cout << "Employee #" << (index + 1) << ": ";
        cin >> hours[index];
    }

    cout << "Enter hourly pay rate for all employees: ";
    cin >> payrate;

    cout << "Here is the gross pay for each employee:\n"
         << fixed << showpoint << setprecision(2);
    for(int index = 0; index < NUM_EMPLOYEES; index++)
    {
        grossPay = hours[index]  * payrate;
        cout << "Employee #" << (index + 1)
             << ": $" << grossPay << endl;
    }
    
    return 0;
}