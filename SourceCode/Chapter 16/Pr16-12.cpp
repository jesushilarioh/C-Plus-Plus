// This program demonstrates the SearchableVector template.
#include <iostream>
#include "SearchableVector.h"
using namespace std;

int main()
{
   const int SIZE = 10;  // Number of elements
   int count;            // Loop counter
   int result;           // To hold search results

   // Create two SearchableVector objects.
   SearchableVector<int> intTable(SIZE);
   SearchableVector<double> doubleTable(SIZE);

   // Store values in the objects.
   for (count = 0; count < SIZE; count++)
   {
      intTable[count] = (count * 2);
      doubleTable[count] = (count * 2.14);
   }

   // Display the values in the objects.
   cout << "These values are in intTable:\n";
   for (count = 0; count < SIZE; count++)
      cout << intTable[count] << " ";
   cout << endl << endl;
   cout << "These values are in doubleTable:\n";
   for (count = 0; count < SIZE; count++)
      cout << doubleTable[count] << " ";
   cout << endl;

   // Search for the value 6 in intTable.
   cout << "\nSearching for 6 in intTable.\n";
   result = intTable.findItem(6);
   if (result == -1)
      cout << "6 was not found in intTable.\n";
   else
      cout << "6 was found at subscript " << result << endl;

   // Search for the value 12.84 in doubleTable.
   cout << "\nSearching for 12.84 in doubleTable.\n";
   result = doubleTable.findItem(12.84);
   if (result == -1)
      cout << "12.84 was not found in doubleTable.\n";
   else
      cout << "12.84 was found at subscript " << result << endl;
   return 0;
}