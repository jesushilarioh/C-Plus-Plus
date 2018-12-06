/************************************************************
*
*   01. Markup
*       
*       Write a program that asks the user to enter an item’s 
*       wholesale cost and its markup percentage. It should 
*       then display the item’s retail price. For example:
*
*       • If an item’s wholesale cost is 5.00 and its markup 
*           percentage is 100%, then the item’s retail price 
*           is 10.00.
*
*       • If an item’s wholesale cost is 5.00 and its markup 
*           percentage is 50%, then the item’s retail price is 
*           7.50.
*
*       The program should have a function named calculateRetail 
*       that receives the wholesale cost and the markup percentage 
*       as arguments and returns the retail price of the item.
*
*       Input Validation: Do not accept negative values for 
*       either the wholesale cost of the 
*       item or the markup percentage.
*
* 	Jesus Hilario Hernandez
* 	December 4, 2018
*
*************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes
double calculateRetail(double, double);
double inputValidate(double);

int main()
{
    // Variables
    double wholesale_cost,
           markup_percent,
           retail_price;

    // Ask the user for wholesale cost and its markup percentage
    cout << "Enter wholesale cost: ";
    wholesale_cost = inputValidate(wholesale_cost);

    cout << "Enter it's markup percentage: ";
    markup_percent = inputValidate(markup_percent) * .01;

    // Calculate
    retail_price = calculateRetail(wholesale_cost, markup_percent);

    // display the item’s retail price
    cout << "Markup percentage = %" << (markup_percent / .01) << endl;

    cout << setprecision(2) << fixed;
    cout << "Wholesale cost    = $" << wholesale_cost << endl;
    cout << "Retail price      = $" << retail_price << endl;
    

    return 0;
}

/********************************************************
 * Definition of calculateRetail                        *
 * It receives the wholesale cost and the markup        *
 * percentage as arguments and returns the retail price *
 * of the item.                                         *
 ********************************************************/
double calculateRetail(double num1, double num2)
{
    return (num1 * num2) + num1;
}

/********************************************************
 * Definition of inputValidate()                        *
 * This function checks user input for negative values  *
 * and for other data types that are not of integer     *
 * type data. If user input is such, the user will be   *
 * prompted to try again.                               *
 ********************************************************/
double inputValidate(double num)
{
    while(!(cin >> num) || (num < 0))
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}