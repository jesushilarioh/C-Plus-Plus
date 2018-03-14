// A demonstration of the max_element and min_element algorithms
#include <iostream>
#include <vector>    // Needed to define the vector
#include <algorithm> // Needed for the algorithms
using namespace std;

int main()
{
   // Define a vector object.
   vector<int> numbers;
   
   // Define an iterator for the vector.
   vector<int>::iterator iter;

   // Store some numbers in the vector.
   for (int count = 0; count < 10; count++)
      numbers.push_back(count);
   
   // Display the numbers in the vector.
   cout << "The numbers in the vector are:\n";
   for (iter = numbers.begin(); iter != numbers.end(); iter++)
      cout << *iter << " ";
   cout << endl << endl;
   
   // Find the largest value in the vector.
   iter = max_element(numbers.begin(), numbers.end());
   cout << "The largest value in the vector is " << *iter << endl;
   
   // Find the smallest value in the vector.
   iter = min_element(numbers.begin(), numbers.end());
   cout << "The smallest value in the vector is " << *iter << endl;
   return 0;
}