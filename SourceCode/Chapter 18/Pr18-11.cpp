// This program demonstrates the STL deque container.
#include <iostream>
#include <deque>
using namespace std;

int main()
{
   const int MAX = 8;   // Max value
   int count;           // Loop counter
   
   // Create a deque object.
   deque<int> iDeque;

   // Enqueue a series of numbers.
   cout << "I will now enqueue items...\n";
   for (count = 2; count < MAX; count += 2)
   {
      cout << "Pushing " << count << endl;
      iDeque.push_back(count);
   }
   
   // Dequeue and display the numbers.
   cout << "I will now dequeue items...\n";
   for (count = 2; count < MAX; count += 2)
   {
      cout << "Popping "<< iDeque.front() << endl;
      iDeque.pop_front();
   }
   return 0;
}