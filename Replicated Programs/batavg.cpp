// This program will determine the batting average of a player.
// The number of hits and at bats are set internally in the program.

// JESUS HILARIO HERNANDEZ

#include <iostream>
using namespace std;


const int AT_BAT = 421;
const int HITS = 123;

int main()
{
  float batAvg;

  //an assignment statement
  batAvg = static_cast<float>(HITS) / AT_BAT;

  //output the result
  cout << "The batting average is " << batAvg << endl << endl;

  return 0;
}
