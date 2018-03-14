// This program shows three variables defined on the same line.
#include <iostream>
using namespace std;

int main()
{
   int floors, rooms, suites;

   floors = 15;
   rooms = 300;
   suites = 30;
   cout << "The Grande Hotel has " << floors << " floors\n";
   cout << "with " << rooms << " rooms and " << suites;
   cout << " suites.\n";
   return 0;
} 