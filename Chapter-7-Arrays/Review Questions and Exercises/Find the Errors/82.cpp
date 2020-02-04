#include <iostream>
using namespace std;
/*
 *  (82.)
 *  Errors include:
 * 1). test expression in for loop must be
 * same number as the array size declarator
 */ 

int main()
{
    // ORIGINAL
    // int table[10];
    // for (int x = 0; x < 20; x++)
    // {
    //     cout << "Enter the next value: "; 
    //     cin >> table[x];
    // }

    // CORRECTION
    const int ARRAY_SIZE = 10;

    int table[ARRAY_SIZE];
    
    for (int x = 0; x < ARRAY_SIZE; x++)
    {
        cout << "Enter the next value: "; 
        cin >> table[x];
    }
    
    return 0;
}