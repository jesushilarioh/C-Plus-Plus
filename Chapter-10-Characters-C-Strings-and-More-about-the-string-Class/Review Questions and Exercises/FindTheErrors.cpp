#include <iostream>
#include <cctype>  // for toupper() & isupper()
#include <cstdlib> // for atoi()
#include <cstring> // for strlen(), strcpy(), strncpy()

using namespace std;
int main()
{
    // 43.
    char str[] = "Stop";
    // if (isupper(str) == "STOP") // Original
    // if (toupper(str[0]) == 's') // First change
    if (isupper(str[0]) == false) // Second change
        exit(0);
    cout << "Still here." << endl;

    // 44.
    // Original: 
    // char numeric[5];
    // int x = 123;
    // numeric = atoi(x); 

    // Updated:
    char numeric[5] = "1294";
    int x = 123;
    int numeric2 = atoi(numeric);

    cout << "numeric  = " << numeric  << endl;

    cout << "numeric  = ";
    int count = 0;
    while (numeric[count] != '\0')
    {
        cout << numeric[count];
        count++;
    }
    cout << endl;

    cout << "numeric2 = " << numeric2 << endl;

    // 45. 
    // Original:
    // char string7[] = "Billy";
    // char string8[] = " Bob Jones";
    // strcat(string7, string8);
    // Updated:
    char string7[] = "Billy";
    char string8[] = " Bob Jones";
    cout << "string7 = " << string7 << endl;
    cout << "string8 = " << string8 << endl;
    if (sizeof(string7) >= (strlen(string7) + strlen(string8) + 1))
        strcat(string7, string8);
    else
        cout << "String7 is not large enough for both strings." << endl;

    // 46.
    // Original: 
    // char a = 'a', 
    //      b = 'a';
    // if (strcmp(a, b) == 0)
    //     exit(0);
    // Updated: 
    char c[] = "a", 
         d[] = "a";
    if (strcmp(c, d) != 0)
        exit(0);
    cout << "Still here!" << endl;
    
    return 0;
}