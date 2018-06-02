/********************************************************************
*
*	08. TOTAL PURCHASE
*       A customer in a store is purchasing five items. The prices of
*       five items are
*
*       Price of item 1 = $15.95
*       Price of item 2 = $24.95
*       Price of item 3 = $6.95
*       Price of item 4 = $12.95
*       Price of item 5 = $3.95
*
*       Write a program that holds the prices of the five items  in
*       five variables. Display each item's price, the subtotal of the
*       sale, the amount of sales tax, and the total. Assume the sales
*       tax is 7%.
*
* 	Jesus Hilario Hernandez
* 	December 19th 2017
*
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float SALES_TAX = .07
    float item1 = 15.95,
          item2 = 24.95,
          item3 = 6.95,
          item4 = 12.95,
          item5 = 3.95,
          subtotal = item1 + item2 + item3 + item4 + item5,
          totalSalesTax = subtotal * SALES_TAX;

    cout << endl;
    cout << setprecision(2) << fixed;
    cout << "Item 1 = $" << item1 << endl;
    cout << "Item 2 = $" << item2 << endl;
    cout << "Item 3 = $" << item3 << endl;
    cout << "Item 4 = $" << item4 << endl;
    cout << "Item 5 = $" << item5 << endl;
    cout << "Subtotal = $" << subtotal << endl;
    cout << "Sales tax = $" << totalSalesTax << endl;
    cout << "Grand Total = $" << subtotal + totalSalesTax << endl;
    cout << endl;

    return 0;
}
