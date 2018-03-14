// This program demonstrates a recursive function that exhaustively
// searches through all possible combinations of coin values to find
// the best way to make change for a specified amount.
#include <iostream>
using namespace std;

// Constants
const int MAX_COINS_CHANGE = 100; // Max number of coins to give in change
const int MAX_COIN_VALUES = 6;    // Max number of coin values
const int NO_SOLUTION = INT_MAX;  // Indicates no solution

// Function prototype
void makeChange(int, int, int[], int);

// coinValues - global array of coin values to choose from
int coinValues[MAX_COIN_VALUES] = {100, 50, 25, 10, 5, 1 };

// bestCoins - global array of best coins to make change with
int bestCoins[MAX_COINS_CHANGE];

// Global variables
int numBestCoins = NO_SOLUTION,  // Number of coins in bestCoins
    numSolutions = 0,            // Number of ways to make change
    numCoins;                    // Number of allowable coins


int main()
{
   int coinsUsed[MAX_COINS_CHANGE], // List of coins used
       numCoinsUsed = 0,            // The number coins used
       amount;                      // The amount to make change for

   // Display the possible coin values.
   cout << "Here are the valid coin values, in cents: ";
   for (int index = 0; index < 5; index++)
      cout << coinValues[index] << " ";
   cout << endl;

   // Get input from the user.
   cout << "Enter the amount of cents (as an integer) "
        << "to make change for: ";
   cin >> amount;
   cout << "What is the maximum number of coins to give as change? ";
   cin >> numCoins;

   // Call the recursive function.
   makeChange(numCoins, amount, coinsUsed, numCoinsUsed);

   // Display the results.
   cout << "Number of possible combinations: " << numSolutions << endl;
   cout << "Best combination of coins:\n";
   if (numBestCoins == NO_SOLUTION)
      cout << "\tNo solution\n";
   else
   {
      for (int count = 0; count < numBestCoins; count++)
         cout << bestCoins[count] << " ";
   }
   cout << endl;
   return 0;
}

//**********************************************************************
// Function makeChange. This function uses the following parameters:   *
// coinsLeft - The number of coins left to choose from.                *
// amount - The amount to make change for.                             *
// coinsUsed - An array that contains the coin values used so far.     *
// numCoinsUsed - The number of values in the coinsUsed array.         *
//                                                                     *
// This recursive function finds all the possible ways to make change  *
// for the value in amount. The best combination of coins is stored in *
// the array bestCoins.                                                *
//**********************************************************************

void makeChange(int coinsLeft, int amount, int coinsUsed[], 
                int numCoinsUsed)
{
   int coinPos,   // To calculate array position of coin being used
       count;     // Loop counter

   if (coinsLeft == 0)   // If no more coins are left
      return;
   else if (amount < 0)  // If amount to make change for is negative
      return;
   else if (amount == 0) // If solution is found
   {
      // Store as bestCoins if best
      if (numCoinsUsed < numBestCoins)
      {
         for (count = 0; count < numCoinsUsed; count++)
            bestCoins[count] = coinsUsed[count];
         numBestCoins = numCoinsUsed;
      }
      numSolutions++;
      return;
   }

   // Find the other combinations using the coin
   coinPos = numCoins - coinsLeft;
   coinsUsed[numCoinsUsed] = coinValues[coinPos];
   numCoinsUsed++;
   makeChange(coinsLeft, amount - coinValues[coinPos], 
              coinsUsed, numCoinsUsed);

   // Find the other combinations not using the coin.
   numCoinsUsed--;
   makeChange(coinsLeft - 1, amount, coinsUsed, numCoinsUsed);
}