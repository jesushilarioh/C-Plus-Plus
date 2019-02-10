//**********************************************************
// This program has a partially initialized array.
//
// By: Jesus Hilario Hernandez
// Last updated: October 25, 2016
//**********************************************************
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 7;
    int numbers[SIZE] = {1, 2, 4, 8};   // Initialized first 4 elements

    cout << "Here are the contents of the array:\n";
    for (int index = 0; index < SIZE; index++)
    {
        cout << numbers[index] << " ";
    }
    cout << endl;
    return 0;
}
