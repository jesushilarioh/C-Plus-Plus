/**
 * 9. Sorting Benchmarks
 * 
 * Write a program that uses two identical arrays of 
 * at least 20 integers. It should call a function that 
 * uses the bubble sort algorithm to sort one of the 
 * arrays in ascending order. The function should keep 
 * a count of the number of exchanges it makes. The 
 * program then should call a function that uses the 
 * selection sort algorithm to sort the other array. 
 * It should also keep count of the number of exchanges 
 * it makes. Display these values on the screen.
 * 
 **/
#include <iostream>
using namespace std;

void displayArray(int[], int, string);
void bubbleSort(int[], int, int &);
void selectionSort(int[], int, int &);
void swap(int &, int &);

int main()
{
    // 1. two identical arrays of at least 20 integers.
    const int ARRAY_SIZE = 20;

    int array_1[ARRAY_SIZE] = {6, 5, 90, 33, 45, 
                               1, 89, 70, 30, 4,
                               55, 60, 2, 9, 11,
                               91, 65, 45, 8, 3};

    int array_2[ARRAY_SIZE] = {6, 5, 90, 33, 45, 
                               1, 89, 70, 30, 4,
                               55, 60, 2, 9, 11,
                               91, 65, 45, 8, 3};

    // 2. call a function that uses the bubble sort 
    //  algorithm to sort one of the arrays in ascending order.
    //  The function should keep a count of the number of 
    //  exchanges it makes.
    int number_of_exchanges = 0;
    displayArray(array_1, ARRAY_SIZE, "array_1 UNSORTED:\n----------------");
    bubbleSort(array_1, ARRAY_SIZE, number_of_exchanges);
    displayArray(array_1, ARRAY_SIZE, "\narray_1 SORTED:\n----------------");
    cout << "\nNumber of exchanges = " << number_of_exchanges << endl;

    // 3. call a function that uses the selection sort 
    //  algorithm to sort the other array. 
    //  It should also keep count of the number of 
    //  exchanges it makes.
    number_of_exchanges = 0;
    displayArray(array_2, ARRAY_SIZE, "\narray_2 SORTED:\n-----------------");
    selectionSort(array_2, ARRAY_SIZE, number_of_exchanges);
    displayArray(array_2, ARRAY_SIZE, "\narray_2 SORTED:\n-----------------");
    cout << "\nNumber of exchanges = " << number_of_exchanges << endl << endl;

    // 4. Display these values on the screen.
    return 0;
}

void displayArray(int array[], int array_size, string prompt)
{
    cout << prompt << endl;
    for (int i = 0; i < array_size; i++)
        cout << array[i] << ", ";
    cout << endl;   
}

void bubbleSort(int array[], int array_size, int &number_of_exchanges)
{
    int max_element, 
        index;
    
    for (max_element = array_size - 1; max_element > 0; max_element--)
    {
        for (index = 0; index < max_element; index++)
        {
            if (array[index] > array[index + 1])
            {
                swap(array[index], array[index + 1]);
                number_of_exchanges++;
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

void selectionSort(int array[], int array_size, int &number_of_exchanges)
{
    int min_index,
        min_value;

    for (int start_index = 0; start_index < (array_size - 1); start_index++)
    {
        min_index = start_index;
        min_value = array[start_index];

        for (int index = start_index + 1; index < array_size; index++)
        {
            if (array[index] < min_value)
            {
                min_value = array[index];
                min_index = index;
                number_of_exchanges++;
            }
        }
        swap(array[min_index], array[start_index]);
    }
}
