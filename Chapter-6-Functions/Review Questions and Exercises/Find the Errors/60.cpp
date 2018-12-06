#include <iostream>
using namespace std;
/*
 *  (60.)
 *  Errors include:
 * 
 */ 
// ORIGINAL
// (Overloaded functions)
// int getValue() 
// {
//     int inputValue;
//     cout << "Enter an integer: "; 
//     cin >> inputValue;
//     return inputValue;
// }
// double getValue() 
// {
//     double inputValue;
//     cout << "Enter a floating-point number: "; 
//     cin >> inputValue;
//     return inputValue;
// }

// CORRECTION
int getValue(int number) 
{
    int inputValue;
    cout << "Enter an integer: "; 
    cin >> inputValue;
    return inputValue;
}
double getValue(double number) 
{
    double inputValue;
    cout << "Enter a floating-point number: "; 
    cin >> inputValue;
    return inputValue;
}

// APPLICATION
int main()
{
    cout << getValue(78) << endl;
    cout << getValue(0.9) << endl;
    return 0;
}