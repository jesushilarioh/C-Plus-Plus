//*******************************************************
// This program calculates a customer's available credit.
//
// By: Jesus Hilario Hernandez
// Last Updated: November 21, 2016
//*******************************************************
#include <iostream>
using namespace std;

int main()
{
    int maxCredit, creditUsed, availableCredit;

    cout << "Enter the customer's maximum credit $";
    cin >> maxCredit;

    cout << "Enter the amount of credit used by the customer $";
    cin >> creditUsed;

    availableCredit = maxCredit - creditUsed;

    cout << "The customer's available credit is $"
         << availableCredit << endl;

    return 0;
}
