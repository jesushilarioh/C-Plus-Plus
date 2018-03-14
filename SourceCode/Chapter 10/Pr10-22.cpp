// This program demonstrates the C++ string class.
#include <iostream>
#include <string>
using namespace std;

int main()
{
   // Define three string objects.
   string str1, str2, str3;

   // Assign values to all three.
   str1 = "ABC";
   str2 = "DEF";
   str3 = str1 + str2;
   
   // Use subscripts to display str3 one character
   // at a time.
   for (int x = 0; x < str3.size(); x++)
      cout << str3[x];
   cout << endl;
   
   // Compare str1 with str2.
   if (str1 < str2)
      cout << "str1 is less than str2\n";
   else
      cout << "str1 is not less than str2\n";
   return 0;
}