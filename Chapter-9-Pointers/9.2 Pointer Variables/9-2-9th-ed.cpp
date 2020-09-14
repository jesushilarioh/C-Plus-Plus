// This program stores the address of a variable in a pointer.
#include <iostream>
using namespace std;

int main()
{
    int x = 25;         // int variable
    int *ptr = nullptr;  // Pointer variable, can point to an int

    cout << "The address of ptr is " << ptr << endl;

    ptr = &x;

    cout << "The value in x is " << x << endl;
    cout << "The address of ptr (x) is " << ptr << endl;

    int y = 75;
    ptr = &y;

    cout << "The value in y is " << y << endl;
    cout << "The address of ptr (y) is " << ptr << endl;

    int z = 89032;
    
    cout << "The value in z is " << z << endl;
    cout << "The address of ptr (z) is " << ptr << endl;

    double a = 89.900;
    double *ptr2 = nullptr;

    cout << "\nThe address of ptr2 is " << ptr2 << endl;
    
    ptr2 = &a;

    cout << "The value in a is " << a << endl;
    cout << "The address of ptr2 (z) is " << ptr2 << endl;

    return 0;
}