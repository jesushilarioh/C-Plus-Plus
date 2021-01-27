#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char arr[] = "Four score and seven years ago";
    char *strPtr = nullptr;

    cout << endl << arr << endl;
    strPtr = strstr(arr, "seven");

    cout << "strPtr  = " << strPtr << endl;
    cout << "*strPtr = " << *strPtr << endl;
    cout << "&strPtr = " << &strPtr << endl;
    
    cout << endl;

    return 0;
}