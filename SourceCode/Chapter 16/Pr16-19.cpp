// A demonstration of the for_each find algorithm.
#include <iostream>
#include <vector>    // Needed to define the vector
#include <algorithm> // Needed for the for_each algorithm
using namespace std;

// Function prototype
void doubleValue(int &);

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
   
   // Double the values in the vector.
   for_each(numbers.begin(), numbers.end(), doubleValue);
   
   // Display the numbers in the vector again
   cout << "Now the numbers in the vector are:\n";
   for (iter = numbers.begin(); iter != numbers.end(); iter++)
      cout << *iter << " ";
   cout << endl;
   return 0;
}

//********************************************************
// Function doubleValue. This function accepts an int    *
// reference as its argument. The value of the argument  *
// is doubled.                                           *
//********************************************************

void doubleValue(int &val)
{
   val *= 2;
}