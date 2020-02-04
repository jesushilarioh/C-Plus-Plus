#include <iostream>
using namespace std;
/*
 *  (84.)
 *  Errors include:
 * 1). When initializing an array with values,
 * values cannot be skipped.
 * If you leave an element uninitialized, you 
 * must leave all the elements that follow it 
 * uninitialized as well. (Section 7.4)
 */ 

int main()
{
    // ORIGINAL
    // int numbers[8] = {1, 2, , 4, , 5};

    // CORRECTION
    int numbers[8] = {1, 2, 0, 4, 0, 5};
    // or
    int numbers[8] = {1, 2, 4, 5};
    
    return 0;
}