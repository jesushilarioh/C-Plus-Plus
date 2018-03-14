// Implementation file for the Dealer class
#include "Dealer.h"
#include "Die.h"
#include <string>
using namespace std;

//******************************************
// Constructor                             *
//******************************************
Dealer::Dealer()
{
   // Set the intial dice values to 0. 
   // (We will not use these values.)
   die1Value = 0;
   die2Value = 0;
}

//******************************************
// The rollDice member function rolls the  *
// dice and saves their values.            *
//******************************************
void Dealer::rollDice()
{
   // Roll the dice.
   die1.roll();
   die2.roll();

   // Save the dice values.
   die1Value = die1.getValue();
   die2Value = die2.getValue();
}

//******************************************
// The getChoOrHan member function returns *
// the result of the dice roll, Cho (even) *
// or Han (odd).                           *
//******************************************
string Dealer::getChoOrHan()
{
   string result; // To hold the result

   // Get the sum of the dice.
   int sum = die1Value + die2Value;

   // Determine even or odd.
   if (sum % 2 == 0)
      result = "Cho (even)";
   else
      result = "Han (odd)";

   // Return the result.
   return result;
}

//*******************************************
// The getDie1Value member function returns *
// the value of die #1.                     *
//*******************************************
int Dealer::getDie1Value()
{
   return die1Value;
}

//*******************************************
// The getDie2Value member function returns *
// the value of die #2.                     *
//*******************************************
int Dealer::getDie2Value()
{
   return die2Value;
}

