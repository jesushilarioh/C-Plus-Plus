// JESUS HILARIO HERNANDEZ
// Last Modified: October 4th, 2016

#include <iostream>
using namespace std;

int main()
{
    char letter = 'a';

    do
    {
        cout << "Please enter a letter" << endl;
        cin >> letter;
        cout << "The letter you entered is " << letter << endl;

        //Notify user that pressing x will exit the loop.
        cout << "\nPRESS x IF YOU WISH TO EXIT.\n\n";
    }while (letter != 'x');

    return 0;
}
