// This program uses subscript notation with a pointer variable and
// pointer notation with an array name.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_COINS = 5;
    double coins[NUM_COINS] = {0.05, 0.1, 0.25, 0.5, 1.0};
    double *doublePtr;
    int count;

    doublePtr = coins;
    
    cout << "\ndoublePtr = " << doublePtr << endl;
    cout << "Here are the values in the coins array:\n";
    for (count = 0; count < NUM_COINS; count++)
        cout << doublePtr[count] << " ";
    
    cout << "\n\ncoins = " << coins << endl;
    cout << "And here they are again:;\n";
    for (count = 0; count < NUM_COINS; count++)
        cout << *(coins + count) << " ";
    cout << endl << endl;
    
}