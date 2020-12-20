#include <iostream>
#include <string>
using namespace std;

int main()
{
    string town;
    cout << "Where do you live? ";
    cin >> town;
    cout << "Your town's name has " << town.length()
         << " characters\n";
         
    return 0;
}