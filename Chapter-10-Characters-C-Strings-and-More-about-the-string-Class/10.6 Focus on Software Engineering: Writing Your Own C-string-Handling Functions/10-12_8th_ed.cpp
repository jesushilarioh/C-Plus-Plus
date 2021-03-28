#include <iostream>
using namespace std;

void stringCopy(char [], char []);


int main()
{
    const int LENGTH = 30;
    char first[LENGTH],
         second[LENGTH];

    cout << "Enter a string with no more than "
         << (LENGTH - 1) << " characters:\n";
    cin.getline(first, LENGTH);

    stringCopy(first, second);

    cout << "first = " << first << endl;
    cout << "second = " << second << endl;

    return 0;
}

void stringCopy(char string1[], char string2[])
{
    int index = 0;
    cout << "index = " << index << endl;
    while (string1[index] != '\0')
    {
        string2[index] = string1[index];
        index++;
        cout << "index = " << index << endl;
    }

    cout << "index = " << index << endl;

    string2[index] = '\0';
}