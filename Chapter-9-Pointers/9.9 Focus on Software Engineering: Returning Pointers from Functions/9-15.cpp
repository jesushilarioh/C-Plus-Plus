// This program demonstrates a function that returns
// a pointer.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int *getRandomNumbers(int);

int main()
{
    int *numbers = nullptr;

    numbers = getRandomNumbers(5);

    for (int count = 0; count < 5; count++)
        cout << numbers[count] << endl;

    delete [] numbers;
    numbers = 0;
    
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