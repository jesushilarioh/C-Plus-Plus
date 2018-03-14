/********************************************************************
*
*	5.23	Write a short program that opens the file created by the
*			program you wrote for Checkpoint 5.22, reads all of the 
*			numbers from the file, and displays them.
*
* 	Jesus Hilario Hernandez
* 	February 28, 2018
*
********************************************************************/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int number;
	
	// Declate input file stream object.
	ifstream inputFile;
	
	
	// 1. Open file
	inputFile.open("numbers.txt");
	
	
	// 2. Process file
	cout << endl;
	
	while (inputFile >> number)
		cout << number << endl;
		
	cout << endl;
	
	
	// 3. Close file
	inputFile.close();
	
	
	// Terminate program
	return 0;
}
