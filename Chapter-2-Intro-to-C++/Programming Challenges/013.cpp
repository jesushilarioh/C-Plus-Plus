#include <iostream>
using namespace std;

int main()
{
    float profit = .35,
          cost = 14.95,
          selling_price = (cost * profit) + cost;

    cout << endl;
    cout << "An electronic company sells circuit boards\nat ";
    cout << (profit * 100);
    cout << " percent profit. Therefore, the selling price\n";
    cout << "of a curciut board that costs $" << cost;
    cout << " is $" << selling_price << endl;
    cout << endl;
    return 0;
}