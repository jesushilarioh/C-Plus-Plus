#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2, str3;

    str1 = "ABC";
    str2 = "DEF";
    str3 = str1 + str2;

    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;

    str3 += "GHI";
    cout << str3 << endl;
    
    return 0;
}