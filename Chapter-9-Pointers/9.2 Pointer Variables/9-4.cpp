// This program demonstrates a pointer variable referencing
// different variables.
#include <iostream>
using namespace std;

int main()
{
    int x = 25, y = 50, z = 75;
    int *ptr = nullptr;

    cout << "Here are the values of x, y, and z:\n";
    cout << x << " " << y << " " << z << endl;

    ptr = &x;
    *ptr += 100;

    ptr = &y;
    *ptr += 100;

    ptr = &z;
    *ptr += 100;

    cout << "Once again, here are the values of x, y, and z:\n";
    cout << x << " " << y << " " << z << endl;
    
    return 0;
}