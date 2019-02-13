// This program demonstrates the range-based for loop.
#include <iostream>
using namespace std;
int main()
{
    int numbers[] = {10, 20, 30, 40, 50};

    for (int val : numbers)
        cout << val << endl;

    return 0;
}