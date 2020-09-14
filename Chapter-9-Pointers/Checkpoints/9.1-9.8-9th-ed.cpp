#include <iostream>
using namespace std;

int main()
{
    // 9.1 Write a statement that displays the address of the variable count.
    int count = 9;
    int *pointer = &count;
    cout << endl;
    cout << "The address for count is " << &count;
    cout << "\nThe address for count is " << pointer;
    cout << endl;

    // 9.2 Write the definition statement for a variable fltPtr.
    // The variable should be a pointer to a float.
    float number = 57;
    float *fltPtr = &number;
    cout << endl;
    cout << "The address for number is " << &number;
    cout << "\nThe address for number is " << fltPtr;
    cout << endl;

    // 9.3 List three uses of the * symbol in C++.
    // 1. Multiplication, 
    float number_2 = count * number;
    cout << "number_2: " << number_2 << endl;
    // 2. Assigning an address to a pointer variable, 
    float *ptr = &number_2;
    cout << "ptr  = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;
    // 3. As an indirection operator
    *ptr = 100.99;
    cout << "number_2: " << number_2 << endl;
    cout << endl;


    // 9.4 What is the output of the following code?
    int x = 50, y = 60, z = 70;
    int *ptr_2 = nullptr;

    cout << x << " " << y << " " << z << endl;
    ptr_2 = &x;
    *ptr_2 *= 10;
    ptr_2 = &y;
    *ptr_2 *= 5;
    ptr_2 = &z;
    *ptr_2 *= 2;
    cout << x << " " << y << " " << z << endl;
    
    // 9.5 Rewrite the following loop so it uses pointer notation
    // (with the indirection operator) instead of subscript notation.
    int arr[10] = {5, 4, 3, 2, 1, 9, 8, 7, 6, 10};
    for (int x = 0; x < 10; x++)
        cout << arr[x] << " ";
    cout << endl;

    for (int x = 0; x < 10; x++)
        cout << *(arr + x) << " ";
    cout << endl;

    // 9.6 Assume ptr is a pointer to an int and holds the address 12000.
    // On a system with 4-byte integers, what address will be in ptr
    // after the following statement?

    int number_3, *ptr_3 = &number_3;
    cout << "ptr = " << ptr_3 << endl;
    ptr_3 += 10;
    cout << "ptr = " << ptr_3 << endl;
    cout << endl;
    // ANSWER: 12040

    // 9.7 Assume pint is a pointer variable. Is each of the following
    // statements valid or invalid? If any is invalid, why?
    // A) pint++;       ----> Valid
    // B) --pint;       ----> Valid
    // C) pint /= 2;    ----> Invalid
    // D) pint *= 4;    ----> Invalid
    // Assume x is an int.
    // E) pint += x;    ----> Valid

    // 9.8 Is each of the following definitions valid or invalid?
    // If any is invalid, why?
    // A)
    // int ivar;
    // int *iptr = &ivar;   ----> Valid
    // B)
    // int ivar_2, *iptr_2 = &ivar_2;   ----> Valid
    // C)
    // float fvar;
    // int *ptr_a = &fvar;  ----> Invalid. You cannot assing an integer pointer to a float variable address
    // D)
    // int nums[50], *iptr = nums;  ----> Valid
    // E)
    // int *iptr_3 = &ivar_3;   ----> Invalid. The variable must be created first before a pointer can use it's address.
    // int ivar_3;


    return 0;
}