// This program demonstrates a unique_ptr.
#include <iostream>
#include <memory>
using namespace std;

int main() 
{
   // Define a unique_ptr smart pointer, pointing
   // to a dynamically allocated int.
   unique_ptr<int> ptr( new int );

   // Assign 99 to the dynamically allocated int.
   *ptr = 99;

   // Display the value of the dynamically allocated int.
   cout << *ptr << endl;
   return 0;
}