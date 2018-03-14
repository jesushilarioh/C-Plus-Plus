// This program demonstrates the DynIntQueue class.
#include <iostream>
#include "DynIntQueue.h"
using namespace std;

int main()
{
   const int MAX_VALUES = 5;

   // Create a DynIntQueue object.
   DynIntQueue iQueue;

   // Enqueue a series of numbers.
   cout << "Enqueuing " << MAX_VALUES << " items...\n";
   for (int x = 0; x < 5; x++)
      iQueue.enqueue(x);
   
   // Dequeue and retrieve all numbers in the queue
   cout << "The values in the queue were:\n";
   while (!iQueue.isEmpty())
   {
      int value;
      iQueue.dequeue(value);
      cout << value << endl;
   }
   return 0;
}