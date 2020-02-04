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

void coinToss();
int inputValidate(int);

int main()
{
    int choice;
    unsigned seed = time(0);
    srand(seed);

    cout << "How many times should the coin be tossed? ";
    choice = inputValidate(choice);

    for (int i = 0; i < choice; i++)
        coinToss();

    return 0;
}

/********************************************************
 * inputValidate()                                      *
 ********************************************************/
int inputValidate(int num)
{
    while(!(cin >> num) || num < 0)
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return num;
}

/********************************************************
 * coinToss()                                           *
 ********************************************************/
void coinToss()
{
    const int MIN_VALUE = 1,
              MAX_VALUE = 2;
    
    int coin;

    coin = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

    cout << (coin == MIN_VALUE ? "Heads" : "Tails") << endl;
}