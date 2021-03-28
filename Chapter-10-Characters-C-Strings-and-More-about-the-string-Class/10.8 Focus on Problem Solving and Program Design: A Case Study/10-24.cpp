#include <iostream>
#include <string>

using namespace std;

void dollarFormat(string &);

int main()
{
    string input;

    cout << "Enter a dollar amount in the form nnnnn.nn : ";
    cin >> input;
    dollarFormat(input);
    cout << "Here is the amount formatted: \n"
         << input << endl;

    return 0;
}

void dollarFormat(string &currency)
{
    int decimal_point;

    decimal_point = currency.find('.');

    cout << "decimal_point = " << decimal_point << endl;

    if (decimal_point > 3)
    {
        for (int x = decimal_point - 3; x > 0; x -= 3)
            currency.insert(x, ",");
    }
    currency.insert(0, "$");
}