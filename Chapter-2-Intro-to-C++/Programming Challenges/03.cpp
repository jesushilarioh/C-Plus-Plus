/********************************************************************
*
*	03. SALES PREDICTION
*       Write a program that will compute the total sales tax on a
*       $95 purchase. Assume the state sales tax is 4% and the
*       county sales tax is 2 percent.
*
* 	Jesus Hilario Hernandez
* 	December 17th 2017
*
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int purchase = 95;
    float stateSalesTax = .04,
          countySalesTax = .02;

    // Set decimal percision to 2 places after the decimal point. Ex 0.00
    cout << setprecision(2) << fixed << endl;

    cout << "The total state sales tax on a $95 dollar purchase is $";
    cout << purchase * stateSalesTax << endl;

    cout << "The total county sales tax on a $95 dollar purchase is $";
    cout << purchase * countySalesTax << endl << endl;

    return 0;
}
