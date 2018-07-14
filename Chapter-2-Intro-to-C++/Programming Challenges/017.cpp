#include <iostream>
using namespace std;

int main()
{
    const float COMMISSION_PERCENT = .02;

    int shares_bought = 750,
        share_price   = 35,
        total_paid    = shares_bought * share_price;

    float total_commission = total_paid * COMMISSION_PERCENT,
          total_amount_paid = total_commission + total_paid;

    cout << endl << endl;
    cout << "Total amount paid without commission: $";
    cout << total_paid << endl;

    cout << "Total amount of commission : $";
    cout << total_commission << endl;
    
    cout << "Total amount paid including commission: $";
    cout << total_amount_paid << endl;
    cout << endl << endl;
    return 0;
}