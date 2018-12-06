#include <iostream>
using namespace std;
/*
 *  (59.)
 *  Errors include:
 * a). the ampersand should be written before the 
 *      variable name
 * b). ampersand only need to be specified in 
 *      the header
 * 
 */ 
// ORIGINAL
// void getValue(int value&) 
// {
//     cout << "Enter a value: ";
//     cin >> value&; 
// }

// CORRECTION
void getValue(int &value) 
{
    cout << "Enter a value: ";
    cin >> value; 
}

// APPLICATION
int main()
{
    int number = 29;

    cout << "number variable before function = "
         << number << endl;

    getValue(number);

    cout << "number variable after function = "
         << number << endl;

    return 0;
}