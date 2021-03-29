#include <iostream>
#include <cctype>  // for toupper() & isupper()
#include <cstdlib> // for atoi()
#include <cstring> // for strlen(), strcpy(), strncpy(), strcmp()
#include <cstdlib>

using namespace std;
int main()
{
    // 43.
    cout << "43. " << endl;

    char str[] = "Stop";
    // if (isupper(str) == "STOP") // Original
    // if (toupper(str[0]) == 's') // First change
    // if (isupper(str[0]) == false) // Second change
    if (strcmp(str, "STOP") == 0) // Thrid change
        exit(0);
    cout << "Still here." << endl;

    // 44.
    cout << "44. " << endl;
    // Original: 
    // char numeric[5];
    // int x = 123;
    // numeric = atoi(x); 

    // Update  1:
    string numeric;;
    int x = 123;
    numeric = to_string(x);
    cout << "numeric = " << numeric << endl;

    // Updated 2:
    // char numeric[5] = "1294";
    // int x = 123;
    // int numeric2 = atoi(numeric);

    // cout << "numeric  = " << numeric  << endl;

    // cout << "numeric  = ";
    // int count = 0;
    // while (numeric[count] != '\0')
    // {
    //     cout << numeric[count];
    //     count++;
    // }
    // cout << endl;

    // cout << "numeric2 = " << numeric2 << endl;

    // 45. 
    cout << "45. " << endl;
    // Original:
    // char string7[] = "Billy";
    // char string8[] = " Bob Jones";
    // strcat(string7, string8);

    // Updated 1:
    char string7[11] = "Billy";
    char string8[11] = " Bob Jones";
    int maxChars = sizeof(string7) - (strlen(string7) + 1); 
    cout << endl;
    cout << "maxChars =  " << maxChars << endl;
    cout << endl;
    cout << "string 7 = " << string7 << endl;
    cout << "sizeof   = " << sizeof(string7) << endl;
    cout << "strlen   = " << strlen(string7) << endl;
    cout << "sizeof(string7) - (strlen(string7) + 1) = " << sizeof(string7) - (strlen(string7) + 1) << endl;
    cout << endl;
    cout << "string 8 = " << string8 << endl;
    cout << "sizeof   = " << sizeof(string8) << endl;
    cout << "strlen   = " << strlen(string8) << endl;
    cout << "sizeof(string8) - (strlen(string8) + 1) = " << sizeof(string8) - (strlen(string8) + 1) << endl;
    cout << endl;
    strncat(string7, string8, maxChars);
    cout << endl;
    cout << "string 7 = " << string7 << endl;
    cout << "sizeof   = " << sizeof(string7) << endl;
    cout << "strlen   = " << strlen(string7) << endl;
    cout << "sizeof(string7) - (strlen(string7) + 1) = " << sizeof(string7) - (strlen(string7) + 1) << endl;
    cout << endl;
    cout << "string 8 = " << string8 << endl;
    cout << "sizeof   = " << sizeof(string8) << endl;
    cout << "strlen   = " << strlen(string8) << endl;
    cout << "sizeof(string8) - (strlen(string8) + 1) = " << sizeof(string8) - (strlen(string8) + 1) << endl;
    cout << endl;
    
    // Updated 2:
    // char string7[] = "Billy";
    // char string8[] = " Bob Jones";
    // cout << "string7 = " << string7 << endl;
    // cout << "string8 = " << string8 << endl;
    // if (sizeof(string7) >= (strlen(string7) + strlen(string8) + 1))
    //     strcat(string7, string8);
    // else
    //     cout << "String7 is not large enough for both strings." << endl;

    // 46.
    cout << "46. " << endl;
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