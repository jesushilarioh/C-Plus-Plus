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
    int maxElement,
        index;

    for (maxElement = size - 1; maxElement > 0; maxElement--)
    {
        for (index = 0; index < maxElement; index++)
        {
            if (array[index] > array[index + 1])
            {
                swap(array[index], array[index + 1]);
            }
            
        }
        
    }
    
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}