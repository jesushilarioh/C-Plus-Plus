// This program stores the address of a variable in a pointer.
#include <iostream>
using namespace std;

int main()
{
    int x = 25;
    int *ptr = nullptr; // Or
    // int *ptr = 0;       // Or
    // int *ptr = NULL;
    ptr = &x;
    cout << "The value is x is " << x << endl;
    cout << "The address of x is " << ptr << endl;
    return 0;
}