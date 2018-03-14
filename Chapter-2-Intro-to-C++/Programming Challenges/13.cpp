/********************************************************************
*
*	13. CIRCUIT BOARD PRICE
*       An electronic company sells circuit boards at a 35 percent
*       profit. Write a program that will calculate the selling price
*       of a circuit board that costs $14.95. Display the result on
*       the screen.
*
* 	Jesus Hilario Hernandez
* 	December 27th 2017
*
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float profit = .35;
    float sellingPrice = 14.95;

    cout << setprecision(2) << fixed;

    cout << endl;
    cout << "An electronic company sells circuit boards at a 35 percent profit." << endl;
    cout << "Therefore, the selling price of a circuit board that costs $";
    cout << sellingPrice;
    cout << " is $" << (sellingPrice * profit) + sellingPrice;
    cout << endl << endl;

    return 0;
}
