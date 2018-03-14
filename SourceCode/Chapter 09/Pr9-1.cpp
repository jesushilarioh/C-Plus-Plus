// This program uses the & operator to determine a variable’s
// address and the sizeof operator to determine its size.
#include <iostream>
using namespace std;

int main()
{
   int x = 25;

   cout << "The address of x is " << &x << endl;
   cout << "The size of x is " << sizeof(x) << " bytes\n";
   cout << "The value in x is " << x << endl;
   return 0;
}