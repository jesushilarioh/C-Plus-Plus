/********************************************************************
*
*	26. Write a pseudocode algorithm for a program that calculates
*       the total of a retail sale. The program should ask for the
*       amount of the sale and the sales tax rate. The sales tax rate
*       should be entered as a floating-point number. For example,
*       if the sales tax rate is 6 percent, the use should enter
*       0.06. The program should display the amount of sales tax and
*       the total of the sale.
*
*       After you write the pseudocode algorithm, conbert it to a
*       complete C__ program.
*
* 	Jesus Hilario Hernandez
* 	Jan. 4th 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Ask the user for the amount of sale.
    // Ask for the sales tax rate as a floating-point number.
    // Calculate the sales tax by multiplying it by the amount of sale
    // Calculate the total by adding the sales tax amount to the amount of sale
    // Display sales tax total
    // Display total amount of sale

    // Variables
    float salesTaxRate, amountOfSale, salesTaxTotal, totalAmountOfSale;

    // Ask for input
    cout << endl;
    cout << "Enter the amount of sale: ";
    cin >> amountOfSale;
    cout << "Enter percentage of sales tax, Ex. if 6% type (.06): ";
    cin >> salesTaxRate;

    // Calculate
    salesTaxTotal = amountOfSale * salesTaxRate;
    totalAmountOfSale = amountOfSale + salesTaxTotal;

    // Display
    cout << endl;
    cout << "Amount of sale = $" << amountOfSale << endl;
    cout << "Sales tax rate = $" << salesTaxRate << endl;
    cout << setprecision(2) << fixed;
    cout << "Total sales tax = $" << salesTaxTotal << endl;
    cout << "Total amount of sale = $" << totalAmountOfSale << endl;
    cout << endl;

    // Terminate Program
    return 0;
}
