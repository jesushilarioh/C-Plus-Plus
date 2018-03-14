//**********************************************************
// This program deomonstrates the range-based for loop and
// uses a string array.
//
// By: Jesus Hilario Hernandez
// Last updated: October 26, 2016
//**********************************************************
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string planets [] = { "Mercury", "Venus", "Earth", "Mars",
                          "Jupiter", "Saturn", "Uranus",
                          "Neptune", "Pluto (a dwarf planet)"};

    cout << "Here are the planets:\n";

    // Display the values in the array.
    for (string /*auto is optional too*/ val : planets)
    {
        cout << val << endl;
    }
    return 0;
}
