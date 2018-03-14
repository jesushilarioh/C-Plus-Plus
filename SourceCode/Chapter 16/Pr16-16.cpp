// This program demonstrates the STL count algorithm.
#include <iostream>
#include <vector>    // Needed to define the vector
#include <algorithm> // Needed for the count algorithm
using namespace std;

int main()
{
   // Define a vector object.
   vector<int> values;
   
   // Define an iterator for the vector.
   vector<int>::iterator iter;

   // Store some values in the vector.
   values.push_back(1);
   values.push_back(2);
   values.push_back(2);
   values.push_back(3);
   values.push_back(3);
   values.push_back(3);
   
   // Display the values in the vector.
   cout << "The values in the vector are:\n";
   for (iter = values.begin(); iter < values.end(); iter++)
      cout << *iter << " ";
   cout << endl << endl;
   
   // Display the count of each number.
   cout << "The number of 1s in the vector is ";
   cout << count(values.begin(), values.end(), 1) << endl;
   cout << "The number of 2s in the vector is ";
   cout << count(values.begin(), values.end(), 2) << endl;
   cout << "The number of 3s in the vector is ";
   cout << count(values.begin(), values.end(), 3) << endl;
   return 0;
}