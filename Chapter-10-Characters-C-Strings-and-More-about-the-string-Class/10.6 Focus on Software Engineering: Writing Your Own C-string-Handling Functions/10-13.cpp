#include <iostream>
using namespace std;

void nameSlice(char[]);

int main()
{
    const int SIZE = 41;
    char name[SIZE];

    cout << "Enter you first and last names, separated " ;
    cout << "by a space:\n";
    cin.getline(name, SIZE);
    nameSlice(name);
    cout << "Your first name is: " << name << endl;

    return 0;
}
void nameSlice(char userName[])
{
    int count = 0;

    while (userName[count] != ' ' && userName[count] != '\0')
        count++;
    
    if (userName[count] == ' ')
        userName[count] = '\0';
}