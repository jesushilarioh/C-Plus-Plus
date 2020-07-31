// This program uses a pointer to display the contents of an array.
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 8;
    int set[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};
    int *numPtr = nullptr;
    int count;

    numPtr = set;
    cout << "\nnumPtr = " << numPtr << endl;

    cout << "\nThe numbers in set are:\n";
    for (count = 0; count < SIZE; count++)
    {
        cout << "numPtr @ count " << count << " = "
             << *numPtr << " @ address: "
             << numPtr << endl;
        numPtr++;
    }

    cout << "\nThe numbers in set backward are:\n";
    for (count = 0; count < SIZE; count++)
    {
        numPtr--;
        cout << "numPtr @ count " << count << " = "
             << *numPtr << " @ address: "
             << numPtr << endl;
    }
    return 0;
}