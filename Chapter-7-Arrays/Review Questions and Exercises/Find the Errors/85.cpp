#include <iostream>
using namespace std;
/*
 *  (85.)
 *  Errors include:
 * 1). either a size declarator, a list of values,
 * or both are needed when defining an array.
 * It’s possible to define an array without 
 * specifying its size, as long as you provide 
 * an initialization list. 
 * 
 */ 

int main()
{
    // ORIGINAL
    // float ratings[];

    // CORRECTION
    float ratings[9];
    // or
    float ratings[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    return 0;
}