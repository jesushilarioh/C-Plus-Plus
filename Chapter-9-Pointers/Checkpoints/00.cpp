#include <iostream>
using namespace std;
int main()
{
    // 9.1 Write a statement that displays the address of the variable count.
    // double count;
    // cout << "address for count is " << &count << endl;

    // 9.2 Write the definition statement for a variable fltPtr. 
    //      The variable should be a pointer to a float.
    // float seven = 0.9,
    //       *fltPtr = &seven;

    // cout << "address for fltPtr is " << fltPtr << endl
    //      << "address for seven is " << &seven
    //      << "\nand the value for fltPtr = " << *fltPtr << endl
    //      << "and the value for seven  = " << seven << endl;

    // *fltPtr = 9.5;

    // cout << "\naddress for fltPtr is " << fltPtr << endl
    //      << "address for seven is " << &seven
    //      << "\nand the value for fltPtr = " << *fltPtr << endl
    //      << "and the value for seven  = " << seven << endl;

    // 9.3 List three uses of the * symbol in C++.
    // A. as the multiplication operator
    // double speed = 90, 
    //        time = 100, 
    //        distance;

    // distance = speed * time;

    // B. in the definition of a pointer variable
    // int *ptr = nullptr;

    // C. as the indirection operator
    // *ptr = 100;

    // 9.4 What is the output of the following code?
    // int x = 50,
    //     y = 60,
    //     z = 70;

    // int *ptr = nullptr;

    // cout << x << " " << y << " " << z << endl;  // Output: 50 60 70

    // ptr = &x;
    // *ptr *= 10;

    // ptr = &y;
    // *ptr *= 5;

    // ptr = &z;
    // *ptr *= 2;

    // cout << x << " " << y << " " << z << endl;  // Output: 500 300 140


    // 9.5 Rewrite the following loop so it uses pointer 
    //  notation (with the indirection operator) instead 
    //  of subscript notation.
    // int arr[6] = {8, 9, 10, 21, 2, 3};
    // int *ptr = nullptr;

    // for (int x = 0; x < 6; x++) 
    //     cout << arr[x] << endl;

    // cout << endl;

    // for (int x = 0; x < 6; x++) 
    //     cout << *(arr + x) << endl;

    // cout << endl 
    //      << &arr << endl
    //      << *arr << endl
    //      << endl;

    // for (int i = 0; i < 6; i++)
    // {
    //     ptr = &arr[i];
    //     cout << "value @" << ptr << " = "
    //          << *ptr 
    //          << endl;
    // }
        
    
    // 9.6 Assume ptr is a pointer to an int and 
    //  holds the address 12000. On a system with 
    //  4-byte integers, what address will be in ptr 
    //  after the following statement?
    // ptr += 10; // 12040
    
    // 9.7 Assume pint is a pointer variable. 
    // Is each of the following statements valid or
    // invalid? If any is invalid, why?
    // A) pint++;       
    // valid: because the increment operator adds 
    //  the size of one integer to the pointer.

    // B) −−pint;       
    // valid: because the decrement operator
    //  subtracts the size of one integer from the
    //  pointer.

    // C) pint /= 2;    
    // invalid: because with the division operator
    //  you never know if the pointer will end up
    //  the proper amount of bytes apart from
    //  it's original address.

    // D) pint *= 4;    
    // invalid: because with the multiplication
    //  operator you never know if the pointer will /
    //  end up the proper amount of bytes apart 
    //  from it's original address.

    // E) pint += x;    
    // valid: because the addition operation will
    //  add the size of an integer to it's address
    // (4 bytes)
    // Assume x is an int.
    
    // 9.8 Is each of the following definitions valid or 
    //  invalid? If any is invalid, why?
    // A) 
    // int ivar;
    // int *iptr = &ivar;

    // cout << "ivar address " << &ivar << endl
    //      << "ivar       = " << ivar << endl
    //      << "iptr address " << iptr << endl
    //      << "iptr value = " << *iptr << endl;

    // Valid: because the indirection operator is used
    //  and the address operator is used;
    
    // B) 
    // int ivar, 
    //     *iptr = &ivar;

    // cout << "ivar address " << &ivar << endl
    //      << "ivar       = " << ivar << endl
    //      << "iptr address " << iptr << endl
    //      << "iptr value = " << *iptr << endl;
    
    // Valid: you can use a comma when declaring other
    //  variables with the same data type.
    
    // C) 
    // float fvar;
    // int *iptr = &fvar;

    // Invalid: the pointer must be addressed to a variable with the
    //  same data type as itself.
    
    // D) 
    // int nums[50], 
    //     *iptr = nums;
    
    // cout << "iptr = " << iptr << endl;
    // cout << "nums = " << &nums << endl;
    
    // Valid: Since the first item in an array is given the initial 
    // starting address of it's array, when defining a pointer
    // you only need to use the indirection operator to assign its
    // value.

    // E) 
    int *iptr = &ivar;
    int ivar;

    // Invalid: the variable address that is to be used by a pointer 
    //  must exist before it before it is pointed to.

    return 0;
}