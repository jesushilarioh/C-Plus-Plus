// This program unsafely accesses an area of
// memory by writing values beyond an array's
// boundary.
// WARNING: if you compile and run the program,
//          it could crash.
#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 3;
    int values[SIZE];
    int count;

    cout << "I will store 5 numbers in a 3-element array!\n";
    for (count = 0; count < 5; count++)
        values[count] = 100;

    cout << "If you see this message, it means the program\n"
         << "has no crashed! Here are the numbers:\n";
    for (count = 0; count < 5; count++)
        cout << values[count] << endl;
        
    return 0;
}