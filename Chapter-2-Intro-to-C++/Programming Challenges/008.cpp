#include <iostream>
using namespace std;

int main()
{
    const float SALES_TAX = .07;

    float item_1 = 15.95,
          item_2 = 24.95,
          item_3 = 6.95,
          item_4 = 12.95,
          item_5 = 3.95,
          subtotal = item_1 + item_2 + item_3 + item_4 + item_5,
          total_sales_tax = subtotal * SALES_TAX,
          grand_total = subtotal + total_sales_tax;

    cout << endl;
    cout << "Item 1 = $" << item_1 << endl;
    cout << "Item 2 = $" << item_2 << endl;
    cout << "Item 3 = $" << item_3 << endl;
    cout << "Item 4 = $" << item_4 << endl;
    cout << "Item 5 = $" << item_5 << endl;
    cout << "Subtotal = $" << subtotal << endl;
    cout << "Sales Tax = $" << total_sales_tax << endl;
    cout << "Grand Total = $" << grand_total << endl;
    cout << endl;

    return 0;
}