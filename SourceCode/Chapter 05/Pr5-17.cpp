// This program writes user input to a file.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream outputFile;
	int number1, number2, number3;

	// Open an output file.
	outputFile.open("Numbers.txt");

	// Get three numbers from the user.
	cout << "Enter a number: ";
	cin >> number1;
	cout << "Enter another number: ";
	cin >> number2;
	cout << "One more time. Enter a number: ";
	cin >> number3;

	// Write the numbers to the file.
	outputFile << number1 << endl;
	outputFile << number2 << endl;
	outputFile << number3 << endl;
	cout << "The numbers were saved to a file.\n";

	// Close the file.
	outputFile.close();
	cout << "Done.\n";
	return 0;
}