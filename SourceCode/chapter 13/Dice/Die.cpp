// Implememtation file for the Die class
#include <cstdlib>     // For rand and srand
#include <ctime>       // For the time function
#include "Die.h"
using namespace std;

//*******************************************************
// The constructor accepts an argument for the number   *
// of sides for the die, and performs a roll.           *
//*******************************************************
Die::Die(int numSides)
{
   // Get the system time.
   unsigned seed = time(0);
   
   // Seed the random number generator.
   srand(seed);

   // Set the number of sides.
   sides = numSides;
   
   // Perform an initial roll.
   roll();
}

//*******************************************************
// The roll member function simulates the rolling of    *
// the die.                                             *
//*******************************************************
void Die::roll()
{
   // Constant for the minimum die value
   const int MIN_VALUE = 1;   // Minimum die value

   // Get a random value for the die.
   value = (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE;
}

//*******************************************************
// The getSides member function returns the number of   *
// for this die.                                        *
//*******************************************************
int Die::getSides()
{
   return sides;
}

//*******************************************************
// The getValue member function returns the die's value.*
//*******************************************************
int Die::getValue()
{
   return value;
}

