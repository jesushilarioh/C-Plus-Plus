// This program shows an array name being dereferenced with the *
// operator.
#include <iostream>
using namespace std;

int main()
{
    short numbers[] = {10, 20, 30, 40, 50};

    cout << "The first element of the array is ";
    cout << *numbers << endl;

    *numbers += 9;

    cout << "The first element of the array is ";
    cout << numbers[0] << endl;

    *numbers += 10;

    cout << "The first element of the array is ";
    cout << *numbers << endl;

    numbers[0] += 10;

    cout << "The first element of the array is ";
    cout << *numbers << endl;

    *numbers += 10;
    
    cout << "The first element of the array is ";
    cout << numbers[0] << endl;

    return 0;
}