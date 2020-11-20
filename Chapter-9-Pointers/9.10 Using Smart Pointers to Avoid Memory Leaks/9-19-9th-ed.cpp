// This program demostrates a unique_ptr pointing
// to a dynamically allocated array of integers.
#include <iostream>
using namespace std;

void arrSelectSort(int *[], int);
void showArray(const int [], int);
void showArrPtr(int *[], int);
int main()
{
    
    return 0;
}
void arrSelectionSort(int *array[], int size)
{
    int startScan, minIndex;
    int *minElem;

    for ( startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minElem = array[startScan];
        for(int index = startScan + 1; index < size; index++)
        {
            if (*(array[index]) < *minElem)
            {
                minElem = array[index];
                minIndex = index;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minElem;
    }
    
}

void showArray(const int array[], int size)
{
    for (int count = 0; count < size; count++)
        cout << array[count] << " ";
    cout << endl;
}
void showArrPtr(int *array[], int size)
{
    for (int count = 0; count < size; count++)
        cout << *(array[count]) << " ";
    cout << endl;
}