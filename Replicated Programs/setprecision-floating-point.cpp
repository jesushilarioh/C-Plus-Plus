//This program demonstrates how setprecision rounds
// a floating point value

//JESUS HILARIO HERNANDEZ

//Last modified: 9/27/2016

#include <iostream>     //for input output
#include <iomanip>      //  REQUIRED FOR setprecision() manipulator
using namespace std;

int main()
{
    double quotient, number1 = 132.3664, number2 = 26.91;

    quotient = number1 / number2;
    cout << quotient << endl;
    cout << setprecision(5) << quotient << endl; //float 5 digits NOT! decimal places
    cout << setprecision(4) << quotient << endl; //float 4 digits NOT! decimal places
    cout << setprecision(3) << quotient << endl; //float 3 digits NOT! decimal places
    cout << setprecision(2) << quotient << endl; //float 2 digits NOT! decimal places
    cout << setprecision(1) << quotient << endl; //float 1 digits NOT! decimal places

    //If the value of a number is expressed in fewer digits of precision than specified,
    //the manipulator will have no effect.
    cout << '\n' << setprecision(5) << 21.2 << endl;
    cout << setprecision(5) << 54 << endl;
    cout << setprecision(5) << 67.34552 << endl;

    return 0;
}
