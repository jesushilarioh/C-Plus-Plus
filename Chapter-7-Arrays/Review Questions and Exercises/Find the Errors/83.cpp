#include <iostream>
using namespace std;
/*
 *  (83.)
 *  Errors include:
 * 1). braces need to be use when initializing 
 * an array with values.
 */ 

int main()
{
    // ORIGINAL
    // int hours[3] = 8, 12, 16;

    // CORRECTION
    int hours[3] = {8, 12, 16};
    
    return 0;
}