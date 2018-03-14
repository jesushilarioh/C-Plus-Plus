/********************************************************************
*
*	5.5 What will the following program segments display?
*
* 	Jesus Hilario Hernandez
* 	February 28, 2018
*
********************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// (A) //
	// Variables
	int count = 10;
	
	// Pretest loop
	do
	{
		cout << "Hello World\n";
		count++;
	} while (count < 1); 						// Hello World 1x
	
	
	// (B) //
	// Variables
	int v = 10;
	
	// Pretest loop
	do
		cout << v << endl;
	while (v < 5);								// 10 1x
	
	
	// (C) //
	// Variables
	int count_2 = 0, number = 0, limit = 4;
	
	// Pretest loop (user controlled loop)
	do
	{
		number += 2;
		count_2++;
	} while (count_2 < limit);
	cout << number << " " << count_2 << endl;	// 8 4
	
	// Terminate Program
	return 0;
}
