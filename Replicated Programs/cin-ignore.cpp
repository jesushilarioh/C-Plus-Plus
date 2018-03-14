// This program sucessfully uses both
// cin >> and cin.ignore() for keyboard unput

//JESUS HILARIO HERNANDEZ

//Last modified: 9/26/2016

#include <iostream>
using namespace std;

int main()
{
    char ch;
    int number;

    cout << "Enter a number: ";
    cin >> number;
    cin.ignore();             //Skip the newline '\n' character [Enter]
    cout << "Enter a character: ";
    ch = cin.get();
    cout << "Thank You!" << endl;

    return 0;
}
