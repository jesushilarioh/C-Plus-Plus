// This program uses relational operators to alphabetically
// sort two strings entered by the user.
#include <iostream>
#include <string>
using namespace std;

int main ()
{
   string name1, name2;

   // Get a name.
   cout << "Enter a name (last name first): ";
   getline(cin, name1);
   
   // Get another name.
   cout << "Enter another name: ";
   getline(cin, name2);
   
   // Display them in alphabetical order.
   cout << "Here are the names sorted alphabetically:\n";
   if (name1 < name2)
      cout << name1 << endl << name2 << endl;
   else if (name1 > name2)
      cout << name2 << endl << name1 << endl;
   else
      cout << "You entered the same name twice!\n";
   return 0;
}