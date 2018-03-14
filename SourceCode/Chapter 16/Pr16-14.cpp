// This program provides a simple iterator demonstration.
#include <iostream>
#include <vector>    // Include the vector header
using namespace std;

int main()
{
   int count;  // Loop counter
   
   // Define a vector object
   vector<int> vect; 
   
   // Define an iterator object
   vector<int>::iterator iter;

   // Use push_back to push values into the vector.
   for (count = 0; count < 10; count++)
   vect.push_back(count);
   
   // Step the iterator through the vector,
   // and use it to display the vector's contents.
   cout << "Here are the values in vect: ";
   for (iter = vect.begin(); iter < vect.end(); iter++)
   {
      cout << *iter << " ";
   }
   
   // Step the iterator through the vector backwards.
   cout << "\nand here they are backwards: ";
   for (iter = vect.end() - 1; iter >= vect.begin(); iter--)
   {
      cout << *iter << " ";
   }
   return 0;
} 