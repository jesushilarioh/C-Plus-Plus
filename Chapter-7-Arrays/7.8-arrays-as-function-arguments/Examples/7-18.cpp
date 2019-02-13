// This program demonstrates the showValues function being
// used to display the contents of two arrays.
#include <iostream>
using namespace std;

void showValues(int [], int);

int main()
{
    const int SIZE1 = 8,
              SIZE2 = 5;

    int set1[SIZE1] = {5, 10, 15, 20, 25, 30, 35, 40},
        set2[SIZE1] = {2, 4, 6, 8, 10};
    
    showValues(set1, SIZE1);
    showValues(set2, SIZE2);

    return 0;
}
//***************************************************
// Definition of function showValues.               *
// This function accepts an array of integers and   *
// the array's size as its arguments. The contents  *
// of the array are displayed.                      *
//***************************************************
void showValues(int nums[], int size)
{
    for(int i = 0; i < size; i++)
        cout << nums[i] << " ";
    cout << endl;
}