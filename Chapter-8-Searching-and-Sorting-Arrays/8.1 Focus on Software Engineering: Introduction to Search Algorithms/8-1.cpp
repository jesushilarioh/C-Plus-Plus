/**
 * This program demonstrates the searchList function, which
 * performs a linear search on an integer array.
 */
#include <iostream>
using namespace std;

// Function prototype
int searchList(const int [], int, int);
const int SIZE = 5;

int main()
{
    int tests[SIZE] = {87, 82, 98, 99, 82};
    int results;

    // Search the array for 100.
    results = searchList(tests, SIZE, 98);

    // If searchList returned -1, then 100 was not found.
    if (results == -1)
        cout << "You did not earn 100 points on any test\n";
    else
    {
        // Otherwise results contains the subscript of
        // the first 100 found in the array.
        cout << "You earned 100 points on test ";
        cout << (results + 1) << endl;
    }
    
    
    return 0;
}

/**
 * The searchList function performs a linear search on an
 * integer array. The array list, which has a maximum of numElems
 * elements, is searched for the number stored in value. If the
 * number is found, its array subscript is returned. Otherwise,
 * -1 is returned indicating the value was not in the array.
 **/
int searchList(const int list[], int numElems, int value)
{
    int index = 0;      // Used as a subscript to search array
    int position = -1;  // To record position of search value
    bool found = false; // Flag to indicate if the value was found

    cout << "Before while loop:" << endl;
    cout << "index = " << index << endl;
    cout << "found = " << found << endl;
    cout << "position = " << position << endl;
    cout << "\nIn while loop:" << endl;
    int iteration = 1;

    while (index < numElems && !found)
    {
        cout << "Iteration #" << (iteration) << endl;
        cout << "index = " << index << endl;
        cout << "found = " << found << endl;
        cout << "list[index] = " << list[index] << endl;

        if (list[index] == value)   // If the value is found
        {
            found = true;           // Set the flag
            position = index;       // Record the value's subscript
        }
        index++;                    // Go to the next element

        cout << "position = " << position << endl << endl;
        iteration++;
    }
    cout << "\nAfter while loop:" << endl;
    cout << "found = " << found << endl;
    cout << "position = " << position << endl;
    return position;                // Return the position, or -1
}