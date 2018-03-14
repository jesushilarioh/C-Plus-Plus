// This program demonstrates that when a derived class function
// overrides a base class function, objects of the base class
// still call the base class version of the function.
#include <iostream>
using namespace std;

class BaseClass
{
public:
   void showMessage()
      { cout << "This is the Base class.\n"; }
};

class DerivedClass : public BaseClass
{
public:
   void showMessage()
      { cout << "This is the Derived class.\n"; }
};

int main()
{
   BaseClass b;
   DerivedClass d;

   b.showMessage();
   d.showMessage();

   return 0;
}