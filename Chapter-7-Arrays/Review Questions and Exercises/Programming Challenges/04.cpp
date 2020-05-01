/************************************************************
 *
 *   04. Larger Than n
 * 
 * In a program, write a function that accepts three 
 * arguments: an array, the size of the array, and a 
 * number n. Assume that the array contains integers. 
 * The function should display all of the numbers in 
 * the array that are greater than the number n.
 * 
 *************************************************************/
#include <iostream>
using namespace std;

// Global constants

// Function Prototypes
void greaterNumbers(int[], const int, int);

int main()
{
    // Variables
    const int ARRAY_SIZE = 30;
    int numbers_array[ARRAY_SIZE] = {1, 2, 3, 4,  5, 
                                     6, 7, 8, 9, 10,
                                     11, 12, 13, 14, 15, 
                                     16, 17, 18, 19, 20,
                                     21, 22, 23, 24, 25, 
                                     26, 27, 28, 29, 30};
    int n = 20;

    greaterNumbers(numbers_array, ARRAY_SIZE, n);
    
    return 0;
}

/********************************************************
 * void greaterNumbers(): prints numbers greater that n
 ********************************************************/
void greaterNumbers(int array[], const int ARRAY_SIZE, int n)
{
    cout << "All numbers greater that "
         << n 
         << " are: ";

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (array[i] > n)
        {
            if(i == ARRAY_SIZE - 1)
                cout << array[i];
            else
                cout << array[i] << ", ";
            
        }

    }
    
    cout << endl;
}