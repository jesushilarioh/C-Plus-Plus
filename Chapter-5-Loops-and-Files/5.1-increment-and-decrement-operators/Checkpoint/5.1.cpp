/********************************************************************
*
*	5.1 What will the following program segments display?
*
* 	Jesus Hilario Hernandez
* 	February 28, 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
	// What will the following program segments display?
	
	// A)
	int x = 2,
		y = x++;
	
	cout << x << y << endl; 	// 32
	
	// B)
	int a = 2,
		b = ++a;
	
	cout << a << b << endl;	 	// 33
	
	// C)
	int c = 2,
		d = 4;
	
	cout << c++ << --d << endl; // 23
	
	// D) 
	int e = 2,
		f = 2 * e++;
	
	cout << e << f << endl;		// 34
	
	// E) 
	int g = 99;
	
	if (g++ < 100)
		cout << "It is true!\n";		// "It is true!"
	else
		cout << "It is false!\n";
	
	// F) 
	int h = 0;
	
	if (++h)
		cout << "It is true!\n";		// "It is true!"
	else
		cout << "It is false!\n";

	// Terminate Program
	return 0;
}
