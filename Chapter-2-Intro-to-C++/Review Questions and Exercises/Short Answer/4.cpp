//******************************************************************
// Write assignment statements that perform the following operations
// with the variables a, b, and c.
//
// By: Jesus Hilario Hernandez
// Last Updated: November 22, 2016
//******************************************************************
#include <iostream>
using namespace std;

int main()
{
    double a, b;
    char c;

    // A.
    a = 2;
    b = a;
    cout << "The value in a is " << a << endl;
    cout << "The value in b is " << b << endl;

    // B.
    a = b * 4;
    cout << "The value in a is now " << a << endl;

    // C.
    b = a / 3.14;
    cout << "The value of variable b is now " << b << endl;

    // D.
    a = b - 8;
    cout << "The value of variable a is now " << a << endl;

    // E.
    a = 27;
    cout << "The value in variable a is now " << a << endl;

    // F.
    c = 'K';
    cout << "The value in variable c is " << c << endl;

    // G.
    c = 66;
    cout << "The value in variable c is now " << c << endl;
    return 0;
}
