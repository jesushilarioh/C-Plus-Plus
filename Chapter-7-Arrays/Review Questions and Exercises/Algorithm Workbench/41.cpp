/**
 * names is an integer array with 20 elements. 
 * Write a regular for loop, as well as a range-based 
 * for loop that prints each element of the array.
 */
#include <iostream>
using namespace std;
int main()
{
    const int ARRAY_SIZE = 20;
    int names[ARRAY_SIZE] = {};

    // Regular for loop
    cout << "for loop: " << endl;
    for(int i = 0; i < ARRAY_SIZE; i++)
        cout << names[i] << ", ";
    cout << endl;
    
    // Range base for loop
    cout << "range-based for loop: " << endl;
    for(int name : names)
        cout << name << ", ";
    cout << endl;
    
    return 0;
}