// This program demonstrates the vector size
// member function.
#include <iostream>
#include <vector>
using namespace std;

void showValues(vector<int>);

int main()
{
    vector<int> values;

    for (int count = 0; count < 7; count++)
        values.push_back(count * 2);

    showValues(values);

    return 0;
}

//***************************************************
// Definition of function showValues.               *
// This function accepts an int vector as its       *
// argument. The value of each of the vector's      *
// elements is displayed.                           *
//***************************************************
void showValues(vector<int> vector)
{
    for (int count = 0; count < vector.size(); count++)
        cout << vector[count] << endl;
}