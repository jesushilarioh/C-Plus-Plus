// This program demostrates random number.

//JESUS HILARIO HERNANDEZ

//Last modified: 9/26/2016

#include <iostream>       //for input output
#include <cstdlib>        //For rand() and srand()
#include <ctime>          //for the time() function
using namespace std;

int main()
{
    //Get the system time.
    unsigned seed = time(0);

    //Seed the random number generator.
    //srand() accepts an unsigned int argument,
    //which acts as a seed value for the algorithm.
    srand(seed);

    //Display three random numbers.
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;

    return 0;
}
