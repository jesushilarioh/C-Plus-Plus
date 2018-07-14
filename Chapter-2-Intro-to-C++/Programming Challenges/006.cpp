#include <iostream>
using namespace std;

int main()
{
    const double PERIODS = 26;
    double pay_amount = 2200.0,
           annual_pay = pay_amount * PERIODS;

    cout << endl << endl;
    cout << "Total annual pay = $" << annual_pay << endl;
    cout << endl;
    return 0;
}