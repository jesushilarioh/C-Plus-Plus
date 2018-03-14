// This program demonstrates a simple append
// operation on a linked list.
#include <iostream>
#include "NumberList.h"
using namespace std;

int main()
{
   // Define a NumberList object.
   NumberList list;

   // Append some values to the list.
   list.appendNode(2.5);
   list.appendNode(7.9);
   list.appendNode(12.6);
   return 0;
}