//********************************************************
// This program writes the contents of an array to a file.
//
// By: Jesus Hilario Hernandez
// Last updated: October 25, 2016
//********************************************************
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int NUM_FISH = 20;
    int fish[NUM_FISH], count;
    for (count = 0; count < NUM_FISH; count++)
    {
        cout << "How many fish were caught by fisherman "
             << (count + 1) << ": " << endl;
        cin >> fish[count];
    }
    for (count = 0; count < NUM_FISH; count++)
    {
        cout << "Fisherman " << (count + 1)
             << " caught " << fish[count] << " fish." << endl;
    }

    return 0;
}
