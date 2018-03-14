// This program demonstrates the C++ string class.
#include <iostream>
#include <string>
using namespace std;

int main ()
{
   // Define three string objects.
   string str1, str2, str3;

   // Assign values to all three.
   str1 = "ABC";
   str2 = "DEF";
   str3 = str1 + str2;
   
   // Display all three.
   cout << str1 << endl;
   cout << str2 << endl;
   cout << str3 << endl;
   
   // Concatenate a string onto str3 and display it.
   str3 += "GHI";
   cout << str3 << endl;
   return 0;
}