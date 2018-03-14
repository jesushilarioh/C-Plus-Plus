//  This program will bring in two prices and two quantities of items
//  from the keyboard and print those numbers in a formatted chart.

//JESUS HILARIO HERNANDEZ

#include <iostream>
#include <iomanip>  // Needed for formatted output
using namespace std;


int main()

{
    float price1, price2;	      // The price of 2 items
    int   quantity1, quantity2;   // The quantity of 2 items


    cout << setprecision(2) << fixed << showpoint;
    cout << "Please input the price and quantity of the first item" << endl;

    // Fill in the input statement that reads in price1 and
    // quantity1 from the keyboard.
    cin >> price1 >> quantity1;

    //ask for price and quantity of second item
    cout << "\nPlease input the price and quantity of the second item" << endl;

    // Fill in the prompt for the second price and quantity.
    cin >> price2 >> quantity2;

    // Fill in the input statement that reads in price2 and
    // quantity2 from the keyboard.

    cout << endl << setw(15) << "PRICE" << setw(12) << "QUANTITY\n\n";

    // Fill in the output statement that prints the first price
    // and quantity. Be sure to use setw() statements.
    cout << setw(14) << price1 << setw(8) << quantity1 << endl;

    // Fill in the output statement that prints the second price
    // and quantity.
    cout << setw(14) << price2 << setw(8) << quantity2 << endl << endl;

    return 0;

}
