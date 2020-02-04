#include <iostream>
using namespace std;
/*
 *  (81.)
 *  Errors include:
 * 1). array size declarator must be a negative number.
 * the size of an array must be greater than zero
 */ 

int main()
{
    // ORIGINAL
    // int collection[-20];

    // CORRECTION
    int collection[20];
    
    return 0;
}