#include <iostream>
using namespace std;
/*
 *  (86.)
 *  Errors include:
 * 1). A for loop or a range-based for loop (in C++11)
 * must be used to display the contents of an array.
 * 
 */ 

int main()
{
    // ORIGINAL
    // char greeting[] = {'H', 'e', 'l', 'l', 'o'};
    // cout << greeting;

    // CORRECTION
    const int ARRAY_SIZE = 5;
    char greeting[ARRAY_SIZE] = {'H', 'e', 'l', 'l', 'o'};

    for (int letter = 0; letter < ARRAY_SIZE; letter++)
    {
        cout << greeting[letter];
    }
    // C++11, using range-based for loop
    for(auto letter : greeting)
    {
        cout << letter;
    }
    
    return 0;
}