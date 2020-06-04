// This program uses the bubble sort algorithm to sort an
// array in ascending order. This example comes from hacker rank's
// tutorial on YouTube.
#include <iostream>
using namespace std;

void sortArray(int[], int);
void showArray(const int[], int);

int main()
{
    int values[6] = {7, 2, 3, 8, 9, 1};

    cout << "The unsorted values are: \n";
    showArray(values, 6);

    sortArray(values, 6);

    cout << "The sorted values are:\n";
    showArray(values, 6);
    return 0;
}

void sortArray(int array[], int size)
{
    bool is_sorted = false;
    int last_unsorted = size - 1; // array length - 1
    int temp;

    while(!is_sorted)
    {
        is_sorted = true;
        for (int i = 0; i < last_unsorted; i++)
        {
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                is_sorted = false;
            }
            
        }
        last_unsorted--;
    }
}

void showArray(const int array[], int size)
{
    for (int count = 0; count < size; count++)
        cout << array[count] << " ";
    cout << endl;
}