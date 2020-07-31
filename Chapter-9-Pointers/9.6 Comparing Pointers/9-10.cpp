// This program uses a pointer to display the contents
// of an integer array.
#include <iostream>
using namespace std;

int main()
{
    int set[8] = {5, 10, 15, 20, 25, 30, 35, 40};
    int *nums = set;

    cout << "The numbers in set are:\n";
    cout << *nums << " @ " << nums << endl;
    while (nums < &set[7])
    {
        nums++;
        cout << *nums << " @ " << nums << endl;
    }

    cout << "\nThe numbers in set backward are:\n";
    cout << *nums << " @ " << nums << endl;
    while (nums > set)
    {
        nums--;
        cout << *nums << " @ " << nums << endl;
    }
    
    cout << endl;

    return 0;
}