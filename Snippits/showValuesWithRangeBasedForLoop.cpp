// This program demonstrates the range-based for
// loop with a vector.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> numbers { 10, 20, 30, 40, 50 };

    for (int value : numbers)
        cout << value << endl;
        
    return 0;
}