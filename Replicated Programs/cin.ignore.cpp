//This program successfully uses both
//cin >> and cin.get() for keyboard input.

//JESUS HILARIO HERNANDEZ

#include <iostream>
using namespace std;

int main()
{
    char ch;
    int number;

    cout << "Enter a number: " << endl;
    cin >> number;
    cin.ignore();  //Skip the newline character.
    cout << "Enter a character: " << endl;
    ch = cin.get();
    cout << "Thank You!\n" << endl;

    return 0;
}
