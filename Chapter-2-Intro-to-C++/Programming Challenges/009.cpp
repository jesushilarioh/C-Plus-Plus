#include <iostream>
using namespace std;

int main()
{
    char letter;
    int number;
    float decimal;
    double another_decimal;

    cout << endl;
    cout << "A char uses " << sizeof(letter) << " byte(s)." << endl;
    cout << "An int uses " << sizeof(number) << " byte(s)." << endl;
    cout << "A float uses " << sizeof(decimal) << " byte(s)." << endl;
    cout << "A double uses " << sizeof(another_decimal) << " byte(s)." << endl;
    cout << endl;

    return 0;
}