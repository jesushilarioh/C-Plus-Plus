// This program uses the & operator to determine a variable's
// address and the sizeof operator to determine its size.
#include <iostream>
using namespace std;

int main()
{
    int x = 25;

    cout << "The address of x is " << &x << endl;
    cout << "The size of x is " << sizeof(x) << " bytes\n";
    cout << "The value in x is " << x << endl;
    cout << endl;

    double y = 3.9;

    cout << "The address of y is " << &y << endl;
    cout << "The size of y is " << sizeof(y) << " bytes\n";
    cout << "The value in y is " << y << endl;
    cout << endl;

    char z = 'l';

    cout << "The address of z is " << &z << endl;
    cout << "The size of z is " << sizeof(z) << " bytes\n";
    cout << "The value in z is " << z << endl;
    cout << endl;

    return 0;
}