// This program demonstrates how a misplaced semicolon
// prematurely terminates an if statement.
#include <iostream>
using namespace std;

int main()
{
   int x = 0, y = 10;

   cout << "x is " << x << " and y is " << y << endl;
   if (x > y);    // Error! Misplaced semicolon
      cout << "x is greater than y\n"; //This is always executed.
   return 0;
}