#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int NAME_LENGTH = 30;
    char name1[NAME_LENGTH], name2[NAME_MAX];

    cout << "Enter a name (last name first): ";
    cin.getline(name1, NAME_LENGTH);
    cout << "Enter another name: ";
    cin.getline(name2, NAME_LENGTH);

    cout << "Here are the names sorted alphabetically:\n";
    if (strcmp(name1, name2) < 0)
        cout << name1 << endl << name2 << endl;
    else if (strcmp(name1, name2) > 0)
        cout << name2 << endl << name1 << endl;
    else
        cout << "You entered the same name twice!\n";
        
    return 0;
}