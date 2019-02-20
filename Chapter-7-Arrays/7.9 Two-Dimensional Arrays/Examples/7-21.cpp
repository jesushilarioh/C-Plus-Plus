// This program demonstrates a two-dimensional array.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUMBER_OF_DIVISIONS = 3,
              NUMBER_OF_QUARTERS  = 4;

    double sales[NUMBER_OF_DIVISIONS][NUMBER_OF_QUARTERS],
           total_sales;
           
    int division, quarter;

    cout << "This program will calculate the total sales of\n"
         << "all the company's divisions.\n"
         << "Enter the following sales information:\n\n";

    // Nested loops to fill the array with quarterly
    // sales figures for each division.
    for (division = 0; division < NUMBER_OF_DIVISIONS; division++)
    {
        for (quarter = 0; quarter < NUMBER_OF_QUARTERS; quarter++)
        {
            cout << "Division " << (division + 1) << ", "
                 << "Quarter  " << (quarter  + 1) << ": $";
            cin >> sales[division][quarter];
        }
        cout << endl;
    }

    // Nested loops used to add all the elements.
    for (division = 0; division < NUMBER_OF_DIVISIONS; division++)
    {
        for (quarter = 0; quarter < NUMBER_OF_QUARTERS; quarter++)
            total_sales += sales[division][quarter];
    }

    cout << fixed << showpoint << setprecision(2)
         << "The total sales for the company are: $"
         << total_sales
         << endl;

    return 0;
}