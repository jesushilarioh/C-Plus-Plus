/************************************************************
*
*   08. Coin Toss
*
*   Write a function named coinToss that simulates the 
*   tossing of a coin. When you call the function, it should 
*   generate a random number in the range of 1 through 2. If 
*   the random number is 1, the function should display 
*   “heads.” If the random number is 2, the function should 
*   display “tails.” Demonstrate the function in a program 
*   that asks the user how many times the coin should be tossed 
*   and then simulates the tossing of the coin that number of 
*   times.
*
* 	Jesus Hilario Hernandez
* 	December 10, 2018
*
*************************************************************/
#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time() function
using namespace std;

// Function Prototypes
void coinToss();
int inputValidate(int);

int main()
{
    // Variables
    int choice;
    // Get system time.
    unsigned seed = time(0);
    // Seed random number generator
    srand(seed);

    // asks user how many times coin should be tossed
    cout << "How many times should the coin be tossed? ";
    choice = inputValidate(choice);

    for (int i = 0; i < choice; i++)
        coinToss();

    return 0;
}

/********************************************************
 * Definition of coinToss function:                     *
 * The coinToss function simulates the tossing of a     *
 * coin. It generates a random number, either 1 or 2.   *
 * If 1 is generated "heads" will be displayed. If 2    *
 * it displays "tails".                                 * 
 ********************************************************/
void coinToss()
{
    // Constant local variables
    const int MIN_VALUE = 1,
              MAX_VALUE = 2;
    
    // Local variables
    int coin;

    // Assign a random number to coin variable
    coin = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

    // Display heads or tails using the conditional operator
    cout << (coin == MIN_VALUE ? "Heads" : "Tails") << endl;
}

/********************************************************
 * Definition of inputValidate function:                *
 * This function checks user input. When the            *
 * user enters anything other than an (int), the        *
 * inputValidate will display an error, clear the input *
 * stream, ignore previous input up untill the new      *
 * line (\n) character.                                 *
 ********************************************************/
int inputValidate(int num)
{
    while(!(cin >> num) || num < 0)
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}