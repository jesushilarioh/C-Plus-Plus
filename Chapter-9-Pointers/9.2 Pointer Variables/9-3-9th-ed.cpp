// This program demonstrated the use of the indirection operator.
#include <iostream>
using namespace std;

int main()
{
    int x = 25;         // int variable
    int *ptr = nullptr; // Pointer variable, can point to an int

    ptr = &x;           // Store the address of x in ptr
    
    // Use both x and ptr to display the value in x.
    cout << "Here is the value in x, printed twice:\n";
    cout << "x    = " << x    << endl;      // Displays the contents of x
    cout << "*ptr = " << *ptr << endl;   // Displays the contents of x through ptr

    // Assign 100 to the location pointed to by ptr. This
    // will actually assign 100 to x.
    *ptr = 100;

    // Use both x and ptr to display the value in x.
    cout << "\nOnce again, here is the value in x:\n";
    cout << "x    = " << x    << endl;
    cout << "*ptr = " << *ptr << endl;
    cout << "@ address: " << &x << endl;
    cout << "@ address: " << ptr << endl;


    *ptr = 788;

    cout << "\nOnce again, here is the value in x:\n";
    cout << "x    = " << x    << endl;
    cout << "*ptr = " << *ptr << endl;
    cout << "@ address: " << &x << endl;
    cout << "@ address: " << ptr << endl;


    double y = 67.17;
    double *ptr2 = nullptr;

    ptr2 = &y;

    cout << "\nHere is the value in y:\n";
    cout << "y     = " << y << endl;
    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "@ address: " << &y << endl;
    cout << "@ address: " << ptr2 << endl;

    y = 78.87;

    cout << "\nHere is the value in y:\n";
    cout << "y     = " << y << endl;
    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "@ address: " << &y << endl;
    cout << "@ address: " << ptr2 << endl;

    *ptr2 = 89.9001;
    cout << "\nHere is the value in y:\n";
    cout << "y     = " << y << endl;
    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "@ address: " << &y << endl;
    cout << "@ address: " << ptr2 << endl;
    
    return 0;
}