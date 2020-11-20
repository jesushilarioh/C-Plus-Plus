/**
 *  1. Array Allocator
 * 
 *  Write a function that dynamically allocates an array of 
 * integers. The function should accept an integer argument 
 * indicating the number of elements to allocate. The function 
 * should return a pointer to the array.
 */
#include <iostream>
using namespace std;

int *dynAllocateArray(int);

int main()
{
    const int ARRAY_SIZE = 5;
    int *numbers = dynAllocateArray(ARRAY_SIZE);

    cout << "Enter #s: " << endl;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "#" << (i + 1) << ": ";
        cin >> *(numbers + i);
    }
    
    for (int i = 0; i < ARRAY_SIZE; i++)
        cout << *(numbers + i) << endl;
    
    delete [] numbers;
    numbers = nullptr;

    return 0;
}

int *dynAllocateArray(int SIZE)
{
    return new int[SIZE];
}