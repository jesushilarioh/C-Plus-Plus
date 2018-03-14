//*****************************************************************
// This program demonsrates the range-based for loop with a vector.
//
// By: Jesus Hilario Hernandez
// Last Updated: November 12, 2016;
//*****************************************************************
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Define and initialize a vector.
    vector<int> numbers {10, 20, 30, 40, 50 };

    // Display the vector elements.
    for (int val : numbers)
    {
        cout << val << endl;
    }

    return 0;
}
