// This program demonstrated the vector's empty
// member function.
#include <iostream>
#include <vector>
using namespace std;

double averageVector(vector<int>);

int main()
{
    vector<int> values;
    int number_of_values;
    double average;

    cout << "How many values do you wish to average? ";
    cin >> number_of_values;

    for(int count = 0; count < number_of_values; count++)
    {
        int temporary_value;
        cout << "Enter a value: ";
        cin >> temporary_value;
        values.push_back(temporary_value);
    }

    average = averageVector(values);
    cout << "Average: " << average << endl;
    
    return 0;
}

//***********************************************************
// Definition of function avgVector.                        *
// This function accepts an int vector as its argument. If  *
// the vector contains values, the function returns the     *
// average of those values. Otherwise, an error message is  *
// displayed and the function returns 0.0.                  *
//***********************************************************
double averageVector(vector<int> vector)
{
    int total = 0;
    double average;

    if (vector.empty()) 
    {
        cout << "No values to average.\n";
        average = 0.0;
    }
    else 
    {
        for(int count = 0; count < vector.size(); count++)
            total += vector[count];
        
        average = total / vector.size();
    }
    return average;
}