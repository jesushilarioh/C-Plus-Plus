#include <iostream>
#include <string>
using namespace std;

void dollarFromat(string &);

int main()
{
    string input;

    cout << "Enter a dollar amount in the for nnnnn.nn : ";
    cin >> input;
    dollarFromat(input);
    cout << "Here is the amount formatted:\n";
    cout << input << endl;

    return 0;
}
void dollarFromat(string &currency)
{
    int dp;

    dp = currency.find('.');
    if (dp > 3)
    {
        for (int x = dp -3; x > 0; x -= 3)
            currency.insert(x, ",");
    }
    currency.insert(0, "$");
}