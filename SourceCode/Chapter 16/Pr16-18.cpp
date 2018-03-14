// A demonstration of the STL find algorithm.
#include <iostream>
#include <vector>    // Needed to define the vector
#include <algorithm> // Needed for the find algorithm
using namespace std;

int main()
{
   // Define a vector object.
   vector<int> numbers;
   
   // Define an iterator for the vector.
   vector<int>::iterator iter;

   // Store some numbers in the vector.
   for (int x = 0; x < 10; x++)
      numbers.push_back(x);

   // Display the numbers in the vector.
   cout << "The numbers in the vector are:\n";
   for (iter = numbers.begin(); iter != numbers.end(); iter++)
      cout << *iter << " ";
   cout << endl << endl;

   // Find the number 7 in the vector.
   iter = find(numbers.begin(), numbers.end(), 7);
   cout << *iter << endl;
   return 0;
}