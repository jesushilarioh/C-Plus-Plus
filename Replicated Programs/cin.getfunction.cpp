//This program demonstrates three ways
// to use cin.get() to pause a program.
#include <iostream>

using namespace std;

int main()
{
    char ch; // cin.get() uses any character to achieve it's purpose

    cout << "This program has paused. Press Enter to continue." << endl;
    cin.get(ch);    //FIRST WAY, YES VARIABLE USED
    cout << "It has paused a second time. Please press Enter again." << endl;
    ch = cin.get(); //SECOND WAY, YES VARIABLE USED
    cout << "It as paused a third time. Please press the Enter key again." << endl;
    cin.get();      // THIRD WAY, NO VARIABLE USED.
    cout << "THANK YOU!" << " Have a nice day." << endl << endl;

    return 0;
}
