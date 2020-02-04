/************************************************************
 *
 *   14. Order Status
 *
 *      The Middletown Wholesale Copper Wire Company sells 
 *      spools of copper wiring for $100 each. Write a program 
 *      that displays the status of an order. The program 
 *      should have a function that asks for the following data:
 *  
 *      • The number of spools ordered.
 *      • The number of spools in stock.    
 *      • Whether there are special shipping and handling 
 *          charges.
 * 
 *      (Shipping and handling is normally $10 per spool.) 
 *      If there are special charges, the program should ask 
 *      for the special charges per spool.
 * 
 *      The gathered data should be passed as arguments to 
 *      another function that displays
 * 
 *      • The number of spools ready to ship from current stock.
 *      • The number of spools on backorder (if the number 
 *          ordered is greater than what is in stock).
 *      • Subtotal of the portion ready to ship (the number of 
 *          spools ready to ship times $100).
 *      • Total shipping and handling charges on the portion 
 *          ready to ship.
 *      • Total of the order ready to ship.
 *  
 *      The shipping and handling parameter in the second 
 *      function should have the default argument 10.00.
 * 
 *      Input Validation: Do not accept numbers less than 1 
 *                          for spools ordered. Do not accept 
 *                          a number less than 0 for spools in 
 *                          stock or shipping and handling 
 *                          charges.
 *
 * 	Jesus Hilario Hernandez
 * 	December 18th, 2018
 *
 *************************************************************/
#include <iostream>
using namespace std;

// Global constants

// Function Prototypes
double inputValidate(double, double);
void getOrderInfo();
void displayOrderInfo(double, double, double = 10.00);
char inputValidate(char);

int main()
{
    getOrderInfo();

    return 0;
}

/********************************************************
 * function definition for getOrderInfo():              *
 * This function asks for the following data:           *
 *      • The number of spools ordered.                 *
 *      • The number of spools in stock.                *
 *      • Whether there are special shipping and        *
 *          handling charges.                           *
 * (Shipping and handling is normally $10 per spool.)   * 
 * If there are special charges, the program should ask *
 * for the special charges per spool.                   *
 ********************************************************/
void getOrderInfo()
{
    double num_spools_ordered,
        num_spools_in_stock,
        special_charges;
    
    char user_choice;
    
    cout << "Enter number of spools ordered: ";
    num_spools_ordered = inputValidate(num_spools_ordered, 1);

    cout << "Enter number of number of spools in stock: ";
    num_spools_in_stock = inputValidate(num_spools_in_stock, 0);

    cout << "Any special shipping & handling charges? (y/n):";
    user_choice = inputValidate(user_choice);

    if (user_choice == 'Y' || user_choice == 'y')
    {
        cout << "Enter special shipping & handling charges: ";
        special_charges = inputValidate(special_charges, 0);
        displayOrderInfo(num_spools_ordered, 
                     num_spools_in_stock, 
                     special_charges);
    }
    else
    {
        displayOrderInfo(num_spools_ordered, 
                     num_spools_in_stock);
    }
}

/****************************************************
 * Definition for inputValidate():                  *
 * inputValidate checks user input for a double     *
 * less than the second parameter. If a double less *
 * than the second parameter is found, a while      *
 * loop displays an error, clears and ignores       *
 * previous input, and prompts the user to try      *
 * again.                                           *
 ****************************************************/
double inputValidate(double num1, double num2)
{
    
    while(!(cin >> num1) || num1 < num2)
    {
        cout << "Error. Integer must not be "
             << " less than " << num2 << ": ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return num1;
}

char inputValidate(char letter)
{
    cin >> letter;

    while (!((letter == 'y') || (letter == 'Y') || (letter == 'n') || (letter == 'N')))
    {
        cout << "ERROR: a Y or an N must be entered: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> letter;
    }
    return letter;
}
/****************************************************
 * Definition for displayOrderInfo():               *
 *                                                  *
 * This function displays the following info:       *
 *  • The number of spools ready to ship from       *
 *      current stock.                              *
 *  • The number of spools on backorder (if the     *
 *      number                                      *
 *      ordered is greater than what is in stock).  *
 *  • Subtotal of the portion ready to ship (the    *
 *      number of spools ready to ship times $100). *
 *  • Total shipping and handling charges on the    *
 *      portion ready to ship.                      *
 *  • Total of the order ready to ship.             *
 ****************************************************/ 
void displayOrderInfo(double num_spools_ordered, 
                      double num_spools_in_stock, 
                      double special_charges)
{
    const double PRICE_PER_SPOOL = 100.00;
    double spools_on_backorder,
           subtotal,
           spools_ready_to_ship,
           total,
           total_special_charges;

    cout << "num_spools_ordered = " 
         << num_spools_ordered
         << endl;

    cout << "num_spools_in_stock = " 
         << num_spools_in_stock
         << endl;

    cout << "special_charges = " 
         << special_charges
         << endl;

    if (num_spools_ordered > num_spools_in_stock)
    {
        spools_on_backorder = num_spools_ordered 
                            - num_spools_in_stock;
        
        spools_ready_to_ship = num_spools_ordered
                             - spools_on_backorder;

        subtotal = spools_ready_to_ship 
                 * PRICE_PER_SPOOL;
        
        total_special_charges = spools_ready_to_ship 
                              * special_charges;
        
        total = subtotal + total_special_charges;

        cout << "spools_on_backorder = " 
             << spools_on_backorder
             << endl;

        cout << "spools_ready_to_ship = " 
             << spools_ready_to_ship
             << endl;

        cout << "PRICE_PER_SPOOL = " 
             << PRICE_PER_SPOOL
             << endl;

        cout << "subtotal = " 
             << subtotal
             << endl;
            
        cout << "special_charges = " 
             << special_charges
             << endl;
        
        cout << "total_special_charges = "
             << total_special_charges
             << endl;

        cout << "total = "
             << total
             << endl;
    } 
    else
    {
        spools_ready_to_ship = num_spools_ordered;

        subtotal = spools_ready_to_ship 
                 * PRICE_PER_SPOOL;
        
        total_special_charges = spools_ready_to_ship 
                              * special_charges;

        total = subtotal + total_special_charges;

        cout << "spools_ready_to_ship = " 
             << spools_ready_to_ship
             << endl;

        cout << "PRICE_PER_SPOOL = " 
             << PRICE_PER_SPOOL
             << endl;

        cout << "subtotal = " 
             << subtotal
             << endl;

        cout << "special_charges = " 
             << special_charges
             << endl;

        cout << "total_special_charges = "
             << total_special_charges
             << endl;

        cout << "total = " 
             << total
             << endl;
    }
}