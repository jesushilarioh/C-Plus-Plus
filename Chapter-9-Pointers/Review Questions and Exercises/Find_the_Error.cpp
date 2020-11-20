#include <iostream>
using namespace std;

// 56. 
// void doubleVal(int val) 
void doubleVal(int *val) 
{
    *val *= 2; 
}

// 60. 
// int *getNum() 
int *getNum(int *wholeNum)
{
    // int wholeNum;
    cout << "Enter a number: "; 
    cin >> *wholeNum;
    // return &wholeNum;
    return wholeNum;
}

// 62. 
// void doSomething(int * const ptr)
void doSomething(int *ptr) 
{
    int localArray[] = { 1, 2, 3 };
    ptr = localArray; 
}

int main()
{
    // Each of the following definitions and program segments has errors. Locate as many as you can.
    
    // 48. 
    // int ptr* = nullptr;
    int *ptr = nullptr;

    // 49. 
    int x, *ptr = nullptr;
    // &x = ptr;
    ptr = &x;

    // 50. 
    int x, *ptr = nullptr; 
    // *ptr = &x;
    ptr = &x;

    // 51. 
    int x, *ptr = nullptr; 
    ptr = &x;
    // ptr = 100; // Store 100 in x 
    *ptr = 100;
    cout << x << endl;

    // 52. 
    int numbers[] = {10, 20, 30, 40, 50};
    cout << "The third element in the array is "; 
    // cout << *numbers + 3 << endl;
    cout << *(numbers + 3) << endl;

    // 53. 
    int values[20], *iptr = nullptr; 
    iptr = values;
    // iptr *= 2;
    *iptr *= 2;

    // 54. 
    float level;
    // int fptr = &level;
    float *fptr = &level;

    // 55. 
    int ivalue; // Place efore, not after pointer initialization
    int *iptr = &ivalue; 
    // int ivalue;

    // 57. 
    int *pint = nullptr; 
    // new pint;
    pint = new int;

    // 58. 
    int *pint2 = nullptr; 
    pint2 = new int;

    if (pint2 == nullptr)
        *pint2 = 100; 
    else
        cout << "Memory allocation error\n";
    
    // Added...
    delete pint2;
    pint2 = nullptr;

    // 59. 
    int *pint3 = nullptr;
    pint3 = new int[100]; // Allocate memory
    // . .
    // Code that processes the array.
    // .
    // .
    // delete pint3; // Free memory
    // Added...
    delete [] pint3;
    pint3 = nullptr;

    // 61.
    const int array2[] = { 1, 2, 3 }; 
    // int *ptr = array2;
    const int *ptr = array2;


    return 0;
}