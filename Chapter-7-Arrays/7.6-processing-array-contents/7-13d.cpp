//***********************************************************
// This program finds the highest and lowest values in a
// numeric array.
//
// By: JESUS HILARIO HERNANDEZ
// Last Updated: May 5th, 2017
//***********************************************************
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int SIZE = 50;
    int numbers[SIZE] = { 54, 23, 23, 12, 65, 74, 73, 76, 34, 12,
                          24, 65, 74, 87, 87, 98, 97, 96, 95, 94,
                          93, 13, 14, 15, 16, 17, 18, 90, 33, 35,
                          36, 37 ,38, 39, 78, 76, 75, 74, 73, 72,
                          71, 78, 27, 28, 29, 20, 21, 22, 23, 40 };
    int count;
    int highest;

    highest = numbers[0];
    // count is 1 because heighest variable is assined to numbers
    // with a subscript 0.
    for (count = 1; count < SIZE; count++)
    {
        if (numbers[count] > highest)
        {
            highest = numbers[count];
        }
    }
    cout << highest
         << " is the highest number in numbers array. " << endl;

    int lowest;

    lowest = numbers[0];
    for (count = 1; count < SIZE; count++)
    {
        if (numbers[count] < lowest)
        {
            lowest = numbers[count];
        }
    }
    cout << lowest
         << " is the lowest number in numbers array. " << endl;
    return 0;
}
