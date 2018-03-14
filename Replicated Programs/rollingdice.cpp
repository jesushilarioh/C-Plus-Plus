// This program simulates rolling dice. With win-lose results in if/else if statements

//JESUS HILARIO HERNANDEZ

//Last modified: 9/26/2016

#include <iostream>       //for input output
#include <cstdlib>        //For rand() and srand()
#include <ctime>          //for the time() function
using namespace std;

int main()
{
    //Constants
    const int MIN_VALUE = 1;  //Minimum die value
    const int MAX_VALUE = 6;  //Maximum die value

    //Variables
    int die1;   //to hold the value of die #1
    int die2;   //To hold the value of die #2

    //Get the system time.
    unsigned seed = time(0);

    //Seed the random number generator.
    srand(seed);

    //Dice roll 1
    cout << "Rolling the dice...\n";
    die1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    die2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    cout << die1 << endl;
    cout << die2 << endl;

    //Win-Lose results 1
    if (die1 + die2 == 7 || die1 + die2 == 11)
        cout << "YOU WIN!\n" << endl;
    else if (die1 + die2 == 2)
        cout << "SNAKE EYES!\n" << endl;
    else
        cout << "Keep shooting!\n" << endl;

    //Dice roll 2
    cout << "Rolling the dice...\n";
    die1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    die2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    cout << die1 << endl;
    cout << die2 << endl;

    //Win-Lose results 2
    if (die1 + die2 == 7 || die1 + die2 == 11)
        cout << "YOU WIN!\n" << endl;
    else if (die1 + die2 == 2)
        cout << "SNAKE EYES!\n" << endl;
    else
        cout << "Keep shooting!\n" << endl;

    //Dice roll 3
    cout << "Rolling the dice...\n";
    die1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    die2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    cout << die1 << endl;
    cout << die2 << endl;

    //Win-Lose results 3
    if (die1 + die2 == 7 || die1 + die2 == 11)
        cout << "YOU WIN!\n" << endl;
    else if (die1 + die2 == 2)
        cout << "SNAKE EYES!\n" << endl;
    else
        cout << "Keep shooting!\n" << endl;
    return 0;
}
