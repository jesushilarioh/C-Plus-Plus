// This program demonstrates how characters can be
// compared with the relational operators.
#include <iostream>
using namespace std;

int main()
{
   char ch;

   // Get a character from the user.
   cout << "Enter a digit or a letter: ";
   ch = cin.get();

   // Determine what the user entered.
   if (ch >= '0' && ch <= '9')
      cout << "You entered a digit.\n";
   else if (ch >= 'A' && ch <= 'Z')
      cout << "You entered an uppercase letter.\n";
   else if (ch >= 'a' && ch <= 'z')
      cout << "You entered a lowercase letter.\n";
   else
      cout << "That is not a digit or a letter.\n";

   return 0;
} 