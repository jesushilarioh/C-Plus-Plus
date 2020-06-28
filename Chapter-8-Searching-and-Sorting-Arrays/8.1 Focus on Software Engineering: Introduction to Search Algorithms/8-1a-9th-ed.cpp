#include <iostream>
using namespace std;

int linearSearch(const int[], int, int);

int main()
{
    const int SIZE = 5;
    int tests[SIZE] = {87, 75, 98, 100, 82};
    int results;

    results = linearSearch(tests, SIZE, 100);

    if (results == -1)
        cout << "You did not earn 100 points on any test\n";
    else
    {
        cout << "You earned 100 points on test "
             << (results + 1) 
             << endl;
    }
    return 0;
}

int linearSearch(const int array[], int size, int value)
{
    int index = 0;
    int position = -1;
    bool found = false;

    while (index < size && !found)
    {
        if (array[index] == value)
        {
            found = true;
            position = index;
        }
        index++;
    }
    return position;
}