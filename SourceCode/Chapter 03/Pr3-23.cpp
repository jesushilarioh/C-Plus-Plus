// This program successfully uses both
// cin >> and cin.get() for keyboard input.
#include<iostream>
using namespace std;

int main()
{
	char ch;
	int number;

	cout << "Enter a number: ";
	cin >> number;
	cin.ignore();					// Skip the newline character
	cout << "Enter a character: ";
	ch = cin.get();
	cout << "Thank You!\n";
	return 0;
}