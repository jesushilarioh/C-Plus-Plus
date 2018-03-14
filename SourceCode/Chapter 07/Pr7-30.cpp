// This program demonstrates the vector clear member function.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> values(100);

   cout << "The values vector has "
        << values.size() << " elements.\n";
   cout << "I will call the clear member function...\n";
   values.clear();
   cout << "Now, the values vector has "
        << values.size() << " elements.\n";
   return 0;
}