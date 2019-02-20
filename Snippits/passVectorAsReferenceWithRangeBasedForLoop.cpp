// This program demonstrates the range-based for loop
// with a vector.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> numbers(5);

    for (int &value : numbers)
    {
        cout << "Enter an integer value: ";
        cin >> value;
    }

    cout << "Here are the values you entered:\n";
    for(auto value : numbers)
        cout << value << endl;
    
    return 0;
}