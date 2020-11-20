#include <iostream>
using namespace std;

void processArray1(const int [], const int);
void processArray2(const int *, const int);
void processArray3(int * const, const int);

int main()
{
    const int SIZE = 4;
    const int numbers[SIZE] = { 18, 17, 12, 14 };
    processArray1(numbers, SIZE);
    cout << endl;
    processArray2(numbers, SIZE);
    cout << endl;
    // processArray3(numbers, SIZE);
    
    return 0;
}

void processArray1(const int array[], const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
        cout << array[i] << " ";
}
void processArray2(const int *array, const int SIZE)
{
    for(int i = 0; i < SIZE; i++)
        cout << array[i] << " ";
}
void processArray3(int * const array, const int SIZE)
{
    for(int i = 0; i < SIZE; i++)
        cout << array[i] << " ";
}