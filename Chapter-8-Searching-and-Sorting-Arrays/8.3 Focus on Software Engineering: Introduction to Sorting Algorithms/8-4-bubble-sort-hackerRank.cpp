#include <iostream>
using namespace std;

void bubbleSort(int[], int);
void swap(int &, int &);

int main()
{
    const int SIZE = 6;

    int values[SIZE] = {6, 1, 5, 2, 4, 3};
    
    cout << "The unsorted values:\n";
    for(auto element : values)
        cout << element << " ";
    cout << endl;

    bubbleSort(values, SIZE);

    cout << "The sorted values:\n";
    for (auto element : values)
        cout << element << " ";
    cout << endl;

    return 0;
}

void bubbleSort(int array[], int size)
{
    bool isSorted = false;
    int lastUnsorted = size - 1;

    while (!isSorted)
    {
        isSorted = true;
        for (int i = 0; i < lastUnsorted; i++)
        {
            if (array[i] > array[i + 1])
            {
                swap(array[i], array[i + 1]);
                isSorted = false;
            }
            
        }
        lastUnsorted--;
    }
    
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}