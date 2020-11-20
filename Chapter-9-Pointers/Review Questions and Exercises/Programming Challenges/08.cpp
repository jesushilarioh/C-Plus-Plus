/**
 * 8. Mode Function
 * In statistics, the mode of a set of values is the value 
 * that occurs most often or with the greatest frequency.
 *  
 * Write a function that accepts as arguments the following:
 * A) An array of integers
 * B) An integer that indicates the number of elements in the array
 * 
 * The function should determine the mode of the array. That 
 * is, it should determine which value in the array occurs most 
 * often. The mode is the value the function should return. If 
 * the array has no mode (none of the values occur more than once), 
 * the function should return −1. (Assume the array will always 
 * contain nonnegative values.)
 * 
 * Demonstrate your pointer prowess by using pointer notation 
 * instead of array notation in this function.
 */
#include <iostream>
using namespace std;

int findMode(int [], const int);

int main()
{
    const int SIZE = 10;
    int numbers[SIZE] = { 1, 2, 7, 4, 5, 7, 7, 8, 1, 10 };

    int mode = findMode(numbers, SIZE);

    cout << "\nMode = " << mode << endl;

    return 0;
}

int findMode(int array[], const int SIZE)
{
    int maxValue = 0, maxCount = 0, i, j;

    for (i = 0; i < SIZE; ++i)
    {
        int count = 0;

        for (j = 0; j < SIZE; ++j)
        {
            if (*(array + j) == *(array + i))
                ++count;
        }

        if (count > maxCount)
        {
            maxCount = count;
            maxValue = *(array + i);
        }
        else if (maxCount == 1)
            maxValue = -1;

    }
    // cout << "Max Count = " << maxCount << endl;
    return maxValue;
}