/********************************************************************
*
*	5.22
*	
*			Write a short program that uses a (for) loop to write the
*			numbers 1 through 10 to a file.
*
*
* 	Jesus Hilario Hernandez
* 	February 28, 2018
*
********************************************************************/
#include <iostream>
#include <fstream>	// ofstream, open()
#include <iomanip>	// setw()

using namespace std;
int main()
{
	// Define output file stream object to link numbers.txt file
	ofstream output_file;
	
	// 1.	Open file numbers.txt through file stream object (output_file)
	// 1.	Open file numbers.txt through file stream object (output_file)
	output_file.open("numbers.txt");
	
	// Format fixed right with 0 fill
	output_file << fixed << right;
	output_file.fill('0');
	
	// 2.	Process file numbers.txt through file stream object (output_file)
	// 2.	Process file numbers.txt through file stream object (output_file)
	for (int num = 1; num <= 10; num++)
	{
		output_file << setw(2) << num << endl;
	}
	
	// 3.	Close file numbers.txt through file stream object (output_file)
	// 3.	Close file numbers.txt through file stream object (output_file)
	output_file.close();
	
	// Terminate program
	return 0;
}
