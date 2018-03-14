// This program demonstrates a function, countChars, that counts
// the number of times a specific character appears in a string.
#include <iostream>
using namespace std;

int countChars(char *, char);  // Function prototype

int main()
{
   const int SIZE = 51;    // Array size
   char userString[SIZE];  // To hold a string
   char letter;            // The character to count

   // Get a string from the user.
   cout << "Enter a string (up to 50 characters): ";
   cin.getline(userString, SIZE);

   // Get a character to count occurrences of within the string.
   cout << "Enter a character and I will tell you how many\n";
   cout << "times it appears in the string: ";
   cin >> letter;

   // Display the number of times the character appears.
   cout << letter << " appears ";
   cout << countChars(userString, letter) << " times.\n";
   return 0;
}

//****************************************************************
// Definition of countChars. The parameter strPtr is a pointer   *
// that points to a string. The parameter Ch is a character that *
// the function searches for in the string. The function returns *
// the number of times the character appears in the string.      *
//****************************************************************

int countChars(char *strPtr, char ch)
{
   int times = 0;  // Number of times ch appears in the string

   // Step through the string counting occurrences of ch.
   while (*strPtr != '\0')
   {
      if (*strPtr == ch)  // If the current character equals ch...
         times++;         // ... increment the counter
      strPtr++;           // Go to the next char in the string.
   }

   return times;
}