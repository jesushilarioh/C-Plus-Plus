// This program counts the nodes in a list.
#include <iostream>
#include "NumberList.h"
using namespace std;

int main()
{
   const int MAX = 10;  // Maximum number of values

   // Define a NumberList object.
   NumberList list;

   // Build the list with a series of numbers.
   for (int x = 0; x < MAX; x++)
      list.insertNode(x);

   // Display the number of nodes in the list.
   cout << "The number of nodes is "
        << list.numNodes() << endl;
   return 0;
}