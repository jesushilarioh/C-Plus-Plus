// This program uses the selection sort algorithm to sort an
// array in ascending order.
#include <iostream>
using namespace std;

// Function prototypes
void selectionSort(int[], int);
void showArray(const int[], int);

int main()
{
    // Define an array with unsorted values
    const int SIZE = 6;
    int values[SIZE] = {5, 7, 2, 8, 9, 1};

    // Display the values.
    cout << "The unsorted values are\n";
    showArray(values, SIZE);
    
    // Sort the values
    selectionSort(values, SIZE);

    // Display the values again.
    cout << "The sorted values are\n";
    showArray(values, SIZE);
    return 0;
}

/**
 * Definition of function seletionSort.
 * This function performs an ascending order selection sort on
 * array. size is the number of elements in the array.
 */

void selectionSort(int array[], int array_size)
{
    int start_scan, min_index, min_value;

    for (start_scan = 0; start_scan < (array_size - 1); start_scan++)
    {
        min_index = start_scan;
        min_value = array[start_scan];
        for (int index = start_scan + 1; index < array_size; index++)
        {
            if (array[index] < min_value)
            {
                min_value = array[index];
                min_index = index;
            }  
        }
        array[min_index] = array[start_scan];
        array[start_scan] = min_value;
    } 
}