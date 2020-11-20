// This program demonstrates a function that returns
// a pointer.
#include <iostream>
#include <cstdlib> // For rand and srand
#include <ctime>    // For the time function
using namespace std;

int *getRandomNumbers(int);

int main()
{
    int *numbers = nullptr;

    numbers = getRandomNumbers(0);

    for (int count = 0; count < 5; count++)
        cout << numbers[count] << endl;

    delete [] numbers;
    numbers = nullptr;

    return 0;
}

int *getRandomNumbers(int num)
{
    int *arr = nullptr;

    if (num <= 0)
        return nullptr;

    arr = new int[num];

    srand(time(0));

    for (int count = 0; count < num; count++)
        arr[count] = rand();
    
    return arr;
}