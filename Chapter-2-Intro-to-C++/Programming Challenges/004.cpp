#include <iostream>
using namespace std;

int main()
{
    const float TAX = .0675,
                TIP = .20;
    
    float meal_charge = 88.67,
          meal_tax_amount = meal_charge * TAX,
          meal_tip_amount = (meal_charge + meal_tax_amount) * TIP,
          total_bill = meal_charge + meal_tax_amount + meal_tip_amount;

    cout << "\nMeal cost: $" << meal_charge << endl;
    cout << "Tax amount: $" << meal_tax_amount << endl;
    cout << "Tip amount: $" << meal_tip_amount << endl;
    cout << "Total bill: $" << total_bill << endl;

    return 0;
}