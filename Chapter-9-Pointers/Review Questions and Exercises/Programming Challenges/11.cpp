/**
 * 
 * 11. Array Expander
 * Write a function that accepts an int array and 
 * the array’s size as arguments. The function 
 * should create a new array that is twice the size 
 * of the argument array. The function should copy 
 * the contents of the argument array to the new array 
 * and initialize the unused elements of the second 
 * array with 0. The function should return a pointer 
 * to the new array.
 * 
 */ 
#include <iostream>
using namespace std;

int *doubleArraySize(int [], const int);
void displayArray(int *, const int);

int main()
{
    const int SIZE = 5;
    int numbers[SIZE] = {2, 4, 6, 8, 10};
    
    int *numbers_double = doubleArraySize(numbers, SIZE);

    displayArray(numbers, SIZE);
    cout << endl;
    displayArray(numbers_double, (SIZE * 2));
    cout << endl << endl;

    delete [] numbers_double;
    numbers_double = nullptr; // 0x0

    return 0;
}

int *doubleArraySize(int array[], const int SIZE)
{
    const int NEW_SIZE = SIZE * 2;
    int *newArray = new int[NEW_SIZE];

    for (int i = 0; i < NEW_SIZE; i++)
    {
        if (i >= SIZE)
            *(newArray + i) = 0;
        else
            *(newArray + i) = array[i];
        
    }
    
    return newArray;
}

void displayArray(int *array, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
        cout << *(array + i) << " ";
    
}