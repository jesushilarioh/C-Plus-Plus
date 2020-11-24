/**
 * 9. Median Function
 * In statistics, when a set of values is sorted in 
 * ascending or descending order, its median is the middle 
 * value. If the set contains an even number of values, 
 * the median is the mean, or average, of the two middle 
 * values. Write a function that accepts as arguments the 
 * following:
 * 
 * A) An array of integers
 * B) An integer that indicates the number of elements in the array
 * 
 * The function should determine the median of the array. This 
 * value should be returned as a double. (Assume the values in 
 * the array are already sorted.)
 * 
 * Demonstrate your pointer prowess by using pointer notation 
 * instead of array notation in this function.
 */
#include <iostream>
using namespace std;

double findMedian(int [], const int);

int main()
{
    const int SIZE = 10;
    int numbers [SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    double median = findMedian(numbers, SIZE);

    cout << "Median = " << median << endl;

    return 0;
}

double findMedian(int array[], const int SIZE)
{
    double median = 0.0;

    if (SIZE % 2 != 0)
    {
        // median = array[SIZE / 2];
        median = *(array + (SIZE / 2));
    }
        
    else
    {
        // median = (array[(SIZE - 1) / 2] + array[SIZE / 2]) / 2.0;
        median = (*(array + ((SIZE - 1) / 2)) + *(array + (SIZE / 2))) / 2.0;
    }
        
    return median;
}