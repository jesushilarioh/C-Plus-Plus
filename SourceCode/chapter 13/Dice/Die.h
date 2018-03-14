// Specification file for the Die class
#ifndef DIE_H
#define DIE_H

class Die
{
private:
   int sides;   // Number of sides
   int value;   // The die's value

public:
   Die(int);        // Constructor
   void roll();     // Rolls the die
   int getSides();  // Returns the number of sides
   int getValue();  // REturns the die's value
};
#endif