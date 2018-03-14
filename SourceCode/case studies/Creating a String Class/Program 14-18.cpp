// This program demonstrates the MyString class.
#include <iostream>
#include "MyString.h"

int main()
{
   // Define and initialize several MyString objects.
   MyString object1("This"), object2("is");
   MyString object3("a test.");
   MyString object4 = object1;  
   MyString object5("is only a test.");
   // Define a C-string.
   char string1[] = "a test.";

   // Display the MyString objects.
   cout << "object1: " << object1 << endl;
   cout << "object2: " << object2 << endl;
   cout << "object3: " << object3 << endl;
   cout << "object4: " << object4 << endl;
   cout << "object5: " << object5 << endl;

   // Display the C-string.
   cout << "string1: " << string1 << endl;

   // Test the overloaded += operator.
   object1 += " ";
   object1 += object2;
   object1 += " ";
   object1 += object3;
   object1 += " ";
   object1 += object4;
   object1 += " ";
   object1 += object5;
   cout << "object1: " << object1 << endl;

   return 0;
}