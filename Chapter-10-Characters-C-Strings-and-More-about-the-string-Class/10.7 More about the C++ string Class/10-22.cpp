#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "ABC", 
           str2 = "DEF", 
           str3 = str1 + str2;

    for (int x = 0; x < str3.size(); x++)
            cout << str3[x];
    cout << endl;

    if (str1 < str2)
        cout << "str1 is less than str2\n";
    else
        cout << "str1 is not less than str2\n";

    return 0;
}