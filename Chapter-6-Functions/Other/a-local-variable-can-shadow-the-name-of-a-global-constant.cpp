//***********************************************************
// This program demonstrates how a local variable
// can shadow the name of a global constant.
//
// By: Jesus Hilario Hernandez
// Last Updated: October 22nd, 2016
//***********************************************************
#include <iostream>
using namespace std;

// Global constant.
const int BIRDS = 500;

// Function prototype
void california();

int main()
{
    cout << "In main there are " << BIRDS
         << " birds.\n";
    california();
    cout << "In main, again, there are " << BIRDS
         << " birds.\n";
    return 0;
}

// ******************************************
// califonia function                       *
//*******************************************

void california()
{
    const int BIRDS = 10000;
    cout << "In california ther are " << BIRDS
         << " birds\n";
}
