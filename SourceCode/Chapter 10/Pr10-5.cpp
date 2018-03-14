// This program displays a string stored in a char array.
#include <iostream>
using namespace std;

int main()
{
   const int SIZE = 80;  // Array size
   char line[SIZE];      // To hold a line of input
   int count = 0;        // Loop counter variable

   // Get a line of input.
   cout << "Enter a sentence of no more than " 
        << (SIZE - 1) << " characters:\n";
   cin.getline(line, SIZE);
   
   // Display the input one character at a time.
   cout << "The sentence you entered is:\n";
   while (line[count] != '\0')
   {
      cout << line[count];
      count++;
   }
   return 0;
}