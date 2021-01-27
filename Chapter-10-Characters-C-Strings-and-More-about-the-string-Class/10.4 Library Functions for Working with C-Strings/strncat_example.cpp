#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int maxChars;

    const int SIZE_1 = 17,
              SIZE_2 = 18;
    
    char string1[SIZE_1] = "Welcome ",
         string2[SIZE_2] = "to North Carolina";
    
    cout << "\nstring2 = " << string2 << endl;
    cout << "sizeof(string2)     = " << sizeof(string2) << endl;
    cout << "strlen(string2) + 1 = " << strlen(string2) + 1 << endl;
    cout << "strlen(string2)     = " << strlen(string2) << endl;
    
    maxChars = sizeof(string2) - (strlen(string2) + 1); 
    cout << "maxChars = " << maxChars << endl;

    cout << "\nstring1 = " << string1 << endl;
    cout << "sizeof(string1)     = " << sizeof(string1) << endl;
    cout << "strlen(string1) + 1 = " << strlen(string1) + 1 << endl;
    cout << "strlen(string1)     = " << strlen(string1) << endl;

    maxChars = sizeof(string1) - (strlen(string1) + 1); // 17 - 9 = 8
    cout << "maxChars = " << maxChars << endl;

    strncat(string1, string2, maxChars); // append "to North" + '\0'

    cout << "\nstring1 = " << string1 << endl;
    cout << "sizeof(string1)     = " << sizeof(string1) << endl;
    cout << "strlen(string1) + 1 = " << strlen(string1) + 1 << endl;
    cout << "strlen(string1)     = " << strlen(string1) << endl;
    

    cout << endl;
    return 0;
}