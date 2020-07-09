/**
 * 7. Binary String Search
 * 
 * Modify the binarySearch function presented in this 
 * chapter so it searches an array of strings instead 
 * of an array of ints. Test the function with a driver 
 * program. Use Program 8-8 as a skeleton to complete. 
 * (The array must be sorted before the binary search 
 * will work.)
 * 
 **/
#include <iostream> 
#include <string> 
using namespace std;

void displayArray(string[], int, string);
void selectionSort(string[], int);
void swap(string &, string &);
int binarySearch(string[], int, string);

int main() {
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                               "Griffin, Jim", "Stamey, Marty", "Rose, Geri", 
                               "Taylor, Terri", "Johnson, Jill",
                               "Allison, Jeff", "Looney, Joe", "Wolfe, Bill", 
                               "James, Jean", "Weaver, Jim", "Pore, Bob", 
                               "Rutherford, Greg", "Javens, Renee", 
                               "Harrison, Rose", "Setzer, Cathy",
                               "Pike, Gordon", "Holland, Beth" };

    // Insert your code to complete this program
    displayArray(names, NUM_NAMES, "UNSORTED ARRAY:\n-----------------");
    selectionSort(names, NUM_NAMES);
    displayArray(names, NUM_NAMES, "SORTED ARRAY:\n-----------------");

    string user_name;
    cout << "Choose a name: ";
    getline(cin, user_name);

    int position = binarySearch(names, NUM_NAMES, user_name);

    if (position != -1)
        cout << names[position] << " was found." << endl;
    else
        cout << user_name << " was NOT found." << endl;

    return 0; 
}
 
void displayArray(string array[], int array_size, string prompt)
{
    cout << prompt << endl;
    for (int i = 0; i < array_size; i++)
        cout << array[i] << endl;
    cout << endl;
}
void selectionSort(string array[], int array_size)
{
    int min_index;
    string min_value;

    for (int start_index = 0; start_index < (array_size - 1); start_index++)
    {
        min_index = start_index;
        min_value = array[start_index];

        for (int index = start_index + 1; index < array_size; index++)
        {
            if (array[index] < min_value)
            {
                min_value = array[index];
                min_index = index;
            }
        }
        swap(array[min_index], array[start_index]);
    }
}
void swap(string &a, string &b)
{
    string temp = a;
    a = b;
    b = temp;
}
int binarySearch(string array[], int array_size, string user_name)
{
    int first = 0,
        last = array_size - 1,
        middle,
        position = -1;
    bool found = false;

    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        if (array[middle] == user_name)     // Mid point
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > user_name) // Lower half
            last = middle - 1;              
        else                                // Upper half
            first = middle + 1;
    }
    return position; 
}