// Demonstrates two namespaces
#include <iostream>
using namespace std;

namespace test1
{
   int x, y, z;
}

namespace test2
{
   int x, y, z;
}

int main()
{
   test1::x = 10;
   test1::y = 20;
   test1::z = 30;
   cout << "The test1 values are:\n";
   cout << test1::x << " " << test1::y
        << " " << test1::z << endl;
   test2::x = 1;
   test2::y = 2;
   test2::z = 3;
   cout << "The test2 values are:\n";
   cout << test2::x << " " << test2::y
        << " " << test2::z << endl;
   return 0;
}