// This program demonstrates a class with a destructor.
#include <iostream>
#include "ContactInfo.h"
using namespace std;

int main()
{
	// Define a ContactInfo object with the following data:
	// Name: Kristen Lee  Phone Number: 555-2021
	ContactInfo entry("Kristen Lee", "555-2021");

	// Display the object's data.
	cout << "Name: " << entry.getName() << endl;
	cout << "Phone Number: " << entry.getPhoneNumber() << endl;
	return 0;
}