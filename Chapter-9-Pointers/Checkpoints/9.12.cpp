#include <iostream>
using namespace std;

// Which of the following function headers is the correct one for the processArray
// function?
// A) 
void processArray1(const int *, int);
// B) 
void processArray2(int * const, int);

int main()
{
    // 9.12 Look at the following array definition:
    const int SIZE = 4;
    const int numbers[SIZE] = { 18, 17, 12, 14 };
    // Suppose we want to pass the array to the function processArray in the following
    // manner:
    processArray1(numbers, SIZE);
    // processArray2(numbers, SIZE);

    return 0;
}

// Which of the following function headers is the correct one for the processArray
// function?
// A) 
void processArray1(const int *arr, int size)
{
    for (int count = 0; count < size; count++)
        cout << arr[count] << " ";
    cout << endl;
}
// B) 
void processArray2(int * const arr, int size)
{
    for (int count = 0; count < size; count++)
        cout << arr[count] << " ";
    cout << endl;
}