// This program demonstrates the recursive function
// for displaying the list’s nodes in reverse.
#include <iostream>
#include "NumberList.h"
using namespace std;

int main()
{
   const double MAX = 10.0;  // Upper limit of values

   // Create a NumberList object.
   NumberList list;

   // Add a series of numbers to the list.
   for (double x = 1.5; x < MAX; x += 1.1)
      list.appendNode(x);

   // Display the values in the list.
   cout << "Here are the values in the list:\n";
   list.displayList();

   // Display the values in reverse order.
   cout << "Here are the values in reverse order:\n";
   list.displayBackwards();
   return 0;
}