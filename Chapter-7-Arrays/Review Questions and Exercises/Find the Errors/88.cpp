#include <iostream>
using namespace std;
/*
 *  (88.)
 *  Errors include:
 * 1). if an entire array is used by a function,
 * the parameter value must include 
 * an empty set ofbrackets [].
 * 
 */ 
// ORIGINAL
// void showValues(int nums) 
// {
//     for (int count = 0; count < 8; count++) 
//         cout << nums[count];
// }

 // CORRECTION
 void showValues(int nums[], int size) 
{
    for (int count = 0; count < size; count++) 
        cout << nums[count];
}

int main()
{
    const int ARRAY_SIZE = 8;
    int array[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8};

    // Test /start
    showValues(array, ARRAY_SIZE);
    cout << endl;
    // Test /end

    return 0;
}