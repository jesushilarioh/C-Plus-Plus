#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 5;
    int firstArray[] = {5, 10, 15, 20, 25};
    int secondArray[] = {5, 10, 15, 20, 29};
    bool arraysEqual = true;
    int count = 0;

    while (arraysEqual && count < SIZE)
    {
        if (firstArray[count] != secondArray[count])
            arraysEqual = false;
        count++;
    }

    if (arraysEqual)
        cout << "The arrays are equal.\n";
    else
        cout << "The arrays are NOT equal.\n";

    return 0;
}