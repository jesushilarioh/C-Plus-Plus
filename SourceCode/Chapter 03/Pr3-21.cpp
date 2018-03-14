// This program demonstrates three ways
// to use cin.get() to pause a program
#include<iostream>
using namespace std;

int main()
{
	char ch;

	cout << "This program has paused. Press Enter to continue.";
	cin.get(ch);
	cout << "It has paused a second time. Please press Enter again.";
	ch = cin.get();
	cout << "It has paused a third time. Please press Enter again.";
	cin.get();
	cout << "Thank you!";
	return 0;
}