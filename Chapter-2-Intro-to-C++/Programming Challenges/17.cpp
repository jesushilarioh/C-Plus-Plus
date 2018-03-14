/********************************************************************
*
*	17. STOCK COMMISSION
*       Kathryn bought 750 shares of stock at a price of $35.00 per
*       share. She must pay her stockbroker a 2 percent commission for
*       the transaction. Write a program that calculates and displays
*       the following:
*
*       -   The amount paid for the stock alone (without the commission)
*       -   The amount of the commission
*       -   The total amount paid (for the stock plus the commission)
*
* 	Jesus Hilario Hernandez
* 	December 27th 2017
*
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int sharesOfStockBought = 750,
        pricePerShare = 35,
        totalAmountPaidForStock = sharesOfStockBought * pricePerShare;

    float commissionPercentage = .02,
          totalAmountForCommission = totalAmountPaidForStock * commissionPercentage ;

    cout << endl << endl;
    cout << "Total amount paid without commission: $";
    cout << totalAmountPaidForStock << endl;

    cout << "Total amount of commission: $";
    cout << totalAmountForCommission << endl;

    cout << "Total amount paid including commission: $";
    cout << totalAmountForCommission + totalAmountPaidForStock << endl;
    cout << endl << endl;

    return 0;
}
