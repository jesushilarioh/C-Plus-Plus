// This program uses the setprecision and fixed
// manipulators to format file output.
#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

int main()
{
	fstream dataFile;
	double num = 17.816392;

	dataFile.open("numfile.txt", ios::out);		// Open in output mode

	dataFile << fixed;				// Format for fixed-point notation
	dataFile << num << endl;		// Write the number

	dataFile << setprecision(4);	// Format for 4 decimal places
	dataFile << num << endl;		// Write the number

	dataFile << setprecision(3);	// Format for 3 decimal places
	dataFile << num << endl;		// Write the number

	dataFile << setprecision(2);	// Format for 2 decimal places
	dataFile << num << endl;		// Write the number

	dataFile << setprecision(1);	// Format for 1 decimal place
	dataFile << num << endl;		// Write the number

	cout << "Done.\n";
	dataFile.close();				// Close the file
	return 0;
}