// This program uses a range-based for loop to
// modify the contents of an array.
#include <iostream>
using namespace std;

int main()
{
   const int SIZE = 5;
   int numbers[5];

   // Get values for the array.
   for (auto &val : numbers)
   {
      cout << "Enter an integer value: ";
      cin >> val;
   }

   // Display the values in the array.
   cout << "Here are the values you entered:\n";
   for (auto val : numbers)
      cout << val << endl;

   return 0;
}