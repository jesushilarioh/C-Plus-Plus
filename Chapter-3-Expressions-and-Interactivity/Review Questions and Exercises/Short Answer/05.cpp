/********************************************************************
*
*	05. Write C++ expressions for the following algebraic
*       expressions:
*       -   a = 12x
*       -   y = x^4
*       -   z = 5x + 14y + 6k
*       -   g = h + 12 / 4k
*       -   c = a^3 / b^2 k^4
*
* 	Jesus Hilario Hernandez
* 	December 29th 2017
*
*
********************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Variables.
    int x = 2,
        k = 2,
        h = 2,
        b = 2;

    // Expressions.
    int a = 12 * x,
        y = pow(x, 4),
        z = (5 * x) + (14 * y) + (6 * k),
        g = (h + 12) / (4 * k),
        c = pow(a, 3) / (pow(b, 2) * pow(k, 4));


    // print values to to screen.
    cout << endl;

    cout << "a = 12x = " << a << endl;
    cout << "y = x^4 = " << y << endl;
    cout << "z = 5x + 14y + 6k = " << z << endl;
    cout << "g = h + 12 / 4k = " << g << endl;
    cout << "c = a^3 / b^2 k^4 = " << c << endl;

    cout << endl;





    return 0;
}
