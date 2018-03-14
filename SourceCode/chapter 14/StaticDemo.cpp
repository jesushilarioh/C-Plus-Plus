#include <iostream>
using namespace std;

class StaticDemo
{
private:
	int instanceVariable;		// Instance variable
	static int staticVariable;	// Static variable
public:
	void setInstanceVariable(int n)
	{ instanceVariable = n; }

	void setStaticVariable(int n)
	{ staticVariable = n; }

	int getInstanceVariable()
	{ return instanceVariable; }

	int getStaticVariable()
	{ return staticVariable; }
};

int StaticDemo::staticVariable;

int main()
{
	StaticDemo demo1, demo2;

	// Use demo1 to store values in the instanceVariable
	// and staticVariable members.
	demo1.setInstanceVariable(1);
	demo1.setStaticVariable(5);

	// Use demo2 to store a value in the instanceVariable
	// member, but do not store a value in staticVariable.
	demo2.setInstanceVariable(100);

	// Display the values in the demo1's member variables.
	cout << "demo1's members are " 
	     << demo1.getInstanceVariable() << " and "
		 << demo1.getStaticVariable() << endl;

	// Display the values in the demo2's member variables,
	// including staticVariable.
	cout << "demo2's members are " 
	     << demo2.getInstanceVariable() << " and "
		 << demo2.getStaticVariable() << endl;

	return 0;
}