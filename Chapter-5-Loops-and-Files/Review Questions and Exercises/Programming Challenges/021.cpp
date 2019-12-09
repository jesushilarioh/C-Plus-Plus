/********************************************************************
*
*	  021. Random Number Guessing Game Enhancement
*       
*       Enhance the program that you wrote for Programming 
*       Challenge 20 so it keeps a count of the number of guesses 
*       that the user makes. When the user correctly guesses the 
*       random number, the program should display the number of 
*       guesses.
*
* 	Jesus Hilario Hernandez
* 	December 9th 2019
*
********************************************************************/
#include <iostream>
#include <cstdlib>  // For rand and srand
#include <ctime>    // For the time function

using namespace std;
int main()
{
    const int MIN_VALUE = 1,
              MAX_VALUE = 10;

    int random_num,
        user_num;

    unsigned seed = time(0);

    srand(seed);


    random_num = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    cout << "Random number is: " << random_num << endl;
    cout << endl;

    cout << "Guess a number between 1 and 10." << endl;
    while(!(cin >> user_num))
    {
        cout << "Error! A number must be entered: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    while(user_num != random_num)
    {
        if (user_num < random_num)
            cout << "Your number is lower." << endl;
        else
            cout << "Your number is higher." << endl;
        cout << "Try again: ";

        while(!(cin >> user_num))
        {
            cout << "Error! A number must be entered: ";
            cin.clear();
            cin.ignore(123, '\n');
        }
    }

    cout << "\nCorrect! " << endl;
    cout << "Random number = " << random_num << endl;
    cout << "Your guess    = " << user_num   << endl;
    cout << endl;

    return 0;
}
