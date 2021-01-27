#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int maxChars;
    const int SIZE = 11;

    char string1[SIZE],
         string2[] = "I love C++ programming!";

    cout << "\nstring1 = " << string1 << endl;
    cout << "sizeof(string1)     = " << sizeof(string1) << endl;
    cout << "strlen(string1) + 1 = " << strlen(string1) + 1 << endl;
    cout << "strlen(string1)     = " << strlen(string1) << endl;
    
    cout << "\nstring2 = " << string2 << endl;
    cout << "sizeof(string2)     = " << sizeof(string2) << endl;
    cout << "strlen(string2) + 1 = " << strlen(string2) + 1 << endl;
    cout << "strlen(string2)     = " << strlen(string2) << endl;

    cout << "\nstring1 = " << string1 << endl;
    cout << "sizeof(string1) - 1 = " << sizeof(string1) - 1 << endl;
    cout << "sizeof(string1)     = " << sizeof(string1) << endl;
    cout << "strlen(string1) + 1 = " << strlen(string1) + 1 << endl;
    cout << "strlen(string1)     = " << strlen(string1) << endl;

    maxChars = sizeof(string1) - 1;
    strncpy(string1, string2, maxChars);

    // Put the null terminator at the end.
    string1[maxChars] = '\0';
    cout << "\nstring1 = " << string1 << endl;
    cout << "sizeof(string1)     = " << sizeof(string1) << endl;
    cout << "strlen(string1) + 1 = " << strlen(string1) + 1 << endl;
    cout << "strlen(string1)     = " << strlen(string1) << endl;
    
    
    cout << endl;
    return 0;
}