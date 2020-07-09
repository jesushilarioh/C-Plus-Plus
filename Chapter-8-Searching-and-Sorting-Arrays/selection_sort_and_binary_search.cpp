#include <iostream>
#include <string>
#include <vector>
using namespace std;

void selectionSort(vector<string> &);
void swap(string &, string &);
int binarySearch(const vector<string> &, string);

int main()
{
    string search_value; 
    int position;

    vector<string> names{"Lopez", "Smith", "Pike", "Jones",
                         "Abernathy", "Hall", "Wilson", "Kimura",
                         "Alvarado", "Harrison", "Geddes", "Irvine" };
    
    selectionSort(names);

    cout << "Here are the sorted names: " << endl;
    for (auto element : names)
        cout << element << endl;
    cout << endl;

    cout << "Enter a name to search for: ";
    getline(cin, search_value);
    position = binarySearch(names, search_value);

    if (position != -1)
        cout << "That name is found at position " << position << endl;
    else
        cout << "That name is not found.\n";
    
    return 0;
}

void selectionSort(vector<string> &vector_array)
{
    int min_index;
    string min_value;

    for (int start_index = 0; start_index < (vector_array.size() - 1); start_index++)
    {
        min_index = start_index;
        min_value = vector_array[start_index];

        for (int index = start_index + 1; index < vector_array.size(); index++)
        {
            if (vector_array[index] < min_value)
            {
                min_value = vector_array[index];
                min_index = index;
            }
            
        }
        swap(vector_array[min_index], vector_array[start_index]);
    }
}

void swap(string &a, string &b)
{
    string temp = a;
    a = b;
    b = temp;
}

int binarySearch(const vector<string> &vector_array, string user_string)
{
    int first = 0,
        last = vector_array.size() - 1,
        middle,
        position = -1;
    bool found = false;

    while (!found && first <= last)
    {
        middle = (first + last) / 2;

        if (vector_array[middle] == user_string)
        {
            found = true;
            position = middle;
        }
        else if (vector_array[middle] > user_string)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return position;
}