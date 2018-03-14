//************************************************
// This program demonstrates a simple while loop
//
// By: Jesus Hilario Hernandez
// Last Updated: December 29, 2016
//
// Used from: Gaddis, "Starting Out With C++",
//  8th Edition, Pg 234
//************************************************
#include <iostream>
using namespace std;

int main()
{
    int number = 0;

    while (number < 5)
    {
        cout << "Hello\n";
        number++;
    }
    cout << "That's all!\n";
    return 0;
}
