// This program demonstrates a function template
// with two type parameters.
#include <iostream>
using namespace std;

template <class T1, class T2>
int largest(const T1 &var1, T2 &var2)
{
   if (sizeof(var1) > sizeof(var2))
      return sizeof(var1);
   else
      return sizeof(var2);
}

int main()
{
   int i = 0;
   char c = ' ';
   float f = 0.0;  
   double d = 0.0;
      
   cout << "Comparing an int and a double, the largest\n"
        << "of the two is " << largest(i, d) << " bytes.\n";

   cout << "Comparing an char and a float, the largest\n"
        << "of the two is " << largest(c, f) << " bytes.\n";

   return 0;
}