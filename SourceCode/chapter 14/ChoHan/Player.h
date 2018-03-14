// Specification file for the Player class
#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class Player
{
private:
   string name;         // The player's name
   string guess;        // The player's guess
   int points;          // The player's points

public:
   Player(string);      // Constructor
   void makeGuess();    // Causes player to make a guess
   void addPoints(int); // Adds points to the player
   string getName();    // Returns the player's name
   string getGuess();   // Returns the player's guess
   int getPoints();     // Returns the player's points
};
#endif
