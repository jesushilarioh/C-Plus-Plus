// This program demonstrates the range-based for loop with a vector.
#include <iostream>
#include <vector>
 using namespace std;

int main() 
{
   // Define and initialize a vector.
   vector<int> numbers { 10, 20, 30, 40, 50 };

   // Display the vector elements.
   for (int val : numbers)
      cout << val << endl;

   return 0;
}