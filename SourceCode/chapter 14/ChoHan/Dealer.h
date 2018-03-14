// Specification file for the Dealer class
#ifndef DEALER_H
#define DEALER_H
#include <string>
#include "Die.h"
using namespace std;

class Dealer
{
private:
   Die die1;             // Object for die #1
   Die die2;             // Object for die #2
   int die1Value;        // Value of die #1
   int die2Value;        // Value of die #2

public:
   Dealer();             // Constructor
   void rollDice();      // To roll the dice
   string getChoOrHan(); // To get the result (Cho or Han)
   int getDie1Value();   // To get the value of die #1
   int getDie2Value();   // To get the value of die #2
};
#endif

