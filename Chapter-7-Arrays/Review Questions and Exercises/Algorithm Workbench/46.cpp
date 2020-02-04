/**
 * Problem:
 * 46. The following code totals the values in two arrays: 
 * numberArray1 and numberArray2. Both arrays have 
 * 25 elements. 
 * 
 * Will the code print the correct sum of values for 
 * both arrays? Why or why not?
 * 
 * ANSWER: 
 * No. Because the total (accumulator) variable is not reset 
 * to 0 before the program begins totalling array #2
 * 
 */
#include <iostream>
#include <string>

using namespace std;
int main()
{
    const int ARRAY_SIZE = 25;
    int numberArray1[ARRAY_SIZE] = { 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                             2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 };

    int numberArray2[ARRAY_SIZE] = { 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                             2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 };

    int total = 0; // Accumulator
    int count; // Loop counter
    
    // Calculate and display the total of the first array. 
    for (count = 0; count < ARRAY_SIZE; count++)
        total += numberArray1[count];
    cout << "The total for numberArray1 is " << total << endl; 

    total = 0; // Change in program

    // Calculate and display the total of the second array.
    for (count = 0; count < ARRAY_SIZE; count++)
        total += numberArray2[count];
    cout << "The total for numberArray2 is " << total << endl;

    return 0;
} 