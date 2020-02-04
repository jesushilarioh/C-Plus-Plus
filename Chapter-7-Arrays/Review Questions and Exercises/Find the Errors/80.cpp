#include <iostream>
using namespace std;
/*
 *  (80.)
 *  Errors include:
 * 1). The variable size should be a constant integer.
 * 2). The constant variable size should be initialized.
 * 
 */ 

int main()
{
    // ORIGINAL
    // int size;
    // double values[size];

    // CORRECTION
    const int size = 20;
    double values[size];
    
    return 0;
}