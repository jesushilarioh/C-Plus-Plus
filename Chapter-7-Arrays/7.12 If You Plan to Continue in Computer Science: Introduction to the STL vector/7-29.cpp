//**************************************************************
// This program demonstrates the vector pop_back member function.
//
// By: Jesus Hilario Hernandez
// Last Updated: November 20th, 2016
//**************************************************************
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> values;

    // Store values in the vector.
    values.push_back(3);
    values.push_back(7);
    values.push_back(79);
    cout << "The size of values is " << values.size() << endl;

    // Remove a value from the vector.
    cout << "Popping a value from the vector...\n";
    values.pop_back();
    cout << "The size of values is now " << values.size() << endl;

    // Now remove another value from the vector.
    cout << "Popping a value from the vector...\n";
    values.pop_back();
    cout << "The size of values is now "<< values.size() << endl;

    // Remove the last value from the vector.
    cout << "Popping a value from the vector...\n";
    values.pop_back();
    cout << "The size of values is now " << values.size() << endl;
    return 0;
}
