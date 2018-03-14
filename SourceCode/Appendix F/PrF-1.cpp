// Demonstrates a simple namespace
#include <iostream>
using namespace std;

namespace test
{
int x, y, z;
}

int main()
{
   test::x = 10;
   test::y = 20;
   test::z = 30;
   cout << "The values are:\n";
   cout << test::x << " " << test::y
        << " " << test::z << endl;
   return 0;
}