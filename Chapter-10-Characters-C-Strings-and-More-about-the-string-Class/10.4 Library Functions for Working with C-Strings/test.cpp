#include <iostream>

using namespace std;

int smallestIndex(int numberArray[], int arraySize);

int main()
{
    const int MAX_ARRAY_SIZE = 10;
    int testArray[MAX_ARRAY_SIZE] {10, 18, 43, 1, 2, 18, 1, 22, 2, 91};
    int smallestPosition = smallestIndex(testArray, MAX_ARRAY_SIZE);

    cout << "The smallest index was position: " << smallestPosition;
    cout << " with a value of: " << testArray[smallestPosition];
    return 0;
}

int smallestIndex(int numberArray[], int arraySize) {

    int smallest_index = 0;

    // set the first value of array as the 
    // smallest_value before the for loop.
    int smallest_value = numberArray[0];

    // Iterate from the second value to the end of the array
    for (int i = 1; i < arraySize; i++) {

        // Check each array element for smallest value.
        if (numberArray[i] < smallest_value)
        {
            // reset smallest_value to i, since this is 
            // the subscript that matches the currect 
            // iteration value (numberArray[i]).
            smallest_index = i;

            // Then, reset the smallest_value to current
            // iteration since it will become the new
            // smallest value.
            smallest_value = numberArray[i];
        }
            
    }

    // No need to return the value,
    // only the index. Great work!
    return smallest_index;
}