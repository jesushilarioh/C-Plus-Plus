// A demonstration of the using namespace statement.
#include <iostream>
#include "nsdemo.h"
using namespace std;
using namespace demo;

int main()
{
   testObject.x = 10;
   testObject.y = 20;
   testObject.z = 30;
   cout << "The values are:\n"
        << testObject.x << " "
        << testObject.y << " "
        << testObject.z << endl;
   return 0;
}