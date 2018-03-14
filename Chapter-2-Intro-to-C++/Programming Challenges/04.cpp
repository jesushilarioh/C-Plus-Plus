/********************************************************************
*
*	04. RESTAURANT BILL
*       Write a program that computes the tax and tip on a restaurant
*       bill for a patron with a $88.67 meal charge. The tax should be
*       6.75 percent of the meal cost. The tip should be 20 percent
*       of the total after adding the tax. Display the meal cost, tax
*       amount, tip amount, and total bill on the screen.
*
* 	Jesus Hilario Hernandez
* 	December 18th 2017
*
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float mealCharge = 88.67,
          taxPercentage = .0675,
          tipPercentage = .20,
          mealChargeTaxAmount = mealCharge * taxPercentage,
          mealChargeTipAmount = (mealCharge + mealChargeTaxAmount) * tipPercentage;

    cout << setprecision(2) << fixed;
    cout << "\nMeal cost : $" << mealCharge << endl;
    cout << "Tax amount: $" << mealChargeTaxAmount << endl;
    cout << "Tip amount: $" << mealChargeTipAmount << endl;
    cout << "Total bill: $" << mealCharge + mealChargeTaxAmount + mealChargeTipAmount << endl << endl;

    return 0;
}
