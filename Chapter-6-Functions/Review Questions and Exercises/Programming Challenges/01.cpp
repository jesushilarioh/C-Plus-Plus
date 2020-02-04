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

double calculateRetail(double, double);
double inputValidate(double);

int main()
{
    double wholesale_cost,
           markup_percent,
           retail_price;

    cout << "Enter wholesale cost: ";
    wholesale_cost = inputValidate(wholesale_cost);

    cout << "Enter it's markup percentage: ";
    markup_percent = inputValidate(markup_percent) * .01;

    retail_price = calculateRetail(wholesale_cost, markup_percent);

    cout << "Markup percentage = %" 
         << (markup_percent / .01) 
         << endl;

    cout << setprecision(2) << fixed
    
         << "Wholesale cost    = $" 
         << wholesale_cost 
         << endl

         << "Retail price      = $" 
         << retail_price 
         << endl;
    
    return 0;
}

double calculateRetail(double num1, double num2)
{
    return (num1 * num2) + num1;
}

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