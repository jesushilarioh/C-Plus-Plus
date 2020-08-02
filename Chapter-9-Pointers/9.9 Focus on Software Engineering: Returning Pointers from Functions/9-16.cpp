// This program uses a function to duplicate
// an int array of any size.
#include <iostream>
using namespace std;

int *duplicateArray(const int *, int);
void displayArray(const int[], int);

int main()
{
    const int SIZE1 = 5, 
              SIZE2 = 7, 
              SIZE3 = 10;
    
    int array1[SIZE1] = { 100, 200, 300, 400, 500 };
    int array2[SIZE2] = { 10, 20, 30, 40, 50, 60, 70 };
    int array3[SIZE3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,10 };

    int *dup1 = nullptr, 
        *dup2 = nullptr,
        *dup3 = nullptr;

    dup1 = duplicateArray(array1, SIZE1);
    dup2 = duplicateArray(array2, SIZE2);
    dup3 = duplicateArray(array3, SIZE3);

    cout << "Here are the original array contents:\n";
    displayArray(array1, SIZE1);
    displayArray(array2, SIZE2);
    displayArray(array3, SIZE3);

    cout << "\nHere are the duplicate arrays: \n";
    displayArray(dup1, SIZE1);
    displayArray(dup2, SIZE2);
    displayArray(dup3, SIZE3);

    delete [] dup1;
    delete [] dup2;
    delete [] dup3;

    dup1 = nullptr;
    dup2 = nullptr;
    dup3 = nullptr;

    return 0;
}

int *duplicateArray(const int *arr, int size)
{
    int *newArray = nullptr;

    if (size <= 0)
        return nullptr;
    
    newArray = new int[size];

    for (int index = 0; index < size; index++)
        newArray[index] = arr[index];
    
    return newArray;
}

void displayArray(const int arr[], int size)
{
    for (int index = 0; index < size; index++)
        cout << arr[index] << " ";
    cout << endl;
}