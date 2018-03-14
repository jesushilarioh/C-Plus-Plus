//******************************************************************
// This program demonstrates the range-based for loop with a vector.
//
// By: Jesus Hilario Hernandez
// Last Updated: November 13th, 2016
//******************************************************************
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Define and initialize a vector.
    vector<int> numbers(5);

    // Get values for the vector elements.
    for (int &val : numbers)
    {
        cout << "Enter an integer value: ";
        cin >> val;
    }

    // Display the vector elements.
    cout << "Here are the values you entered: \n";
    for (int val : numbers)
    {
        cout << val << endl;
    }
    return 0;
}
