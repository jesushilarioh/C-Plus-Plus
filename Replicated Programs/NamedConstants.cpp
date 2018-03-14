// This program uses the const qualifier to create constants for literals
// JESUS HILARIO HERNANDEZ

#include <iostream>
#include <string>
using namespace std;


int main()
{
    //constants
    const double e = 2.71828;
    const long double NumOfMinInYear = 5.256E5;
    const long double GravAccelFtPerSec = 32.2;
    const long double GravAccelMetPerSec = 9.8;
    const long double NumOfMetInMil = 1609;

    //variables that will utilize constants
    double c1, c2, c3, c4 , c5;

    //5 examples of calculations utilizing Named Constants
    c1 = e * NumOfMinInYear;
    c2 = e * GravAccelFtPerSec;
    c3 = GravAccelFtPerSec * GravAccelMetPerSec;
    c4 = NumOfMinInYear - NumOfMetInMil;
    c5 = GravAccelMetPerSec / NumOfMetInMil;

    //Output of each variables using the Names Constants
    cout << c1 << endl;
    cout << c2 << endl;
    cout << c3 << endl;
    cout << c4 << endl;
    cout << c5 << endl;



    return 0;
}
