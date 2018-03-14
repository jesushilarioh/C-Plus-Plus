//*********************************************
// This program demonstrates random numbers.
//
// By: Jesus Hilario Hernandez
// Last Updated: December 10, 2016
//*********************************************
#include <iostream>
#include <cstdlib>  // For rand and srand
#include <ctime>
using namespace std;

int main()
{
    // Get the system time.
    unsigned seed = time(0);

    // Seed the random number generator.
    srand(seed);

    // Display three random numbers.
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    return 0;
}
