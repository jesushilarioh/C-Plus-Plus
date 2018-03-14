/********************************************************************
*
*	33. Using the following chart, write an if/else if statement
*       that assigns .10, .15, or .20 to commission, depending on
*       the value in sales.
*     +========================================================+
*       Sales                   Commission Rate
*     +--------------------------------------------------------+
*       Up to $10,000           10%
*       $10,000 to $15,000      15%
*       Over $15,000            20%
*     +========================================================+
*
* 	Jesus Hilario Hernandez
* 	February 1, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    float commission_rate,
          value_of_sales;

    // Ask user for the value of sales
    cout << endl;
    cout << "Value of sales: ";
    cin >> value_of_sales;

    // Solution
    if (value_of_sales < 10000)
        commission_rate = .10;
    else if (value_of_sales >= 10000 && value_of_sales <= 15000)
        commission_rate = .15;
    else if (value_of_sales > 15000)
        commission_rate = .20;

    // Display
    cout << "Commission rate = " << commission_rate * 100  << '%'<< endl;

    // Terminate program
    return 0;
}
