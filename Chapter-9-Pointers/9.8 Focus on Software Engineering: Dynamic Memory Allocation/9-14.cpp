// This program totals and averages the sales figures for any
// number of days. The figures are stored in a dynamically
// allocated array.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double *sales = nullptr,
           total = 0.0,
           average;
    int numDays,
        count;

    cout << "How many days of sales amounts do you wish "
         << "to process? ";
    cin >> numDays;

    sales = new double[numDays];

    cout << "Enter the sales amounts below.\n";
    for (count = 0; count < numDays; count++)
    {
        cout << "Day " << (count + 1) << ": ";
        cin >> sales[count];
    }

    for (count = 0; count < numDays; count++)
        total += sales[count];

    average = total / numDays;

    cout << fixed << showpoint << setprecision(2);
    cout << "\n\nTotal Sales: $" << total << endl;
    cout << "Average Sales: $" << average << endl;

    delete [] sales;
    sales = nullptr;
    
    return 0;
}