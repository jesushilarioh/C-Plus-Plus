/********************************************************************
*
*	12. Software Sales
*       A software company sells a package that retails for $99.
*       Quantity discounts are given according to the following table.
*       ---------------------------------------------------------------
*           Quality                     Discount
*       ---------------------------------------------------------------
*           10-19                       20%
*           20-49                       30%
*           50-99                       40%
*           100 or more                 50%
*       _______________________________________________________________
*
*       Write a program that asks for the number of units sold and computes
*       the total cost of the purchase.
*
*       Input Validation: Make sure the number of units is greater than 0.
*
* 	Jesus Hilario Hernandez
* 	February 21, 2019
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;
int main() 
{
    // Constant
    const double PACKAGE_PRICE = 99.0;

    // Variables
    int units_sold,
        amount_without_discount;

    // Ask user for number of units sold
    cout << "\nEnter number of units sold: ";
    cin >> units_sold;

    // Total amount before discount
    amount_without_discount = units_sold * PACKAGE_PRICE;

    cout << setprecision(2) << fixed;

    // Compute total cost of the purchase.
    // Decision statement to determine sales discounts
    if (units_sold >= 0 && units_sold <= 9)
    {
        cout << "Total cost for " << units_sold 
             << " units = $"
             << amount_without_discount << endl;
    }
    else if (units_sold >= 10 && units_sold <= 19)
    {
        cout << "Total cost for " << units_sold 
             << " units = $"
             << (amount_without_discount -      
                (amount_without_discount * .20)) // 20%
             << endl;
    }
    else if (units_sold >= 20 && units_sold <= 49)
    {
        cout << "Total cost for " << units_sold 
             << " units = $"
             << (amount_without_discount - 
                (amount_without_discount * .30)) // 30%
             << endl;
    }
    else if (units_sold >= 50 && units_sold <= 99)
    {
        cout << "Total cost for " << units_sold 
             << " units = $"
             << (amount_without_discount - 
                (amount_without_discount * .40)) // 40%
             << endl;
    }
    else if (units_sold >= 100)
    {
        cout << "Total cost for " << units_sold 
             << " units = $"
             << (amount_without_discount - 
                (amount_without_discount * .50)) // 50%
             << endl;
    }
    else
    {
        cout << "Oops. Rerun the program again."
             << "Choose a number greater than 0." 
             << endl;
    }

    // Format a line break
    cout << endl;

    return 0;
}