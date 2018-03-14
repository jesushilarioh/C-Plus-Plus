// This program has a subtle error in the virtual functions.
#include <iostream>
using namespace std;

class Base
{
public:
	virtual void functionA(int arg) const
	{ cout << "This is Base::functionA" << endl; }
};

class Derived : public Base
{
public:
	virtual void functionA(long arg) const
	{ cout << "This is Derived::functionA" << endl; }
};

int main()
{
	// Allocate instances of the Derived class.
	Base *b = new Derived();
	Derived *d = new Derived();

	// Call functionA with the two pointers.
	b->functionA(99);
	d->functionA(99);

	return 0;
}