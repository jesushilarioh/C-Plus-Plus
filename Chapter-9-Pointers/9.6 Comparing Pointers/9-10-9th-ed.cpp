// This program uses a pointer to display the contents
// of an integer array.
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 8;
    int numbers[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};
    int *ptr = numbers;     // Make ptr point to numbers

    // Display the numbers in the array.
    cout << "The numbers are:\n";
    cout << *ptr << " ";    // Display first element
    cout << "@ " << ptr << endl;

    while(ptr < &numbers[SIZE - 1])
    {
        // Advance ptr to point to the next element.
        ptr++;
        // Display the value pointed to by ptr.
        cout << *ptr << " ";
        cout << "@ " << ptr << endl;
    }
    
    // Display the numbers in reverse order.
    cout << "\nThe numbers backward are:\n";
    cout << *ptr << " ";        // Display first element
    cout << "@ " << ptr << endl;

    while (ptr > numbers)
    {
        // Move backward to the previous element.
        ptr--;
        // Display the value pointed to by ptr.
        cout << *ptr << " ";
        cout << "@ " << ptr << endl;
    }
    return 0;
}