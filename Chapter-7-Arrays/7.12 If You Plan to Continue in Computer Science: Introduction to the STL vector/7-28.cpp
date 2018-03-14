//****************************************************************
// This program demonstrates the vector size
// member function.
//
// By: Jesus Hilario Hernandez
// Last Updated: November 13th, 2016 ps. going to NYC tomorrow!!!! stoked!
//****************************************************************
#include <iostream>
#include <vector>
using namespace std;

// Function prototype
void showValues(vector<int>);   //***********************************************
                                // NOTE: because the vector report its size, the*
                                // showValues function does not need to accept a*
                                // second argument indicating the number of     *
                                // elements in the vector.                      *
                                //***********************************************

int main()
{
    vector<int> values;

    // Put a series of numbers in the vector.
    for (int count = 0; count < 7; count++)
    {
        values.push_back(count * 2);
    }

    // Display the numbers.
    showValues(values);
    return 0;
}

//***********************************************
// Definition of function showValues.           *
// This function accepts an int vector as its   *
// argument. The value of each of the vector's  *
// elements is displayed.                       *
//***********************************************

void showValues(vector<int> vect)
{
    for (int count = 0; count < vect.size(); count++)
    {
        cout << vect[count] << endl;
    }
}
