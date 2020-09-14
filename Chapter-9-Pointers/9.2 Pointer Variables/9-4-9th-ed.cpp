// This program demonstrates a pointer variable referencing 
// different variables.
#include <iostream>
using namespace std;

int main()
{
    int x = 25, y = 50, z = 75; // Three in variables
    int *ptr = nullptr;         // Pointer variable

    // Display the contents of x, y, and z.
    cout << "Here are the values of x, y, and z:\n";
    cout << "x = " << x << endl 
         << "y = " << y << endl
         << "z = " << z << endl;
    cout << "ptr @ address: " << ptr << endl;

    // Use the pointer to manipulate x, y, and z.
    ptr = &x;       // Store the address of x in ptr.
    *ptr += 100;    // Add 100 to the value in x.

    cout << "\nHere are the values of x, y, and z:\n";
    cout << "x = " << x << endl 
         << "y = " << y << endl
         << "z = " << z << endl;
    cout << "x   @ address: " << &x << endl;
    cout << "ptr @ address: " << ptr << endl;

    ptr = &y;       // Store the address of y in ptr.
    *ptr += 100;    // Add 100 to the value in y.

    cout << "\nHere are the values of x, y, and z:\n";
    cout << "x = " << x << endl 
         << "y = " << y << endl
         << "z = " << z << endl;
    cout << "y   @ address: " << &y << endl;
    cout << "ptr @ address: " << ptr << endl;

    ptr = &z;       // Store the address of z in ptr.
    *ptr += 100;    // Add 100 to the value in z.

    cout << "\nHere are the values of x, y, and z:\n";
    cout << "x = " << x << endl 
         << "y = " << y << endl
         << "z = " << z << endl;
    cout << "z   @ address: " << &z << endl;
    cout << "ptr @ address: " << ptr << endl;

    return 0;
}