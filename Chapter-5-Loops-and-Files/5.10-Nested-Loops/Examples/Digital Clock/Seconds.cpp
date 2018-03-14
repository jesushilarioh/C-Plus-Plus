/********************************************************************
*
*	This program simulates a digital clock. It displays the
*	seconds from 0 to 59.
*
* 	Jesus Hilario Hernandez
* 	February 28, 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>	// setw()
using namespace std;
int main()
{
	cout << fixed << right;
	cout.fill('0');
	for (int seconds = 0; seconds < 60; seconds++)
		cout << setw(2) << seconds << endl;	
	
	// Terminate
	return 0;
}
