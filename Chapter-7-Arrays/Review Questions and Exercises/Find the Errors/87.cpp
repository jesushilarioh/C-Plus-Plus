#include <iostream>
using namespace std;
/*
 *  (87.)
 *  Errors include:
 * 1). to assign array1 to array2, 
 * a for loop must be used.
 * 
 */ 

int main()
{
    // ORIGINAL
    // int array1[4], array2[4] = {3, 6, 9, 12}; 
    // array1 = array2;

    // CORRECTION
    const int ARRAY_SIZE = 4;
    int array1[ARRAY_SIZE], array2[ARRAY_SIZE] = {3, 6, 9, 12};

    for (int i = 0; i < ARRAY_SIZE; i++)
        array1[i] = array2[i];

    // Tests /start
    cout << "Array 1 = ";
    for (auto val : array1)
        cout << val << " ";
    cout << endl;

    cout << "Array 2 = ";
    for (auto val : array2)
        cout << val << " ";
    cout << endl;

        // Assign array1 to array2
    for (int i = 0; i < ARRAY_SIZE; i++)
        array1[i] = array2[i];

    cout << "Array 1 = ";
    for (auto val : array1)
        cout << val << " ";
    cout << endl;
    // Tests /end
    
    
    
    
    return 0;
}