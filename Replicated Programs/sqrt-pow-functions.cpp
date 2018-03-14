// This program asks for the lengths of the two side of a
// right triangle. The length of the hypotenuse is then
// calculated and displayed.

//JESUS HILARIO HERNANDEZ

//Last modified: 9/26/2016

#include <iostream>       //for input output
#include <iomanip>        //for setprecision()
#include <cmath>          //For the sqrt() and pow() functions.
using namespace std;

int main()
{
    double a, b, c;

    cout << "Enter the length of side a: ";
    cin >> a;
    cout << "Enter the length of side b: ";
    cin >> b;
    
    //use pathag theorem
    c = sqrt(pow(a, 2.0) + pow(b, 2.0));    //Use 2.0 for decimal answers, instead of just 2
    cout << "The length of the hypotenuse is ";
    cout << setprecision(2) << c << endl << '\n';

    return 0;
}
