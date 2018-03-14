// This program demonstrates the STL stack
// container adapter.
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
   const int MAX = 8;  // Max value to store in the stack
   int count;          // Loop counter
   
   // Define an STL stack
   stack< int, vector<int> > iStack;
   
   // Push values onto the stack.
   for (count = 2; count < MAX; count += 2)
   {
      cout << "Pushing " << count << endl;
      iStack.push(count);
   }
   
   // Display the size of the stack.
   cout << "The size of the stack is ";
   cout << iStack.size() << endl;
   
   // Pop the values of the stack.
   for (count = 2; count < MAX; count += 2)
   {
      cout << "Popping " << iStack.top() << endl;
      iStack.pop();
   }
   return 0;
}