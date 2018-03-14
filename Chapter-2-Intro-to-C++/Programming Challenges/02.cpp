/********************************************************************
*
*	02. SALES TAX
*       The East Coast sales division of a company generates 58 percent
*       of total sales. Based on that percentage, write a program
*       that will predict how much that East Coast division will
*       generate if the company has $8.6 million in sales this year.
*
* 	Jesus Hilario Hernandez
* 	December 18th 2017
*
*
********************************************************************/
#include <iostream>

using namespace std;

int main()
{
    float totalSalesPercentage = .58, totalSalesThisYear = 8.6E6;

    cout << endl << endl;
    cout << "The East Coast division will more than likely generate ";
    cout << totalSalesPercentage * totalSalesThisYear << endl;
    cout << "percent of total sales this year." << endl << endl;

    return 0;
}
