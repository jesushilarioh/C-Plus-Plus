#include <iostream>
using namespace std;

int countChars(char *, char);

int main()
{
    const int SIZE = 51;
    char userString[SIZE];
    char letter;

    cout << "Enter a string (up to 50 characters): ";
    cin.getline(userString, SIZE);

    cout << "Enter a character and I will tell you how many" << endl
         << "times it appears in the string: ";
    cin >> letter;

    cout << letter << " appears "
         << countChars(userString, letter) << " times."
         << endl;

    return 0;
}

int countChars(char *strPtr, char ch)
{
    int times = 0;

    while (*strPtr != '\0')
    {
        if (*strPtr == ch)
            times++;
        strPtr++;
    }

    return times;
}